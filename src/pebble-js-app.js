function fetchWeather(latitude, longitude, units, language) {
    var req = new XMLHttpRequest();
    req.open("GET", "http://api.openweathermap.org/data/2.5/weather?lat=" + latitude + "&lon=" + longitude + "&units=" + units + "&lang=" + language + "&APPID=7ea2c73b4157ffa54303ee1565edc8be", true);
    req.onload = function(e) {
        if (req.readyState == 4) {
            if (req.status == 200) {
                try {
                    var response = JSON.parse(req.responseText);
                    if (response) {
                        onWeatherData(response);
                    } else {
                        console.log("No response for fetchWeather");
                    }
                } catch (error) {
                    console.log("Failed to parse response of fetchWeather: " + error);
                }
            } else {
                onError(2, e.error.message);
            }
        }
    };
    req.send(null);
}

function locationSuccess(position) {
    var coords = position.coords;
	var units = window.localStorage.units || "metric";
	var language = window.localStorage.language || "en";
    fetchWeather(coords.latitude, coords.longitude, units, language);
}

function locationError(message) {
    onError(1, message);
}

Pebble.addEventListener("ready", function(e) {
    window.navigator.geolocation.watchPosition(locationSuccess, locationError, { "timeout" : 15000, "maximumAge" : 60000 });
});

var options = [
	"lang",
	"dateformat",
	"units",
	"calendar",
	"blink",
	"hourlyvibe",
	"bluetoothvibe"
];

Pebble.addEventListener("showConfiguration", function(e) {
	var localOptions = {};
    for (var option in options) {
		if (option in window.localStorage) {
			localOptions[option] = window.localStorage[option];
		}
	}
	
    Pebble.openURL("http://mc1100.github.io/91-Weather-Moonphase-Nameday/configuration/1/#" + JSON.stringify(localOptions));
});

Pebble.addEventListener("webviewclosed", function(e) {
    if (e.response) {
		try {
			var localOptions = JSON.parse(decodeURIComponent(e.response));
			for (var option in options) {
				if (option in localOptions) {
                    window.localStorage[option] = localOptions[option];
				}
			}

			onOptionsChanged(localOptions);
		} catch (error) {
			console.log("Failed to parse options: " + error);
		}
    } else {
        console.log("No response for webviewclosed");
    }
});

function onError(errorCode, errorMessage) {
    Pebble.sendAppMessage({
        "error_ts": Date.now() / 1000,
        "error_code": errorCode,
        "error_message": errorMessage
    },
    function(e) {
        console.log("Success sending onError");
    },
    function(e) {
        console.log("Failed to send onError, error: " + e.error.message);
    });
}

function onWeatherData(response) {
    Pebble.sendAppMessage({
        "weather_ts": Date.now() / 1000,
        "weather_response_ts": response.dt,
        "weather_id": response.weather.id,
        "weather_icon": response.weather.icon,
        "weather_description": response.weather.description,
        "weather_temperature": response.main.temp,
        "weather_humidity": response.main.humidity,
        "weather_pressure": response.main.pressure,
        "weather_wind_speed": response.wind.speed,
        "weather_wind_direction": response.wind.deg,
        "weather_wind_gust": response.wind.gust,
        "weather_clouds": response.clouds.all,
        "weather_rain": response.rain["3h"],
        "weather_snow": response.snow["3h"],
        "weather_loc_city": response.name,
        "weather_loc_country": response.sys.country,
        "weather_loc_lat": response.coord.lat,
        "weather_loc_lon": response.coord.lon,
        "weather_loc_sunrise_ts": response.sys.sunrise,
        "weather_loc_sunset_ts": response.sys.sunset
    },
    function(e) {
        console.log("Success sending onError");
    },
    function(e) {
        console.log("Failed to send onError, error: " + e.error.message);
    });
}

function onOptionsChanged(options) {
    Pebble.sendAppMessage({
        "options_changed_ts": Date.now() / 1000
    },
    function(e) {
        console.log("Success sending onOptionsChanged");
    },
    function(e) {
        console.log("Failed to send onOptionsChanged, error: " + e.error.message);
    });
}
