#include "watchface.h"
#include <pebble.h>

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
  window_set_fullscreen(s_window, true);
  
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

static void handle_window_unload(Window* window) {
    app_sync_deinit(&sync);
    tick_timer_service_unsubscribe();
	destroy_ui();
}

int main(void) {
	initialise_ui();
  	window_set_window_handlers(s_window, (WindowHandlers) { .unload = handle_window_unload });

	// Avoids a blank screen on watch start.
    time_t now = time(NULL);
    struct tm *tick_time = localtime(&now);
    update_display(tick_time);
    tick_timer_service_subscribe(MINUTE_UNIT, handle_minute_tick);
    Tuplet initial_values[] = {
        TupletInteger(WEATHER_ICON_KEY, (uint8_t) 0),
        TupletCString(WEATHER_TEMPERATURE_KEY, "- °"),
        TupletCString(SUNRISE_KEY, "--:--"),
        TupletCString(SUNSET_KEY, "--:--")
    };
    app_sync_init(&sync, sync_buffer, sizeof(sync_buffer), initial_values, ARRAY_LENGTH(initial_values),
            sync_tuple_changed_callback, sync_error_callback, NULL);
    app_message_open(64, 64);
	window_stack_push(s_window, true);

	app_event_loop();

    window_destroy(s_window);
}
