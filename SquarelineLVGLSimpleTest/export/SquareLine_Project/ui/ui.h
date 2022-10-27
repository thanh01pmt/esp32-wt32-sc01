// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

extern lv_obj_t * ui_Screen1;
void ui_event_ButtonHello(lv_event_t * e);
extern lv_obj_t * ui_ButtonHello;
extern lv_obj_t * ui_LabelButtonHello;
extern lv_obj_t * ui_LabelInfo;

void nextClick_Handler(lv_event_t * e);



LV_FONT_DECLARE(ui_font_Montserrat);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
