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



void setup_scr_screen_menu(lv_ui *ui)
{
	//Write codes screen_menu
	ui->screen_menu = lv_obj_create(NULL);
	ui->g_kb_screen_menu = lv_keyboard_create(ui->screen_menu);
	lv_obj_add_event_cb(ui->g_kb_screen_menu, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_screen_menu, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_screen_menu, &lv_font_SourceHanSerifSC_Regular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->screen_menu, 480, 320);
	lv_obj_set_scrollbar_mode(ui->screen_menu, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_menu, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_menu, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_menu, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_menu, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_menu_img_sound_on
	ui->screen_menu_img_sound_on = lv_img_create(ui->screen_menu);
	lv_img_set_src(ui->screen_menu_img_sound_on, &_sound_loud_alpha_50x50);
	lv_img_set_pivot(ui->screen_menu_img_sound_on, 50,50);
	lv_img_set_angle(ui->screen_menu_img_sound_on, 0);
	lv_obj_set_pos(ui->screen_menu_img_sound_on, 283, 135);
	lv_obj_set_size(ui->screen_menu_img_sound_on, 50, 50);
	lv_obj_add_flag(ui->screen_menu_img_sound_on, LV_OBJ_FLAG_CLICKABLE);

	//Write style for screen_menu_img_sound_on, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_menu_img_sound_on, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_menu_img_bell_on
	ui->screen_menu_img_bell_on = lv_img_create(ui->screen_menu);
	lv_img_set_src(ui->screen_menu_img_bell_on, &_bell_alpha_50x50);
	lv_img_set_pivot(ui->screen_menu_img_bell_on, 50,50);
	lv_img_set_angle(ui->screen_menu_img_bell_on, 0);
	lv_obj_set_pos(ui->screen_menu_img_bell_on, 202, 135);
	lv_obj_set_size(ui->screen_menu_img_bell_on, 50, 50);
	lv_obj_add_flag(ui->screen_menu_img_bell_on, LV_OBJ_FLAG_CLICKABLE);

	//Write style for screen_menu_img_bell_on, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_menu_img_bell_on, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_menu_img_bell_off
	ui->screen_menu_img_bell_off = lv_img_create(ui->screen_menu);
	lv_img_set_src(ui->screen_menu_img_bell_off, &_bell_slash_alpha_50x50);
	lv_img_set_pivot(ui->screen_menu_img_bell_off, 50,50);
	lv_img_set_angle(ui->screen_menu_img_bell_off, 0);
	lv_obj_set_pos(ui->screen_menu_img_bell_off, 202, 135);
	lv_obj_set_size(ui->screen_menu_img_bell_off, 50, 50);
	lv_obj_add_flag(ui->screen_menu_img_bell_off, LV_OBJ_FLAG_CLICKABLE);

	//Write style for screen_menu_img_bell_off, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_menu_img_bell_off, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_menu_img_blue_on
	ui->screen_menu_img_blue_on = lv_img_create(ui->screen_menu);
	lv_img_set_src(ui->screen_menu_img_blue_on, &_bluetooth_alpha_50x50);
	lv_img_set_pivot(ui->screen_menu_img_blue_on, 50,50);
	lv_img_set_angle(ui->screen_menu_img_blue_on, 0);
	lv_obj_set_pos(ui->screen_menu_img_blue_on, 46, 135);
	lv_obj_set_size(ui->screen_menu_img_blue_on, 50, 50);
	lv_obj_add_flag(ui->screen_menu_img_blue_on, LV_OBJ_FLAG_CLICKABLE);

	//Write style for screen_menu_img_blue_on, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_menu_img_blue_on, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_menu_img_blue_off
	ui->screen_menu_img_blue_off = lv_img_create(ui->screen_menu);
	lv_img_set_src(ui->screen_menu_img_blue_off, &_bluetooth_slash_alpha_50x50);
	lv_img_set_pivot(ui->screen_menu_img_blue_off, 50,50);
	lv_img_set_angle(ui->screen_menu_img_blue_off, 0);
	lv_obj_set_pos(ui->screen_menu_img_blue_off, 46, 135);
	lv_obj_set_size(ui->screen_menu_img_blue_off, 50, 50);
	lv_obj_add_flag(ui->screen_menu_img_blue_off, LV_OBJ_FLAG_CLICKABLE);

	//Write style for screen_menu_img_blue_off, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_menu_img_blue_off, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_menu_img_wlan_on
	ui->screen_menu_img_wlan_on = lv_img_create(ui->screen_menu);
	lv_img_set_src(ui->screen_menu_img_wlan_on, &_wlan_strength_alpha_50x50);
	lv_img_set_pivot(ui->screen_menu_img_wlan_on, 50,50);
	lv_img_set_angle(ui->screen_menu_img_wlan_on, 0);
	lv_obj_set_pos(ui->screen_menu_img_wlan_on, 127, 135);
	lv_obj_set_size(ui->screen_menu_img_wlan_on, 50, 50);
	lv_obj_add_flag(ui->screen_menu_img_wlan_on, LV_OBJ_FLAG_CLICKABLE);

	//Write style for screen_menu_img_wlan_on, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_menu_img_wlan_on, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_menu_img_wlan_off
	ui->screen_menu_img_wlan_off = lv_img_create(ui->screen_menu);
	lv_img_set_src(ui->screen_menu_img_wlan_off, &_wlan_off_alpha_50x50);
	lv_img_set_pivot(ui->screen_menu_img_wlan_off, 50,50);
	lv_img_set_angle(ui->screen_menu_img_wlan_off, 0);
	lv_obj_set_pos(ui->screen_menu_img_wlan_off, 127, 135);
	lv_obj_set_size(ui->screen_menu_img_wlan_off, 50, 50);
	lv_obj_add_flag(ui->screen_menu_img_wlan_off, LV_OBJ_FLAG_CLICKABLE);

	//Write style for screen_menu_img_wlan_off, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_menu_img_wlan_off, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_menu_img_sound_off
	ui->screen_menu_img_sound_off = lv_img_create(ui->screen_menu);
	lv_img_set_src(ui->screen_menu_img_sound_off, &_sound_off_alpha_50x50);
	lv_img_set_pivot(ui->screen_menu_img_sound_off, 50,50);
	lv_img_set_angle(ui->screen_menu_img_sound_off, 0);
	lv_obj_set_pos(ui->screen_menu_img_sound_off, 283, 135);
	lv_obj_set_size(ui->screen_menu_img_sound_off, 50, 50);
	lv_obj_add_flag(ui->screen_menu_img_sound_off, LV_OBJ_FLAG_CLICKABLE);

	//Write style for screen_menu_img_sound_off, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_menu_img_sound_off, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_menu_img_power_off
	ui->screen_menu_img_power_off = lv_img_create(ui->screen_menu);
	lv_obj_add_flag(ui->screen_menu_img_power_off, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_menu_img_power_off, &_power_red_alpha_50x50);
	lv_img_set_pivot(ui->screen_menu_img_power_off, 50,50);
	lv_img_set_angle(ui->screen_menu_img_power_off, 0);
	lv_obj_set_pos(ui->screen_menu_img_power_off, 373, 135);
	lv_obj_set_size(ui->screen_menu_img_power_off, 50, 50);

	//Write style for screen_menu_img_power_off, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_menu_img_power_off, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen_menu.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_menu);

	//Init events for screen.
	events_init_screen_menu(ui);
}
