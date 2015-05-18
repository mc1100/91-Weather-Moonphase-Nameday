var iconMap = {
    "01d" : 1,
    "01n" : 2,
    "02d" : 3,
    "02n" : 4,
    "03d" : 5,
    "03n" : 6,
    "04d" : 7,
    "04n" : 8,
    "09d" : 9,
    "09n" : 10,
    "10d" : 11,
    "10n" : 12,
    "11d" : 13,
    "11n" : 14,
    "13d" : 15,
    "13n" : 16,
    "50d" : 17,
    "50n" : 18
};

function iconFromWeatherIcon(weatherIcon) {
    var icon = iconMap[weatherIcon];
    return (icon) ? icon : 0;
}

function strTime(timestamp) {
    return (timestamp) ? new Date(timestamp * 1000).toTimeString().substr(0, 5) : "--:--";
}

function fetchWeather(latitude, longitude, units, language) {
    var req = new XMLHttpRequest();
    req.open("GET", "http://api.openweathermap.org/data/2.5/weather?lat=" + latitude + "&lon=" + longitude + "&units=" + units + "&lang=" + language + "&APPID=7ea2c73b4157ffa54303ee1565edc8be", true);
    req.onload = function(e) {
        if (req.readyState == 4) {
            if (req.status == 200) {
                var response = JSON.parse(req.responseText);
                if (response) {
                    Pebble.sendAppMessage({
						"weather_recv_time": response.dt,
                        "weather_id": response.weather.id,
                        "weather_icon": response.weather.icon,
                        "weather_description": response.weather.description,
                        "weather_temperature": Math.round(response.main.temp) + " \u00B0",
                        "weather_humidity": Math.round(response.main.humidity),
                        "weather_pressure": Math.round(response.main.pressure),
                        "weather_wind_speed": Math.round(response.wind.speed),
                        "weather_wind_direction": Math.round(response.wind.deg),
                        "weather_wind_gust": Math.round(response.wind.gust),
                        "weather_clouds": Math.round(response.clouds.all),
                        "weather_rain": Math.round(response.rain["3h"]),
                        "weather_snow": Math.round(response.snow["3h"]),
                        "weather_loc_city": response.name,
                        "weather_loc_country": response.sys.country,
                        "weather_loc_lat": response.coord.lat,
                        "weather_loc_lon": response.coord.lon,
                        "weather_loc_sunrise": strTime(response.sys.sunrise),
                        "weather_loc_sunset": strTime(response.sys.sunset)
					});
                }
            } else {
                console.log("Failed to obtain weather data. Error: " + e.error.message);
                onError(2);
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
    console.log("failed to obtain location. Error: " + message);
    onError(1);
}

function onError(code) {
    Pebble.sendAppMessage({
        "error": code
    });
}

var locationOptions = {
    "timeout" : 15000,
    "maximumAge" : 60000
};

Pebble.addEventListener("ready", function(e) {
    window.navigator.geolocation.watchPosition(locationSuccess, locationError, locationOptions);
});

var options = [
	"lang",
	"unicode",
	"dateformat",
	"units",
	"calendar",
	"invert",
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

			Pebble.sendAppMessage({
					"lang": localOptions.lang,
					"unicode": localOptions.unicode,
					"dateformat": localOptions.dateformat,
					"units": localOptions.units,
					"calendar": localOptions.calendar,
					"invert": localOptions.invert,
					"blink": localOptions.blink,
					"hourlyvibe": localOptions.hourlyvibe,
					"bluetoothvibe": localOptions.bluetoothvibe
				},
				function(e) {
					console.log("Successfully sent options to Pebble: " + JSON.stringify(localOptions));
				},
				function(e) {
					console.log("Failed to send options to Pebble. Error: " + e.error.message);
				}
			);
			
		} catch (error) {
			console.log("Failed to parse options: " + error);
		}
    }
});
