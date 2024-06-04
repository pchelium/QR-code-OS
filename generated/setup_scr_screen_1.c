/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_screen_1(lv_ui *ui)
{
	//Write codes screen_1
	ui->screen_1 = lv_obj_create(NULL);
	ui->g_kb_screen_1 = lv_keyboard_create(ui->screen_1);
	lv_obj_add_event_cb(ui->g_kb_screen_1, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_screen_1, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_screen_1, &lv_font_SourceHanSerifSC_Regular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->screen_1, 480, 320);
	lv_obj_set_scrollbar_mode(ui->screen_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_qrcode_1
	ui->screen_1_qrcode_1 = lv_qrcode_create(ui->screen_1, 100, lv_color_hex(0xcccccc), lv_color_hex(0x000000));
	const char * screen_1_qrcode_1_data = "";
	lv_qrcode_update(ui->screen_1_qrcode_1, screen_1_qrcode_1_data, strlen(screen_1_qrcode_1_data));
	lv_obj_set_pos(ui->screen_1_qrcode_1, 190, 142);
	lv_obj_set_size(ui->screen_1_qrcode_1, 100, 100);

	//Write codes screen_1_btn_qr_1
	ui->screen_1_btn_qr_1 = lv_btn_create(ui->screen_1);
	ui->screen_1_btn_qr_1_label = lv_label_create(ui->screen_1_btn_qr_1);
	lv_label_set_text(ui->screen_1_btn_qr_1_label, "");
	lv_label_set_long_mode(ui->screen_1_btn_qr_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_1_btn_qr_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_1_btn_qr_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_1_btn_qr_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_1_btn_qr_1, 186, 138);
	lv_obj_set_size(ui->screen_1_btn_qr_1, 108, 108);

	//Write style for screen_1_btn_qr_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_1_btn_qr_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_1_btn_qr_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_btn_qr_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_btn_qr_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_btn_qr_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_btn_qr_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_btn_qr_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_btn_qr_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_qrcode_2
	ui->screen_1_qrcode_2 = lv_qrcode_create(ui->screen_1, 230, lv_color_hex(0xcccccc), lv_color_hex(0x000000));
	const char * screen_1_qrcode_2_data = "";
	lv_qrcode_update(ui->screen_1_qrcode_2, screen_1_qrcode_2_data, strlen(screen_1_qrcode_2_data));
	lv_obj_set_pos(ui->screen_1_qrcode_2, 120, 45);
	lv_obj_set_size(ui->screen_1_qrcode_2, 230, 230);
	lv_obj_add_flag(ui->screen_1_qrcode_2, LV_OBJ_FLAG_HIDDEN);
	lv_obj_add_flag(ui->screen_1_qrcode_2, LV_OBJ_FLAG_HIDDEN);

	//Write codes screen_1_label_1
	ui->screen_1_label_1 = lv_label_create(ui->screen_1);
	lv_label_set_text(ui->screen_1_label_1, "");
	lv_label_set_long_mode(ui->screen_1_label_1, LV_LABEL_LONG_DOT);
	lv_obj_set_pos(ui->screen_1_label_1, 71, 283);
	lv_obj_set_size(ui->screen_1_label_1, 342, 29);

	//Write style for screen_1_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_1, &lv_font_montserratMedium_8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_btn_qr_2
	ui->screen_1_btn_qr_2 = lv_btn_create(ui->screen_1);
	ui->screen_1_btn_qr_2_label = lv_label_create(ui->screen_1_btn_qr_2);
	lv_label_set_text(ui->screen_1_btn_qr_2_label, "");
	lv_label_set_long_mode(ui->screen_1_btn_qr_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_1_btn_qr_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_1_btn_qr_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_1_btn_qr_2_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_1_btn_qr_2, 108, 36);
	lv_obj_set_size(ui->screen_1_btn_qr_2, 250, 242);
	lv_obj_add_flag(ui->screen_1_btn_qr_2, LV_OBJ_FLAG_HIDDEN);
	lv_obj_add_flag(ui->screen_1_btn_qr_2, LV_OBJ_FLAG_HIDDEN);

	//Write style for screen_1_btn_qr_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_1_btn_qr_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_1_btn_qr_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_btn_qr_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_btn_qr_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_btn_qr_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_btn_qr_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_btn_qr_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_btn_qr_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_ta_1
	ui->screen_1_ta_1 = lv_textarea_create(ui->screen_1);
	lv_textarea_set_text(ui->screen_1_ta_1, "https://");
	lv_textarea_set_placeholder_text(ui->screen_1_ta_1, "");
	lv_textarea_set_password_bullet(ui->screen_1_ta_1, "*");
	lv_textarea_set_password_mode(ui->screen_1_ta_1, false);
	lv_textarea_set_one_line(ui->screen_1_ta_1, false);
	lv_textarea_set_accepted_chars(ui->screen_1_ta_1, "");
	lv_textarea_set_max_length(ui->screen_1_ta_1, 150);
	#if LV_USE_KEYBOARD != 0 || LV_USE_ZH_KEYBOARD != 0
		lv_obj_add_event_cb(ui->screen_1_ta_1, ta_event_cb, LV_EVENT_ALL, ui->g_kb_screen_1);
	#endif
	lv_obj_set_pos(ui->screen_1_ta_1, 74, 52);
	lv_obj_set_size(ui->screen_1_ta_1, 200, 70);

	//Write style for screen_1_ta_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->screen_1_ta_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_ta_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_ta_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_ta_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_1_ta_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_1_ta_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_1_ta_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_1_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_1_ta_1, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_1_ta_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_ta_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_1_ta_1, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_1_ta_1, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_1_ta_1, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_1_ta_1, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_ta_1, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes screen_1_btn_1
	ui->screen_1_btn_1 = lv_btn_create(ui->screen_1);
	ui->screen_1_btn_1_label = lv_label_create(ui->screen_1_btn_1);
	lv_label_set_text(ui->screen_1_btn_1_label, "Get QR");
	lv_label_set_long_mode(ui->screen_1_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_1_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_1_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_1_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_1_btn_1, 288, 62);
	lv_obj_set_size(ui->screen_1_btn_1, 100, 50);

	//Write style for screen_1_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_1_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_1_btn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_1_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_1_btn_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_1_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_1_btn_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_1_btn_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_img_5
	ui->screen_1_img_5 = lv_img_create(ui->screen_1);
	lv_obj_add_flag(ui->screen_1_img_5, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_1_img_5, &_battery_0_alpha_30x25);
	lv_img_set_pivot(ui->screen_1_img_5, 50,50);
	lv_img_set_angle(ui->screen_1_img_5, 0);
	lv_obj_set_pos(ui->screen_1_img_5, 421, 19);
	lv_obj_set_size(ui->screen_1_img_5, 30, 25);
	lv_obj_add_flag(ui->screen_1_img_5, LV_OBJ_FLAG_HIDDEN);

	//Write style for screen_1_img_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_1_img_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_img_4
	ui->screen_1_img_4 = lv_img_create(ui->screen_1);
	lv_obj_add_flag(ui->screen_1_img_4, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_1_img_4, &_battery_2_alpha_30x25);
	lv_img_set_pivot(ui->screen_1_img_4, 50,50);
	lv_img_set_angle(ui->screen_1_img_4, 0);
	lv_obj_set_pos(ui->screen_1_img_4, 421, 19);
	lv_obj_set_size(ui->screen_1_img_4, 30, 25);
	lv_obj_add_flag(ui->screen_1_img_4, LV_OBJ_FLAG_HIDDEN);

	//Write style for screen_1_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_1_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_img_3
	ui->screen_1_img_3 = lv_img_create(ui->screen_1);
	lv_obj_add_flag(ui->screen_1_img_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_1_img_3, &_battery_3_alpha_30x25);
	lv_img_set_pivot(ui->screen_1_img_3, 50,50);
	lv_img_set_angle(ui->screen_1_img_3, 0);
	lv_obj_set_pos(ui->screen_1_img_3, 421, 19);
	lv_obj_set_size(ui->screen_1_img_3, 30, 25);
	lv_obj_add_flag(ui->screen_1_img_3, LV_OBJ_FLAG_HIDDEN);

	//Write style for screen_1_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_1_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_img_2
	ui->screen_1_img_2 = lv_img_create(ui->screen_1);
	lv_obj_add_flag(ui->screen_1_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_1_img_2, &_battery_4_alpha_30x25);
	lv_img_set_pivot(ui->screen_1_img_2, 50,50);
	lv_img_set_angle(ui->screen_1_img_2, 0);
	lv_obj_set_pos(ui->screen_1_img_2, 421, 19);
	lv_obj_set_size(ui->screen_1_img_2, 30, 25);
	lv_obj_add_flag(ui->screen_1_img_2, LV_OBJ_FLAG_HIDDEN);

	//Write style for screen_1_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_1_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_img_1
	ui->screen_1_img_1 = lv_img_create(ui->screen_1);
	lv_obj_add_flag(ui->screen_1_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_1_img_1, &_battery_5_alpha_30x25);
	lv_img_set_pivot(ui->screen_1_img_1, 50,50);
	lv_img_set_angle(ui->screen_1_img_1, 0);
	lv_obj_set_pos(ui->screen_1_img_1, 421, 19);
	lv_obj_set_size(ui->screen_1_img_1, 30, 25);
	lv_obj_add_flag(ui->screen_1_img_1, LV_OBJ_FLAG_HIDDEN);

	//Write style for screen_1_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_1_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_img_sound_status
	ui->screen_1_img_sound_status = lv_img_create(ui->screen_1);
	lv_obj_add_flag(ui->screen_1_img_sound_status, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_1_img_sound_status, &_sound_loud_alpha_25x25);
	lv_img_set_pivot(ui->screen_1_img_sound_status, 50,50);
	lv_img_set_angle(ui->screen_1_img_sound_status, 0);
	lv_obj_set_pos(ui->screen_1_img_sound_status, 382, 19);
	lv_obj_set_size(ui->screen_1_img_sound_status, 25, 25);

	//Write style for screen_1_img_sound_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->screen_1_img_sound_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor(ui->screen_1_img_sound_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->screen_1_img_sound_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_img_bell_status
	ui->screen_1_img_bell_status = lv_img_create(ui->screen_1);
	lv_obj_add_flag(ui->screen_1_img_bell_status, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_1_img_bell_status, &_bell_alpha_25x25);
	lv_img_set_pivot(ui->screen_1_img_bell_status, 50,50);
	lv_img_set_angle(ui->screen_1_img_bell_status, 0);
	lv_obj_set_pos(ui->screen_1_img_bell_status, 340, 19);
	lv_obj_set_size(ui->screen_1_img_bell_status, 25, 25);

	//Write style for screen_1_img_bell_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->screen_1_img_bell_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor(ui->screen_1_img_bell_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->screen_1_img_bell_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_img_wlan_status
	ui->screen_1_img_wlan_status = lv_img_create(ui->screen_1);
	lv_obj_add_flag(ui->screen_1_img_wlan_status, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_1_img_wlan_status, &_wlan_strength_alpha_25x25);
	lv_img_set_pivot(ui->screen_1_img_wlan_status, 50,50);
	lv_img_set_angle(ui->screen_1_img_wlan_status, 0);
	lv_obj_set_pos(ui->screen_1_img_wlan_status, 297, 19);
	lv_obj_set_size(ui->screen_1_img_wlan_status, 25, 25);

	//Write style for screen_1_img_wlan_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->screen_1_img_wlan_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor(ui->screen_1_img_wlan_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->screen_1_img_wlan_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_img_blue_status
	ui->screen_1_img_blue_status = lv_img_create(ui->screen_1);
	lv_obj_add_flag(ui->screen_1_img_blue_status, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_1_img_blue_status, &_bluetooth_alpha_25x25);
	lv_img_set_pivot(ui->screen_1_img_blue_status, 50,50);
	lv_img_set_angle(ui->screen_1_img_blue_status, 0);
	lv_obj_set_pos(ui->screen_1_img_blue_status, 259, 19);
	lv_obj_set_size(ui->screen_1_img_blue_status, 25, 25);

	//Write style for screen_1_img_blue_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->screen_1_img_blue_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor(ui->screen_1_img_blue_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->screen_1_img_blue_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_img_sound_status_off
	ui->screen_1_img_sound_status_off = lv_img_create(ui->screen_1);
	lv_obj_add_flag(ui->screen_1_img_sound_status_off, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_1_img_sound_status_off, &_sound_off_alpha_25x25);
	lv_img_set_pivot(ui->screen_1_img_sound_status_off, 50,50);
	lv_img_set_angle(ui->screen_1_img_sound_status_off, 0);
	lv_obj_set_pos(ui->screen_1_img_sound_status_off, 382, 19);
	lv_obj_set_size(ui->screen_1_img_sound_status_off, 25, 25);

	//Write style for screen_1_img_sound_status_off, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_1_img_sound_status_off, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_img_bell_status_off
	ui->screen_1_img_bell_status_off = lv_img_create(ui->screen_1);
	lv_obj_add_flag(ui->screen_1_img_bell_status_off, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_1_img_bell_status_off, &_bell_slash_alpha_25x25);
	lv_img_set_pivot(ui->screen_1_img_bell_status_off, 50,50);
	lv_img_set_angle(ui->screen_1_img_bell_status_off, 0);
	lv_obj_set_pos(ui->screen_1_img_bell_status_off, 340, 19);
	lv_obj_set_size(ui->screen_1_img_bell_status_off, 25, 25);

	//Write style for screen_1_img_bell_status_off, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_1_img_bell_status_off, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_img_blue_status_left
	ui->screen_1_img_blue_status_left = lv_img_create(ui->screen_1);
	lv_obj_add_flag(ui->screen_1_img_blue_status_left, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_1_img_blue_status_left, &_bluetooth_alpha_25x25);
	lv_img_set_pivot(ui->screen_1_img_blue_status_left, 50,50);
	lv_img_set_angle(ui->screen_1_img_blue_status_left, 0);
	lv_obj_set_pos(ui->screen_1_img_blue_status_left, 297, 19);
	lv_obj_set_size(ui->screen_1_img_blue_status_left, 25, 25);
	lv_obj_add_flag(ui->screen_1_img_blue_status_left, LV_OBJ_FLAG_HIDDEN);

	//Write style for screen_1_img_blue_status_left, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->screen_1_img_blue_status_left, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor(ui->screen_1_img_blue_status_left, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->screen_1_img_blue_status_left, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen_1.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_1);

	//Init events for screen.
	events_init_screen_1(ui);
}
