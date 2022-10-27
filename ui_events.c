// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project

// https://docs.lvgl.io/master/porting/log.html?highlight=log#custom-log-function
// https://forum.lvgl.io/t/lvgl-add-seriel-to-events/9437/2

#include "ui.h"
#include <string.h>


void nextClick_Handler(lv_event_t * e)
{
  char* msg = lv_label_get_text(ui_LabelInfo);
  if (strcmp(msg, "Hello Arduino")==0) {
    lv_label_set_text(ui_LabelInfo, "Hello Squareline");
    printf("Hello Squareline\n");
  } else {
    lv_label_set_text(ui_LabelInfo, "Hello Arduino");
    printf("Hello Arduino\n");
  }
  
  //LV_LOG_USER("Another Click");
}
