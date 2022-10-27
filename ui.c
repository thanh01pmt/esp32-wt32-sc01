// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
void ui_event_ButtonHello(lv_event_t * e);
lv_obj_t * ui_ButtonHello;
lv_obj_t * ui_LabelButtonHello;
lv_obj_t * ui_LabelInfo;

///////////////////// TEST LVGL SETTINGS ////////////////////
//#if LV_COLOR_DEPTH != 16
//    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
//#endif
//#if LV_COLOR_16_SWAP !=1
//    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
//#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_ButtonHello(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        nextClick_Handler(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_text_font(ui_Screen1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonHello = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_ButtonHello, 100);
    lv_obj_set_height(ui_ButtonHello, 50);
    lv_obj_set_x(ui_ButtonHello, -2);
    lv_obj_set_y(ui_ButtonHello, 43);
    lv_obj_set_align(ui_ButtonHello, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonHello, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonHello, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LabelButtonHello = lv_label_create(ui_ButtonHello);
    lv_obj_set_width(ui_LabelButtonHello, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelButtonHello, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonHello, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonHello, "Next");

    ui_LabelInfo = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LabelInfo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelInfo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelInfo, 0);
    lv_obj_set_y(ui_LabelInfo, -14);
    lv_obj_set_align(ui_LabelInfo, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelInfo, "Hello Arduino");
    lv_obj_set_style_text_align(ui_LabelInfo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelInfo, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ButtonHello, ui_event_ButtonHello, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
