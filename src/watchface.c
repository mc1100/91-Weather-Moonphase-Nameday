#include <pebble.h>
#include "watchface.h"

// BEGIN AUTO-GENERATED UI CODE; DO NOT MODIFY
static Window *s_window;
static GBitmap *s_res_image_background;
static GFont s_res_bitham_42_light;
static GFont s_res_gothic_14;
static BitmapLayer *s_bitmaplayer_background;
static BitmapLayer *s_bitmaplayer_weather_icon;
static TextLayer *s_textlayer_temperature;
static TextLayer *s_textlayer_nameday;
static TextLayer *s_textlayer_day_week;
static BitmapLayer *s_bitmaplayer_weekday;
static BitmapLayer *s_bitmaplayer_d0;
static BitmapLayer *s_bitmaplayer_d1;
static BitmapLayer *s_bitmaplayer_d2;
static BitmapLayer *s_bitmaplayer_d3;
static BitmapLayer *s_bitmaplayer_d4;
static BitmapLayer *s_bitmaplayer_d5;
static BitmapLayer *s_bitmaplayer_t0;
static BitmapLayer *s_bitmaplayer_t1;
static BitmapLayer *s_bitmaplayer_t2;
static BitmapLayer *s_bitmaplayer_t3;
static TextLayer *s_textlayer_calls;
static TextLayer *s_textlayer_sms;
static BitmapLayer *s_bitmaplayer_moonphase;
static TextLayer *s_textlayer_moonphase;
static BitmapLayer *s_bitmaplayer_time_period;
static TextLayer *s_textlayer_sunset;
static TextLayer *s_textlayer_sunrise;

static void initialise_ui(void) {
  s_window = window_create();
  #ifndef PBL_SDK_3
    window_set_fullscreen(s_window, 1);
  #endif
  
  s_res_image_background = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BACKGROUND);
  s_res_bitham_42_light = fonts_get_system_font(FONT_KEY_BITHAM_42_LIGHT);
  s_res_gothic_14 = fonts_get_system_font(FONT_KEY_GOTHIC_14);
  // s_bitmaplayer_background
  s_bitmaplayer_background = bitmap_layer_create(GRect(0, 0, 144, 168));
  bitmap_layer_set_bitmap(s_bitmaplayer_background, s_res_image_background);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_bitmaplayer_background);
  
  // s_bitmaplayer_weather_icon
  s_bitmaplayer_weather_icon = bitmap_layer_create(GRect(4, 5, 50, 46));
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_bitmaplayer_weather_icon);
  
  // s_textlayer_temperature
  s_textlayer_temperature = text_layer_create(GRect(50, 1, 89, 44));
  text_layer_set_background_color(s_textlayer_temperature, GColorClear);
  text_layer_set_text_color(s_textlayer_temperature, GColorWhite);
  text_layer_set_text(s_textlayer_temperature, "-99 °");
  text_layer_set_text_alignment(s_textlayer_temperature, GTextAlignmentRight);
  text_layer_set_font(s_textlayer_temperature, s_res_bitham_42_light);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_temperature);
  
  // s_textlayer_nameday
  s_textlayer_nameday = text_layer_create(GRect(5, 50, 85, 16));
  text_layer_set_background_color(s_textlayer_nameday, GColorClear);
  text_layer_set_text_color(s_textlayer_nameday, GColorWhite);
  text_layer_set_text(s_textlayer_nameday, "Name Day");
  text_layer_set_font(s_textlayer_nameday, s_res_gothic_14);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_nameday);
  
  // s_textlayer_day_week
  s_textlayer_day_week = text_layer_create(GRect(90, 50, 49, 16));
  text_layer_set_background_color(s_textlayer_day_week, GColorClear);
  text_layer_set_text_color(s_textlayer_day_week, GColorWhite);
  text_layer_set_text(s_textlayer_day_week, "D999/T99");
  text_layer_set_font(s_textlayer_day_week, s_res_gothic_14);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_day_week);
  
  // s_bitmaplayer_weekday
  s_bitmaplayer_weekday = bitmap_layer_create(GRect(4, 71, 34, 15));
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_bitmaplayer_weekday);
  
  // s_bitmaplayer_d0
  s_bitmaplayer_d0 = bitmap_layer_create(GRect(55, 71, 10, 15));
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_bitmaplayer_d0);
  
  // s_bitmaplayer_d1
  s_bitmaplayer_d1 = bitmap_layer_create(GRect(68, 71, 10, 15));
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_bitmaplayer_d1);
  
  // s_bitmaplayer_d2
  s_bitmaplayer_d2 = bitmap_layer_create(GRect(87, 71, 10, 15));
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_bitmaplayer_d2);
  
  // s_bitmaplayer_d3
  s_bitmaplayer_d3 = bitmap_layer_create(GRect(100, 71, 10, 15));
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_bitmaplayer_d3);
  
  // s_bitmaplayer_d4
  s_bitmaplayer_d4 = bitmap_layer_create(GRect(115, 71, 10, 15));
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_bitmaplayer_d4);
  
  // s_bitmaplayer_d5
  s_bitmaplayer_d5 = bitmap_layer_create(GRect(128, 71, 10, 15));
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_bitmaplayer_d5);
  
  // s_bitmaplayer_t0
  s_bitmaplayer_t0 = bitmap_layer_create(GRect(4, 94, 26, 41));
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_bitmaplayer_t0);
  
  // s_bitmaplayer_t1
  s_bitmaplayer_t1 = bitmap_layer_create(GRect(37, 94, 26, 41));
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_bitmaplayer_t1);
  
  // s_bitmaplayer_t2
  s_bitmaplayer_t2 = bitmap_layer_create(GRect(80, 94, 26, 41));
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_bitmaplayer_t2);
  
  // s_bitmaplayer_t3
  s_bitmaplayer_t3 = bitmap_layer_create(GRect(111, 94, 26, 41));
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_bitmaplayer_t3);
  
  // s_textlayer_calls
  s_textlayer_calls = text_layer_create(GRect(10, 135, 18, 16));
  text_layer_set_background_color(s_textlayer_calls, GColorClear);
  text_layer_set_text_color(s_textlayer_calls, GColorWhite);
  text_layer_set_text(s_textlayer_calls, "999");
  text_layer_set_font(s_textlayer_calls, s_res_gothic_14);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_calls);
  
  // s_textlayer_sms
  s_textlayer_sms = text_layer_create(GRect(40, 135, 18, 16));
  text_layer_set_background_color(s_textlayer_sms, GColorClear);
  text_layer_set_text_color(s_textlayer_sms, GColorWhite);
  text_layer_set_text(s_textlayer_sms, "999");
  text_layer_set_font(s_textlayer_sms, s_res_gothic_14);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_sms);
  
  // s_bitmaplayer_moonphase
  s_bitmaplayer_moonphase = bitmap_layer_create(GRect(61, 143, 23, 23));
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_bitmaplayer_moonphase);
  
  // s_textlayer_moonphase
  s_textlayer_moonphase = text_layer_create(GRect(88, 136, 30, 16));
  text_layer_set_background_color(s_textlayer_moonphase, GColorClear);
  text_layer_set_text_color(s_textlayer_moonphase, GColorWhite);
  text_layer_set_text(s_textlayer_moonphase, "SPLN");
  text_layer_set_font(s_textlayer_moonphase, s_res_gothic_14);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_moonphase);
  
  // s_bitmaplayer_time_period
  s_bitmaplayer_time_period = bitmap_layer_create(GRect(118, 140, 19, 8));
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_bitmaplayer_time_period);
  
  // s_textlayer_sunset
  s_textlayer_sunset = text_layer_create(GRect(110, 152, 26, 16));
  text_layer_set_background_color(s_textlayer_sunset, GColorClear);
  text_layer_set_text_color(s_textlayer_sunset, GColorWhite);
  text_layer_set_text(s_textlayer_sunset, "99:99");
  text_layer_set_font(s_textlayer_sunset, s_res_gothic_14);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_sunset);
  
  // s_textlayer_sunrise
  s_textlayer_sunrise = text_layer_create(GRect(7, 152, 26, 16));
  text_layer_set_background_color(s_textlayer_sunrise, GColorClear);
  text_layer_set_text_color(s_textlayer_sunrise, GColorWhite);
  text_layer_set_text(s_textlayer_sunrise, "99:99");
  text_layer_set_font(s_textlayer_sunrise, s_res_gothic_14);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_sunrise);
}

static void destroy_ui(void) {
  window_destroy(s_window);
  bitmap_layer_destroy(s_bitmaplayer_background);
  bitmap_layer_destroy(s_bitmaplayer_weather_icon);
  text_layer_destroy(s_textlayer_temperature);
  text_layer_destroy(s_textlayer_nameday);
  text_layer_destroy(s_textlayer_day_week);
  bitmap_layer_destroy(s_bitmaplayer_weekday);
  bitmap_layer_destroy(s_bitmaplayer_d0);
  bitmap_layer_destroy(s_bitmaplayer_d1);
  bitmap_layer_destroy(s_bitmaplayer_d2);
  bitmap_layer_destroy(s_bitmaplayer_d3);
  bitmap_layer_destroy(s_bitmaplayer_d4);
  bitmap_layer_destroy(s_bitmaplayer_d5);
  bitmap_layer_destroy(s_bitmaplayer_t0);
  bitmap_layer_destroy(s_bitmaplayer_t1);
  bitmap_layer_destroy(s_bitmaplayer_t2);
  bitmap_layer_destroy(s_bitmaplayer_t3);
  text_layer_destroy(s_textlayer_calls);
  text_layer_destroy(s_textlayer_sms);
  bitmap_layer_destroy(s_bitmaplayer_moonphase);
  text_layer_destroy(s_textlayer_moonphase);
  bitmap_layer_destroy(s_bitmaplayer_time_period);
  text_layer_destroy(s_textlayer_sunset);
  text_layer_destroy(s_textlayer_sunrise);
  gbitmap_destroy(s_res_image_background);
}
// END AUTO-GENERATED UI CODE

static void set_container_image(GBitmap **bmp_image, BitmapLayer *bmp_layer, const int resource_id, GPoint origin) {
    GBitmap *old_image = *bmp_image;

    *bmp_image = gbitmap_create_with_resource(resource_id);
    GRect frame = (GRect) {
            .origin = origin,
            .size = (*bmp_image)->bounds.size
    };
    bitmap_layer_set_bitmap(bmp_layer, *bmp_image);
    layer_set_frame(bitmap_layer_get_layer(bmp_layer), frame);

    if (old_image) {
        gbitmap_destroy(old_image);
    }
}

static unsigned short get_display_hour(unsigned short hour) {
    if (clock_is_24h_style()) {
        return hour;
    }

    unsigned short display_hour = hour % 12;

    // converts "0" to "12"
    return display_hour ? display_hour : 12;
}

static double frac(double a) {
    return a - floor(a);
}

static double fmod(double a, double b) {
    double c = frac(fabs(a / b)) * fabs(b);
    return (a < 0) ? -c : c;
}

/*
 * Calculates the moon phase (0-7), accurate to 1 segment.
 * 0 = > new moon.
 * 4 => full moon.
 */
static int get_moon_phase() {
    return (int) (round(fmod((time(NULL) - 592500) / 86400.d, 29.53058868) * 8 / 29.53058868d)) & 7;
}

static void handle_tick(struct tm *tick_time, TimeUnits units_changed) {
    unsigned short display_hour = get_display_hour(current_time->tm_hour);

    // Minute
    set_container_image(&time_digits_images[2], time_digits_layers[2], BIG_DIGIT_IMAGE_RESOURCE_IDS[current_time->tm_min / 10],
            GPoint(80, 94));
    set_container_image(&time_digits_images[3], time_digits_layers[3], BIG_DIGIT_IMAGE_RESOURCE_IDS[current_time->tm_min % 10],
            GPoint(111, 94));

    if (the_last_hour != display_hour) {
        int h = display_hour / 10;
        if (!clock_is_24h_style()) {
            if (the_last_hour == 25 || display_hour == 12) {
                set_container_image(&time_format_image, time_format_layer,
                        (current_time->tm_hour < 12) ? RESOURCE_ID_IMAGE_AM_MODE : RESOURCE_ID_IMAGE_PM_MODE, GPoint(118, 140));
            }
            if (!h) {
                h = 10;
            }
        }

        // Hour
        set_container_image(&time_digits_images[0], time_digits_layers[0], BIG_DIGIT_IMAGE_RESOURCE_IDS[h], GPoint(4, 94));
        set_container_image(&time_digits_images[1], time_digits_layers[1],
                BIG_DIGIT_IMAGE_RESOURCE_IDS[display_hour % 10], GPoint(37, 94));

        if (the_last_hour == 25 || !current_time->tm_hour) {
            // Day of week
            set_container_image(&day_name_image, day_name_layer,
                    DAY_NAME_IMAGE_RESOURCE_IDS[current_time->tm_wday], GPoint(4, 71));

            // Day
            set_container_image(&date_digits_images[0], date_digits_layers[0],
                    DATENUM_IMAGE_RESOURCE_IDS[current_time->tm_mday / 10], GPoint(55, 71));
            set_container_image(&date_digits_images[1], date_digits_layers[1],
                    DATENUM_IMAGE_RESOURCE_IDS[current_time->tm_mday % 10], GPoint(68, 71));

            // Month
            set_container_image(&date_digits_images[2], date_digits_layers[2],
                    DATENUM_IMAGE_RESOURCE_IDS[(current_time->tm_mon + 1) / 10], GPoint(87, 71));
            set_container_image(&date_digits_images[3], date_digits_layers[3],
                    DATENUM_IMAGE_RESOURCE_IDS[(current_time->tm_mon + 1) % 10], GPoint(100, 71));

            // Year
            set_container_image(&date_digits_images[4], date_digits_layers[4],
                    DATENUM_IMAGE_RESOURCE_IDS[(current_time->tm_year % 100) / 10], GPoint(115, 71));
            set_container_image(&date_digits_images[5], date_digits_layers[5],
                    DATENUM_IMAGE_RESOURCE_IDS[(current_time->tm_year % 100) % 10], GPoint(128, 71));

            // moon phase
            int moonphase = get_moon_phase();
            set_container_image(&moon_phase_image, moon_phase_layer, MOON_IMAGE_RESOURCE_IDS[moonphase], GPoint(61, 143));
            text_layer_set_text(moon_layer, moon_phase_text[moonphase]);

            // nameday
            text_layer_set_text(nd_layer, nameday_text[current_time->tm_mon][current_time->tm_mday - 1]);

            // day & calendar week
            static char cw_text[9];
            strftime(cw_text, sizeof(cw_text), "D%j/T%V", current_time);
            text_layer_set_text(cw_layer, cw_text);
        }

        the_last_hour = display_hour;
    }
}

static AppSync s_sync;
static uint8_t s_sync_buffer[128];

static void sync_changed_handler(const uint32_t key, const Tuple *new_tuple, const Tuple *old_tuple, void *context) {
	switch (key) {
    case WEATHER_ICON_KEY:
        set_container_image(&weather_image, weather_layer, WEATHER_IMAGE_RESOURCE_IDS[new_tuple->value->uint8], GPoint(4, 5));
        break;
    case WEATHER_TEMPERATURE_KEY:
        text_layer_set_text(text_temperature_layer, new_tuple->value->cstring);
        break;
    case SUNRISE_KEY:
        text_layer_set_text(text_sunrise_layer, new_tuple->value->cstring);
        break;
    case SUNSET_KEY:
        text_layer_set_text(text_sunset_layer, new_tuple->value->cstring);
        break;
    }
}

static void sync_error_handler(DictionaryResult dict_error, AppMessageResult app_message_error, void *context) {
  APP_LOG(APP_LOG_LEVEL_ERROR, "dictionary sync error!");
}

static void handle_bluetooth_connection(bool connected) {
    if (!connected /* && settings.BluetoothVibe*/) {
        vibes_long_pulse();
    }

//    layer_set_hidden(bitmap_layer_get_layer(bluetooth_layer), !connected);
}

static void handle_battery_state(BatteryChargeState charge) {
}

static void handle_window_unload(Window* window) {
    tick_timer_service_unsubscribe();
    app_sync_deinit(&s_sync);
	bluetooth_connection_service_unsubscribe();
	battery_state_service_unsubscribe();
	destroy_ui();
}

int main(void) {
	initialise_ui();
  	window_set_window_handlers(s_window, (WindowHandlers) { .unload = handle_window_unload });

//    if (clock_is_24h_style()) {
//        time_format_image = gbitmap_create_with_resource((clock_is_24h_style()) ? RESOURCE_ID_IMAGE_24_HOUR_MODE : RESOURCE_ID_IMAGE_AM_MODE);
//        GRect frame = (GRect) {
//                .origin = { .x = 118, .y = 140 },
//                .size = time_format_image->bounds.size
//        };
//        time_format_layer = bitmap_layer_create(frame);
//        bitmap_layer_set_bitmap(time_format_layer, time_format_image);
//        layer_add_child(window_layer, bitmap_layer_get_layer(time_format_layer));
//    } else {
//        time_format_layer = bitmap_layer_create(GRectZero);
//        layer_add_child(window_layer, bitmap_layer_get_layer(time_format_layer));
//    }

	// Avoids a blank screen on watch start.
//    time_t now = time(NULL);
//    struct tm *tick_time = localtime(&now);
//    handle_tick(tick_time, MINUTE_UNIT);

	tick_timer_service_subscribe(MINUTE_UNIT, handle_tick);

	app_message_open(app_message_inbox_size_maximum(), app_message_outbox_size_maximum());
	Tuplet initial_values[] = {
//        TupletInteger(WEATHER_ICON_KEY, (uint8_t) 0),
//        TupletCString(WEATHER_TEMPERATURE_KEY, "- °"),
//        TupletCString(SUNRISE_KEY, "--:--"),
//        TupletCString(SUNSET_KEY, "--:--")
	};
	app_sync_init(&s_sync, s_sync_buffer, sizeof(s_sync_buffer), initial_values, ARRAY_LENGTH(initial_values), sync_changed_handler, sync_error_handler, NULL);

    bluetooth_connection_service_subscribe(handle_bluetooth_connection);

	battery_state_service_subscribe(handle_battery_state);

	window_stack_push(s_window, true);
	app_event_loop();
    window_destroy(s_window);
}
