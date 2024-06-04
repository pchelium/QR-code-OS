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



void setup_scr_screen_2(lv_ui *ui)
{
	//Write codes screen_2
	ui->screen_2 = lv_obj_create(NULL);
	ui->g_kb_screen_2 = lv_keyboard_create(ui->screen_2);
	lv_obj_add_event_cb(ui->g_kb_screen_2, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_screen_2, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_screen_2, &lv_font_SourceHanSerifSC_Regular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->screen_2, 480, 320);
	lv_obj_set_scrollbar_mode(ui->screen_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_led_1
	ui->screen_2_led_1 = lv_led_create(ui->screen_2);
	lv_led_set_brightness(ui->screen_2_led_1, 255);
	lv_led_set_color(ui->screen_2_led_1, lv_color_hex(0x000000));
	lv_obj_set_pos(ui->screen_2_led_1, 84, 160);
	lv_obj_set_size(ui->screen_2_led_1, 22, 2);

	//Write codes screen_2_img_1
	ui->screen_2_img_1 = lv_img_create(ui->screen_2);
	lv_obj_add_flag(ui->screen_2_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_2_img_1, &_charge_battery_alpha_30x25);
	lv_img_set_pivot(ui->screen_2_img_1, 50,50);
	lv_img_set_angle(ui->screen_2_img_1, 0);
	lv_obj_set_pos(ui->screen_2_img_1, 80, 148);
	lv_obj_set_size(ui->screen_2_img_1, 30, 25);

	//Write style for screen_2_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_2_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_img_6
	ui->screen_2_img_6 = lv_img_create(ui->screen_2);
	lv_obj_add_flag(ui->screen_2_img_6, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_2_img_6, &_battery_0_alpha_30x25);
	lv_img_set_pivot(ui->screen_2_img_6, 50,50);
	lv_img_set_angle(ui->screen_2_img_6, 0);
	lv_obj_set_pos(ui->screen_2_img_6, 216, 242);
	lv_obj_set_size(ui->screen_2_img_6, 30, 25);

	//Write style for screen_2_img_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_2_img_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_img_5
	ui->screen_2_img_5 = lv_img_create(ui->screen_2);
	lv_obj_add_flag(ui->screen_2_img_5, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_2_img_5, &_battery_2_alpha_30x25);
	lv_img_set_pivot(ui->screen_2_img_5, 50,50);
	lv_img_set_angle(ui->screen_2_img_5, 0);
	lv_obj_set_pos(ui->screen_2_img_5, 216, 196);
	lv_obj_set_size(ui->screen_2_img_5, 30, 25);

	//Write style for screen_2_img_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_2_img_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_img_4
	ui->screen_2_img_4 = lv_img_create(ui->screen_2);
	lv_obj_add_flag(ui->screen_2_img_4, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_2_img_4, &_battery_3_alpha_30x25);
	lv_img_set_pivot(ui->screen_2_img_4, 50,50);
	lv_img_set_angle(ui->screen_2_img_4, 0);
	lv_obj_set_pos(ui->screen_2_img_4, 216, 149);
	lv_obj_set_size(ui->screen_2_img_4, 30, 25);

	//Write style for screen_2_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_2_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_img_3
	ui->screen_2_img_3 = lv_img_create(ui->screen_2);
	lv_obj_add_flag(ui->screen_2_img_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_2_img_3, &_battery_4_alpha_30x25);
	lv_img_set_pivot(ui->screen_2_img_3, 50,50);
	lv_img_set_angle(ui->screen_2_img_3, 0);
	lv_obj_set_pos(ui->screen_2_img_3, 216, 101);
	lv_obj_set_size(ui->screen_2_img_3, 30, 25);

	//Write style for screen_2_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_2_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_img_2
	ui->screen_2_img_2 = lv_img_create(ui->screen_2);
	lv_obj_add_flag(ui->screen_2_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_2_img_2, &_battery_5_alpha_30x25);
	lv_img_set_pivot(ui->screen_2_img_2, 50,50);
	lv_img_set_angle(ui->screen_2_img_2, 0);
	lv_obj_set_pos(ui->screen_2_img_2, 216, 53);
	lv_obj_set_size(ui->screen_2_img_2, 30, 25);

	//Write style for screen_2_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_2_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_btn_1
	ui->screen_2_btn_1 = lv_btn_create(ui->screen_2);
	ui->screen_2_btn_1_label = lv_label_create(ui->screen_2_btn_1);
	lv_label_set_text(ui->screen_2_btn_1_label, "START");
	lv_label_set_long_mode(ui->screen_2_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_2_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_2_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_2_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_2_btn_1, 344, 229);
	lv_obj_set_size(ui->screen_2_btn_1, 100, 50);

	//Write style for screen_2_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_2_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_2_btn_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_2_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_2_btn_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_2_btn_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_btn_1, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_2_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_2_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_2_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_2_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_2_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_img_8
	ui->screen_2_img_8 = lv_img_create(ui->screen_2);
	lv_img_set_src(ui->screen_2_img_8, &_reload_alpha_27x27);
	lv_img_set_pivot(ui->screen_2_img_8, 50,50);
	lv_img_set_angle(ui->screen_2_img_8, 0);
	lv_obj_set_pos(ui->screen_2_img_8, 216, 12);
	lv_obj_set_size(ui->screen_2_img_8, 27, 27);
	lv_obj_add_flag(ui->screen_2_img_8, LV_OBJ_FLAG_CLICKABLE);

	//Write style for screen_2_img_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_2_img_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_img_7
	ui->screen_2_img_7 = lv_img_create(ui->screen_2);
	lv_obj_add_flag(ui->screen_2_img_7, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_2_img_7, &_arrow_right_4_alpha_38x34);
	lv_img_set_pivot(ui->screen_2_img_7, 50,50);
	lv_img_set_angle(ui->screen_2_img_7, 0);
	lv_obj_set_pos(ui->screen_2_img_7, 163, 143);
	lv_obj_set_size(ui->screen_2_img_7, 38, 34);

	//Write style for screen_2_img_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_2_img_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen_2.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_2);

	//Init events for screen.
	events_init_screen_2(ui);
}
