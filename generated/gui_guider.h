/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *screen;
	bool screen_del;
	lv_obj_t *g_kb_screen;
	lv_obj_t *screen_digital_clock_1;
	lv_obj_t *screen_img_5;
	lv_obj_t *screen_img_4;
	lv_obj_t *screen_img_3;
	lv_obj_t *screen_img_2;
	lv_obj_t *screen_img_1;
	lv_obj_t *screen_img_sound_status;
	lv_obj_t *screen_img_bell_status;
	lv_obj_t *screen_img_blue_status;
	lv_obj_t *screen_img_wlan_status;
	lv_obj_t *screen_img_sound_status_off;
	lv_obj_t *screen_img_bell_status_off;
	lv_obj_t *screen_img_blue_status_left;
	lv_obj_t *screen_label_1;
	lv_obj_t *screen_1;
	bool screen_1_del;
	lv_obj_t *g_kb_screen_1;
	lv_obj_t *screen_1_qrcode_1;
	lv_obj_t *screen_1_btn_qr_1;
	lv_obj_t *screen_1_btn_qr_1_label;
	lv_obj_t *screen_1_qrcode_2;
	lv_obj_t *screen_1_label_1;
	lv_obj_t *screen_1_btn_qr_2;
	lv_obj_t *screen_1_btn_qr_2_label;
	lv_obj_t *screen_1_ta_1;
	lv_obj_t *screen_1_btn_1;
	lv_obj_t *screen_1_btn_1_label;
	lv_obj_t *screen_1_img_5;
	lv_obj_t *screen_1_img_4;
	lv_obj_t *screen_1_img_3;
	lv_obj_t *screen_1_img_2;
	lv_obj_t *screen_1_img_1;
	lv_obj_t *screen_1_img_sound_status;
	lv_obj_t *screen_1_img_bell_status;
	lv_obj_t *screen_1_img_wlan_status;
	lv_obj_t *screen_1_img_blue_status;
	lv_obj_t *screen_1_img_sound_status_off;
	lv_obj_t *screen_1_img_bell_status_off;
	lv_obj_t *screen_1_img_blue_status_left;
	lv_obj_t *screen_2;
	bool screen_2_del;
	lv_obj_t *g_kb_screen_2;
	lv_obj_t *screen_2_led_1;
	lv_obj_t *screen_2_img_1;
	lv_obj_t *screen_2_img_6;
	lv_obj_t *screen_2_img_5;
	lv_obj_t *screen_2_img_4;
	lv_obj_t *screen_2_img_3;
	lv_obj_t *screen_2_img_2;
	lv_obj_t *screen_2_btn_1;
	lv_obj_t *screen_2_btn_1_label;
	lv_obj_t *screen_2_img_8;
	lv_obj_t *screen_2_img_7;
	lv_obj_t *screen_menu;
	bool screen_menu_del;
	lv_obj_t *g_kb_screen_menu;
	lv_obj_t *screen_menu_img_sound_on;
	lv_obj_t *screen_menu_img_bell_on;
	lv_obj_t *screen_menu_img_bell_off;
	lv_obj_t *screen_menu_img_blue_on;
	lv_obj_t *screen_menu_img_blue_off;
	lv_obj_t *screen_menu_img_wlan_on;
	lv_obj_t *screen_menu_img_wlan_off;
	lv_obj_t *screen_menu_img_sound_off;
	lv_obj_t *screen_menu_img_power_off;
	lv_obj_t *screen_off;
	bool screen_off_del;
	lv_obj_t *g_kb_screen_off;
	lv_obj_t *screen_start_loading;
	bool screen_start_loading_del;
	lv_obj_t *g_kb_screen_start_loading;
	lv_obj_t *screen_start_loading_label_1;
	lv_obj_t *screen_start_loading_spinner_1;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_move_animation(void * var, int32_t duration, int32_t delay, int32_t x_end, int32_t y_end, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_scale_animation(void * var, int32_t duration, int32_t delay, int32_t width, int32_t height, lv_anim_path_cb_t path_cb,
                        uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                        lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_img_zoom_animation(void * var, int32_t duration, int32_t delay, int32_t zoom, lv_anim_path_cb_t path_cb,
                           uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                           lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_img_rotate_animation(void * var, int32_t duration, int32_t delay, lv_coord_t x, lv_coord_t y, int32_t rotate,
                   lv_anim_path_cb_t path_cb, uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time,
                   uint32_t playback_delay, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);


extern lv_ui guider_ui;


void setup_scr_screen(lv_ui *ui);
void setup_scr_screen_1(lv_ui *ui);
void setup_scr_screen_2(lv_ui *ui);
void setup_scr_screen_menu(lv_ui *ui);
void setup_scr_screen_off(lv_ui *ui);
void setup_scr_screen_start_loading(lv_ui *ui);
LV_IMG_DECLARE(_battery_0_alpha_30x25);
LV_IMG_DECLARE(_battery_2_alpha_30x25);
LV_IMG_DECLARE(_battery_3_alpha_30x25);
LV_IMG_DECLARE(_battery_4_alpha_30x25);
LV_IMG_DECLARE(_battery_5_alpha_30x25);
LV_IMG_DECLARE(_sound_loud_alpha_25x25);
LV_IMG_DECLARE(_bell_alpha_25x25);
LV_IMG_DECLARE(_bluetooth_alpha_25x25);
LV_IMG_DECLARE(_wlan_strength_alpha_25x25);
LV_IMG_DECLARE(_sound_off_alpha_25x25);
LV_IMG_DECLARE(_bell_slash_alpha_25x25);
LV_IMG_DECLARE(_bluetooth_alpha_25x25);
LV_IMG_DECLARE(_battery_0_alpha_30x25);
LV_IMG_DECLARE(_battery_2_alpha_30x25);
LV_IMG_DECLARE(_battery_3_alpha_30x25);
LV_IMG_DECLARE(_battery_4_alpha_30x25);
LV_IMG_DECLARE(_battery_5_alpha_30x25);
LV_IMG_DECLARE(_sound_loud_alpha_25x25);
LV_IMG_DECLARE(_bell_alpha_25x25);
LV_IMG_DECLARE(_wlan_strength_alpha_25x25);
LV_IMG_DECLARE(_bluetooth_alpha_25x25);
LV_IMG_DECLARE(_sound_off_alpha_25x25);
LV_IMG_DECLARE(_bell_slash_alpha_25x25);
LV_IMG_DECLARE(_bluetooth_alpha_25x25);
LV_IMG_DECLARE(_charge_battery_alpha_30x25);
LV_IMG_DECLARE(_battery_0_alpha_30x25);
LV_IMG_DECLARE(_battery_2_alpha_30x25);
LV_IMG_DECLARE(_battery_3_alpha_30x25);
LV_IMG_DECLARE(_battery_4_alpha_30x25);
LV_IMG_DECLARE(_battery_5_alpha_30x25);
LV_IMG_DECLARE(_reload_alpha_27x27);
LV_IMG_DECLARE(_arrow_right_4_alpha_38x34);
LV_IMG_DECLARE(_sound_loud_alpha_50x50);
LV_IMG_DECLARE(_bell_alpha_50x50);
LV_IMG_DECLARE(_bell_slash_alpha_50x50);
LV_IMG_DECLARE(_bluetooth_alpha_50x50);
LV_IMG_DECLARE(_bluetooth_slash_alpha_50x50);
LV_IMG_DECLARE(_wlan_strength_alpha_50x50);
LV_IMG_DECLARE(_wlan_off_alpha_50x50);
LV_IMG_DECLARE(_sound_off_alpha_50x50);
LV_IMG_DECLARE(_power_red_alpha_50x50);

LV_FONT_DECLARE(lv_font_montserratMedium_35)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_ArchitectsDaughter_12)
LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_montserratMedium_8)
LV_FONT_DECLARE(lv_font_ArchitectsDaughter_40)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_18)


#ifdef __cplusplus
}
#endif
#endif
