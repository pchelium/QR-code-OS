/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


uint8_t random_num;
uint8_t blue;
uint8_t wlan;
uint8_t sound;
uint8_t bell;

uint8_t random_num;
uint8_t blue;
uint8_t wlan;
uint8_t sound;
uint8_t bell;
uint8_t random_num;
lv_anim_t a;
uint8_t random_num;

uint8_t random_num;
uint8_t y;

uint8_t blue;
uint8_t wlan;
uint8_t sound;
uint8_t bell;
uint8_t sound;
uint8_t bell;
uint8_t bell;
uint8_t blue;
uint8_t blue;
uint8_t wlan;
uint8_t blue;
uint8_t wlan;
uint8_t sound;
uint8_t bell;
uint8_t sound;
static void screen_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_SCREEN_LOAD_START:
	{
		void hide()
	{
	    lv_obj_add_flag(guider_ui.screen_img_5, LV_OBJ_FLAG_HIDDEN);
	    lv_obj_add_flag(guider_ui.screen_img_4, LV_OBJ_FLAG_HIDDEN);
	    lv_obj_add_flag(guider_ui.screen_img_3, LV_OBJ_FLAG_HIDDEN);
	    lv_obj_add_flag(guider_ui.screen_img_2, LV_OBJ_FLAG_HIDDEN);
	    lv_obj_add_flag(guider_ui.screen_img_1, LV_OBJ_FLAG_HIDDEN);
	
	    lv_obj_add_flag(guider_ui.screen_img_blue_status, LV_OBJ_FLAG_HIDDEN);
	    lv_obj_add_flag(guider_ui.screen_img_wlan_status, LV_OBJ_FLAG_HIDDEN);
	    lv_obj_add_flag(guider_ui.screen_img_sound_status, LV_OBJ_FLAG_HIDDEN);
	    lv_obj_add_flag(guider_ui.screen_img_bell_status, LV_OBJ_FLAG_HIDDEN);
	
	    lv_obj_add_flag(guider_ui.screen_img_blue_status_left, LV_OBJ_FLAG_HIDDEN);
	
	    lv_obj_add_flag(guider_ui.screen_img_sound_status_off, LV_OBJ_FLAG_HIDDEN);
	    lv_obj_add_flag(guider_ui.screen_img_bell_status_off, LV_OBJ_FLAG_HIDDEN);
	}
	
	switch(random_num)
	{
	  case 1:
	    hide();
	    
	    lv_obj_clear_flag(guider_ui.screen_img_5, LV_OBJ_FLAG_HIDDEN);
	    break;
	  case 2:
	    hide();
	
	    lv_obj_clear_flag(guider_ui.screen_img_4, LV_OBJ_FLAG_HIDDEN);
	  
	    break;
	  case 3:
	    hide();
	    
	    lv_obj_clear_flag(guider_ui.screen_img_3, LV_OBJ_FLAG_HIDDEN);
	    break;
	  case 4:
	    hide();
	    
	    lv_obj_clear_flag(guider_ui.screen_img_2, LV_OBJ_FLAG_HIDDEN);
	    break;
	  case 5:
	    hide();
	    lv_obj_clear_flag(guider_ui.screen_img_1, LV_OBJ_FLAG_HIDDEN);
	    break;
	}
	
	if(blue)
	{
	  if(wlan)
	  {
	    lv_obj_clear_flag(guider_ui.screen_img_blue_status, LV_OBJ_FLAG_HIDDEN);
	  }else
	  {
	    lv_obj_clear_flag(guider_ui.screen_img_blue_status_left, LV_OBJ_FLAG_HIDDEN);
	  }
	}
	
	if(wlan)
	{
	  lv_obj_clear_flag(guider_ui.screen_img_wlan_status, LV_OBJ_FLAG_HIDDEN);
	}
	
	if(sound)
	{
	  lv_obj_clear_flag(guider_ui.screen_img_sound_status, LV_OBJ_FLAG_HIDDEN);
	}else
	{
	  lv_obj_clear_flag(guider_ui.screen_img_sound_status_off, LV_OBJ_FLAG_HIDDEN);
	}
	
	if(bell)
	{
	  lv_obj_clear_flag(guider_ui.screen_img_bell_status, LV_OBJ_FLAG_HIDDEN);
	}else
	{
	  lv_obj_clear_flag(guider_ui.screen_img_bell_status_off, LV_OBJ_FLAG_HIDDEN);
	}
		break;
	}
	case LV_EVENT_GESTURE:
	{
		lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
		switch(dir) {
			case LV_DIR_LEFT:
			{
				lv_indev_wait_release(lv_indev_get_act());
				ui_load_scr_animation(&guider_ui, &guider_ui.screen_1, guider_ui.screen_1_del, &guider_ui.screen_del, setup_scr_screen_1, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 200, false, true);
				break;
			}
			case LV_DIR_RIGHT:
			{
				lv_indev_wait_release(lv_indev_get_act());
				ui_load_scr_animation(&guider_ui, &guider_ui.screen_2, guider_ui.screen_2_del, &guider_ui.screen_del, setup_scr_screen_2, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 200, false, true);
				break;
			}
			case LV_DIR_BOTTOM:
			{
				lv_indev_wait_release(lv_indev_get_act());
				ui_load_scr_animation(&guider_ui, &guider_ui.screen_menu, guider_ui.screen_menu_del, &guider_ui.screen_del, setup_scr_screen_menu, LV_SCR_LOAD_ANIM_OVER_BOTTOM, 200, 200, false, true);
				break;
			}
		}
		break;
	}
	default:
		break;
	}
}
void events_init_screen(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen, screen_event_handler, LV_EVENT_ALL, ui);
}
static void screen_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_SCREEN_LOADED:
	{
		lv_obj_add_flag(guider_ui.screen_1_qrcode_2, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	case LV_EVENT_SCREEN_LOAD_START:
	{
		void hide()
	{
	    lv_obj_add_flag(guider_ui.screen_1_img_5, LV_OBJ_FLAG_HIDDEN);
	    lv_obj_add_flag(guider_ui.screen_1_img_4, LV_OBJ_FLAG_HIDDEN);
	    lv_obj_add_flag(guider_ui.screen_1_img_3, LV_OBJ_FLAG_HIDDEN);
	    lv_obj_add_flag(guider_ui.screen_1_img_2, LV_OBJ_FLAG_HIDDEN);
	    lv_obj_add_flag(guider_ui.screen_1_img_1, LV_OBJ_FLAG_HIDDEN);
	
	    lv_obj_add_flag(guider_ui.screen_1_img_blue_status, LV_OBJ_FLAG_HIDDEN);
	    lv_obj_add_flag(guider_ui.screen_1_img_wlan_status, LV_OBJ_FLAG_HIDDEN);
	    lv_obj_add_flag(guider_ui.screen_1_img_sound_status, LV_OBJ_FLAG_HIDDEN);
	    lv_obj_add_flag(guider_ui.screen_1_img_bell_status, LV_OBJ_FLAG_HIDDEN);
	
	    lv_obj_add_flag(guider_ui.screen_1_img_blue_status_left, LV_OBJ_FLAG_HIDDEN);
	
	    lv_obj_add_flag(guider_ui.screen_1_img_sound_status_off, LV_OBJ_FLAG_HIDDEN);
	    lv_obj_add_flag(guider_ui.screen_1_img_bell_status_off, LV_OBJ_FLAG_HIDDEN);
	}
	
	switch(random_num)
	{
	  case 1:
	    hide();
	    
	    lv_obj_clear_flag(guider_ui.screen_1_img_5, LV_OBJ_FLAG_HIDDEN);
	    break;
	  case 2:
	    hide();
	
	    lv_obj_clear_flag(guider_ui.screen_1_img_4, LV_OBJ_FLAG_HIDDEN);
	  
	    break;
	  case 3:
	    hide();
	    
	    lv_obj_clear_flag(guider_ui.screen_1_img_3, LV_OBJ_FLAG_HIDDEN);
	    break;
	  case 4:
	    hide();
	    
	    lv_obj_clear_flag(guider_ui.screen_1_img_2, LV_OBJ_FLAG_HIDDEN);
	    break;
	  case 5:
	    hide();
	    lv_obj_clear_flag(guider_ui.screen_1_img_1, LV_OBJ_FLAG_HIDDEN);
	    break;
	}
	
	if(blue)
	{
	  if(wlan)
	  {
	    lv_obj_clear_flag(guider_ui.screen_1_img_blue_status, LV_OBJ_FLAG_HIDDEN);
	  }else
	  {
	    lv_obj_clear_flag(guider_ui.screen_1_img_blue_status_left, LV_OBJ_FLAG_HIDDEN);
	  }
	}
	
	if(wlan)
	{
	  lv_obj_clear_flag(guider_ui.screen_1_img_wlan_status, LV_OBJ_FLAG_HIDDEN);
	}
	
	if(sound)
	{
	  lv_obj_clear_flag(guider_ui.screen_1_img_sound_status, LV_OBJ_FLAG_HIDDEN);
	}else
	{
	  lv_obj_clear_flag(guider_ui.screen_1_img_sound_status_off, LV_OBJ_FLAG_HIDDEN);
	}
	
	if(bell)
	{
	  lv_obj_clear_flag(guider_ui.screen_1_img_bell_status, LV_OBJ_FLAG_HIDDEN);
	}else
	{
	  lv_obj_clear_flag(guider_ui.screen_1_img_bell_status_off, LV_OBJ_FLAG_HIDDEN);
	}
		break;
	}
	case LV_EVENT_GESTURE:
	{
		lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
		switch(dir) {
			case LV_DIR_RIGHT:
			{
				lv_indev_wait_release(lv_indev_get_act());
				ui_load_scr_animation(&guider_ui, &guider_ui.screen, guider_ui.screen_del, &guider_ui.screen_1_del, setup_scr_screen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 200, false, true);
				break;
			}
		}
		break;
	}
	default:
		break;
	}
}
static void screen_1_btn_qr_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_LONG_PRESSED:
	{
		lv_obj_clear_flag(guider_ui.screen_1_qrcode_2, LV_OBJ_FLAG_HIDDEN);
		lv_obj_clear_flag(guider_ui.screen_1_btn_qr_2, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.screen_1_btn_1, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.screen_1_ta_1, LV_OBJ_FLAG_HIDDEN);
		    const char * data = lv_textarea_get_text(guider_ui.screen_1_ta_1);
	    lv_label_set_text(guider_ui.screen_1_label_1, data);
		lv_obj_add_flag(guider_ui.screen_1_btn_qr_1, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
static void screen_1_qrcode_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.screen_1_qrcode_2, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
static void screen_1_btn_qr_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_LONG_PRESSED:
	{
		lv_obj_add_flag(guider_ui.screen_1_qrcode_2, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.screen_1_btn_qr_2, LV_OBJ_FLAG_HIDDEN);
		lv_obj_clear_flag(guider_ui.screen_1_ta_1, LV_OBJ_FLAG_HIDDEN);
		lv_obj_clear_flag(guider_ui.screen_1_btn_1, LV_OBJ_FLAG_HIDDEN);
		lv_label_set_text(guider_ui.screen_1_label_1, " ");
		lv_obj_clear_flag(guider_ui.screen_1_btn_qr_1, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
static void screen_1_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		    //lv_color_t bg_color = lv_palette_lighten(LV_PALETTE_LIGHT_BLUE, 5);
	    //lv_color_t fg_color = lv_color_hex(0x7d7d7d);
	    
	    //lv_obj_t * qr = lv_qrcode_create(lv_scr_act(), 150, fg_color, bg_color);
	    
	    /*Set data*/
	    const char * data = lv_textarea_get_text(guider_ui.screen_1_ta_1);
	    lv_qrcode_update(guider_ui.screen_1_qrcode_1, data, strlen(data));
	    lv_qrcode_update(guider_ui.screen_1_qrcode_2, data, strlen(data));
	    
	    /*Add a border with bg_color*/
	    //lv_obj_set_style_border_color(guider_ui.qrcode_1, bg_color, 0);
	    //lv_obj_set_style_border_width(guider_ui.qrcode_1, 5, 0);
	
		break;
	}
	default:
		break;
	}
}
void events_init_screen_1(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_1, screen_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_1_btn_qr_1, screen_1_btn_qr_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_1_qrcode_2, screen_1_qrcode_2_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_1_btn_qr_2, screen_1_btn_qr_2_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_1_btn_1, screen_1_btn_1_event_handler, LV_EVENT_ALL, ui);
}
static void screen_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_SCREEN_LOAD_START:
	{
		switch(random_num){
	  case 1:
	    lv_obj_set_x(guider_ui.screen_2_img_7, 163);
	    lv_obj_set_y(guider_ui.screen_2_img_7, 238);
	    break;
	  case 2:
	    lv_obj_set_x(guider_ui.screen_2_img_7, 163);
	    lv_obj_set_y(guider_ui.screen_2_img_7, 190);
	    break;
	  case 3:
	    lv_obj_set_x(guider_ui.screen_2_img_7, 163);
	    lv_obj_set_y(guider_ui.screen_2_img_7, 143);
	    break;
	  case 4:
	    lv_obj_set_x(guider_ui.screen_2_img_7, 163);
	    lv_obj_set_y(guider_ui.screen_2_img_7, 95);
	    break;
	  case 5:
	    lv_obj_set_x(guider_ui.screen_2_img_7, 163);
	    lv_obj_set_y(guider_ui.screen_2_img_7, 46);
	    break;
	}
		break;
	}
	case LV_EVENT_GESTURE:
	{
		lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
		switch(dir) {
			case LV_DIR_LEFT:
			{
				lv_indev_wait_release(lv_indev_get_act());
				ui_load_scr_animation(&guider_ui, &guider_ui.screen, guider_ui.screen_del, &guider_ui.screen_2_del, setup_scr_screen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 200, false, true);
				break;
			}
		}
		break;
	}
	default:
		break;
	}
}
static void screen_2_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		void anim_y_cb(void * var, int32_t v)
	{
	    lv_obj_set_y(var, v);
	}
	
	void anim_deleted_cb()
	{
	    lv_led_set_color(guider_ui.screen_2_led_1, lv_color_hex(0x000000));
	    lv_obj_clear_flag(guider_ui.screen_2_btn_1, LV_OBJ_FLAG_HIDDEN);
	}
	
	if(random_num != 5)
	{
	  lv_obj_t * element = guider_ui.screen_2_img_7;
	
	  lv_anim_init(&a);
	  lv_anim_set_var(&a, element);
	  lv_anim_set_values(&a, lv_obj_get_y(element), 46);
	  lv_anim_set_time(&a, 10000 / random_num);
	  lv_anim_set_exec_cb(&a, anim_y_cb);
	  lv_anim_set_path_cb(&a, lv_anim_path_linear);
	  
	  lv_anim_set_deleted_cb(&a, anim_deleted_cb);
	
	  lv_obj_add_flag(guider_ui.screen_2_btn_1, LV_OBJ_FLAG_HIDDEN);
	  
	  random_num = 5;
	
	  lv_led_set_color(guider_ui.screen_2_led_1, lv_color_hex(0xF9FF00));
	  lv_anim_start(&a);
	}
	
	
		break;
	}
	default:
		break;
	}
}
static void screen_2_img_8_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		if(random_num > 1)
	{
	  random_num --;
	}
	
	y = 46;
	
	switch(random_num)
	{
	  case 1:
	    y = 238;
	    break;
	  case 2:
	    y = 190;
	    break;
	  case 3:
	    y = 143;
	    break;
	  case 4:
	    y = 95;
	    break;
	  case 5:
	    y = 46;
	    break;
	}
	lv_obj_set_x(guider_ui.screen_2_img_7, 163);
	lv_obj_set_y(guider_ui.screen_2_img_7, y);
	
	
	
	
		break;
	}
	default:
		break;
	}
}
void events_init_screen_2(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_2, screen_2_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_2_btn_1, screen_2_btn_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_2_img_8, screen_2_img_8_event_handler, LV_EVENT_ALL, ui);
}
static void screen_menu_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_SCREEN_LOAD_START:
	{
		void hide()
	{
	  lv_obj_add_flag(guider_ui.screen_menu_img_blue_on, LV_OBJ_FLAG_HIDDEN);
	  lv_obj_add_flag(guider_ui.screen_menu_img_wlan_on, LV_OBJ_FLAG_HIDDEN);
	  lv_obj_add_flag(guider_ui.screen_menu_img_sound_on, LV_OBJ_FLAG_HIDDEN);
	  lv_obj_add_flag(guider_ui.screen_menu_img_bell_on, LV_OBJ_FLAG_HIDDEN);
	  
	  lv_obj_add_flag(guider_ui.screen_menu_img_blue_off, LV_OBJ_FLAG_HIDDEN);
	  lv_obj_add_flag(guider_ui.screen_menu_img_wlan_off, LV_OBJ_FLAG_HIDDEN);
	  lv_obj_add_flag(guider_ui.screen_menu_img_sound_off, LV_OBJ_FLAG_HIDDEN);
	  lv_obj_add_flag(guider_ui.screen_menu_img_bell_off, LV_OBJ_FLAG_HIDDEN);
	}
	
	hide();
	
	if(blue)
	{
	  lv_obj_clear_flag(guider_ui.screen_menu_img_blue_on, LV_OBJ_FLAG_HIDDEN);
	}else
	{
	  lv_obj_clear_flag(guider_ui.screen_menu_img_blue_off, LV_OBJ_FLAG_HIDDEN);
	}
	
	if(wlan)
	{
	  lv_obj_clear_flag(guider_ui.screen_menu_img_wlan_on, LV_OBJ_FLAG_HIDDEN);
	}else
	{
	  lv_obj_clear_flag(guider_ui.screen_menu_img_wlan_off, LV_OBJ_FLAG_HIDDEN);
	}
	
	if(sound)
	{
	  lv_obj_clear_flag(guider_ui.screen_menu_img_sound_on, LV_OBJ_FLAG_HIDDEN);
	}else
	{
	  lv_obj_clear_flag(guider_ui.screen_menu_img_sound_off, LV_OBJ_FLAG_HIDDEN);
	}
	
	if(bell)
	{
	  lv_obj_clear_flag(guider_ui.screen_menu_img_bell_on, LV_OBJ_FLAG_HIDDEN);
	}else
	{
	  lv_obj_clear_flag(guider_ui.screen_menu_img_bell_off, LV_OBJ_FLAG_HIDDEN);
	}
	
		lv_obj_clear_flag(guider_ui.screen_menu_img_power_off, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	case LV_EVENT_GESTURE:
	{
		lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
		switch(dir) {
			case LV_DIR_TOP:
			{
				lv_indev_wait_release(lv_indev_get_act());
				ui_load_scr_animation(&guider_ui, &guider_ui.screen, guider_ui.screen_del, &guider_ui.screen_menu_del, setup_scr_screen, LV_SCR_LOAD_ANIM_OVER_TOP, 200, 200, false, true);
				break;
			}
		}
		break;
	}
	default:
		break;
	}
}
static void screen_menu_img_sound_on_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.screen_menu_img_sound_on, LV_OBJ_FLAG_HIDDEN);
		lv_obj_clear_flag(guider_ui.screen_menu_img_sound_off, LV_OBJ_FLAG_HIDDEN);
		sound = 0;
		break;
	}
	default:
		break;
	}
}
static void screen_menu_img_bell_on_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.screen_menu_img_bell_on, LV_OBJ_FLAG_HIDDEN);
		lv_obj_clear_flag(guider_ui.screen_menu_img_bell_off, LV_OBJ_FLAG_HIDDEN);
		bell = 0;
		break;
	}
	default:
		break;
	}
}
static void screen_menu_img_bell_off_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.screen_menu_img_bell_off, LV_OBJ_FLAG_HIDDEN);
		lv_obj_clear_flag(guider_ui.screen_menu_img_bell_on, LV_OBJ_FLAG_HIDDEN);
		bell = 1;
		break;
	}
	default:
		break;
	}
}
static void screen_menu_img_blue_on_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_clear_flag(guider_ui.screen_menu_img_blue_off, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.screen_menu_img_blue_on, LV_OBJ_FLAG_HIDDEN);
		blue = 0;
		break;
	}
	default:
		break;
	}
}
static void screen_menu_img_blue_off_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.screen_menu_img_blue_off, LV_OBJ_FLAG_HIDDEN);
		lv_obj_clear_flag(guider_ui.screen_menu_img_blue_on, LV_OBJ_FLAG_HIDDEN);
		blue = 1;
		break;
	}
	default:
		break;
	}
}
static void screen_menu_img_wlan_on_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.screen_menu_img_wlan_on, LV_OBJ_FLAG_HIDDEN);
		lv_obj_clear_flag(guider_ui.screen_menu_img_wlan_off, LV_OBJ_FLAG_HIDDEN);
		wlan = 0;
		break;
	}
	default:
		break;
	}
}
static void screen_menu_img_wlan_off_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.screen_menu_img_wlan_off, LV_OBJ_FLAG_HIDDEN);
		lv_obj_clear_flag(guider_ui.screen_menu_img_wlan_on, LV_OBJ_FLAG_HIDDEN);
		wlan = 1;
	
		break;
	}
	default:
		break;
	}
}
static void screen_menu_img_sound_off_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.screen_menu_img_sound_off, LV_OBJ_FLAG_HIDDEN);
		lv_obj_clear_flag(guider_ui.screen_menu_img_sound_on, LV_OBJ_FLAG_HIDDEN);
		sound = 1;
		break;
	}
	default:
		break;
	}
}
static void screen_menu_img_power_off_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_LONG_PRESSED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_off, guider_ui.screen_off_del, &guider_ui.screen_menu_del, setup_scr_screen_off, LV_SCR_LOAD_ANIM_FADE_ON, 1000, 400, false, true);
		lv_obj_add_flag(guider_ui.screen_menu_img_power_off, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_menu(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_menu, screen_menu_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_menu_img_sound_on, screen_menu_img_sound_on_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_menu_img_bell_on, screen_menu_img_bell_on_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_menu_img_bell_off, screen_menu_img_bell_off_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_menu_img_blue_on, screen_menu_img_blue_on_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_menu_img_blue_off, screen_menu_img_blue_off_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_menu_img_wlan_on, screen_menu_img_wlan_on_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_menu_img_wlan_off, screen_menu_img_wlan_off_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_menu_img_sound_off, screen_menu_img_sound_off_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_menu_img_power_off, screen_menu_img_power_off_event_handler, LV_EVENT_ALL, ui);
}
static void screen_off_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_GESTURE:
	{
		lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
		switch(dir) {
			case LV_DIR_TOP:
			{
				lv_indev_wait_release(lv_indev_get_act());
				ui_load_scr_animation(&guider_ui, &guider_ui.screen, guider_ui.screen_del, &guider_ui.screen_off_del, setup_scr_screen, LV_SCR_LOAD_ANIM_NONE, 1000, 200, false, true);
				break;
			}
		}
		break;
	}
	default:
		break;
	}
}
void events_init_screen_off(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_off, screen_off_event_handler, LV_EVENT_ALL, ui);
}
static void screen_start_loading_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_SCREEN_LOADED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen, guider_ui.screen_del, &guider_ui.screen_start_loading_del, setup_scr_screen, LV_SCR_LOAD_ANIM_FADE_ON, 2500, 2500, false, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_start_loading(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_start_loading, screen_start_loading_event_handler, LV_EVENT_ALL, ui);
}

void events_init(lv_ui *ui)
{

}
