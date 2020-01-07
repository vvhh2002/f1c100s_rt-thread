/**
 * @file lvgl.h
 * Include all LittleV GL related headers
 */

#ifndef LVGL_H
#define LVGL_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lvgl/lv_version.h"

#include "lvgl/lv_misc/lv_log.h"
#include "lvgl/lv_misc/lv_task.h"
#include "lvgl/lv_misc/lv_math.h"
#include "lvgl/lv_misc/lv_async.h"

#include "lvgl/lv_hal/lv_hal.h"

#include "lvgl/lv_core/lv_obj.h"
#include "lvgl/lv_core/lv_group.h"
#include "lvgl/lv_core/lv_indev.h"

#include "lvgl/lv_core/lv_refr.h"
#include "lvgl/lv_core/lv_disp.h"
#include "lvgl/lv_core/lv_debug.h"

#include "lvgl/lv_themes/lv_theme.h"

#include "lvgl/lv_font/lv_font.h"
#include "lvgl/lv_font/lv_font_fmt_txt.h"
#include "lvgl/lv_misc/lv_bidi.h"
#include "lvgl/lv_misc/lv_printf.h"

#include "lvgl/lv_objx/lv_btn.h"
#include "lvgl/lv_objx/lv_imgbtn.h"
#include "lvgl/lv_objx/lv_img.h"
#include "lvgl/lv_objx/lv_label.h"
#include "lvgl/lv_objx/lv_line.h"
#include "lvgl/lv_objx/lv_page.h"
#include "lvgl/lv_objx/lv_cont.h"
#include "lvgl/lv_objx/lv_list.h"
#include "lvgl/lv_objx/lv_chart.h"
#include "lvgl/lv_objx/lv_table.h"
#include "lvgl/lv_objx/lv_cb.h"
#include "lvgl/lv_objx/lv_cpicker.h"
#include "lvgl/lv_objx/lv_bar.h"
#include "lvgl/lv_objx/lv_slider.h"
#include "lvgl/lv_objx/lv_led.h"
#include "lvgl/lv_objx/lv_btnm.h"
#include "lvgl/lv_objx/lv_kb.h"
#include "lvgl/lv_objx/lv_ddlist.h"
#include "lvgl/lv_objx/lv_roller.h"
#include "lvgl/lv_objx/lv_ta.h"
#include "lvgl/lv_objx/lv_canvas.h"
#include "lvgl/lv_objx/lv_win.h"
#include "lvgl/lv_objx/lv_tabview.h"
#include "lvgl/lv_objx/lv_tileview.h"
#include "lvgl/lv_objx/lv_mbox.h"
#include "lvgl/lv_objx/lv_gauge.h"
#include "lvgl/lv_objx/lv_lmeter.h"
#include "lvgl/lv_objx/lv_sw.h"
#include "lvgl/lv_objx/lv_kb.h"
#include "lvgl/lv_objx/lv_arc.h"
#include "lvgl/lv_objx/lv_preload.h"
#include "lvgl/lv_objx/lv_calendar.h"
#include "lvgl/lv_objx/lv_spinbox.h"

#include "lvgl/lv_draw/lv_img_cache.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
}
#endif

#endif /*LVGL_H*/
