#include <rtthread.h> 
#include <rtdevice.h>  
#include "lv_test_theme_1.h"
#include "littlevgl2rtt.h"
#include "../lvgl/lv_themes/lv_theme_default.h"

//extern const lv_img_t wallpaper1;
//extern const lv_img_t wallpaper2;

static void lvgl_demo_run(void *p)
{
    lv_test_theme_1(lv_theme_default_init(210, NULL));
    #ifdef  RT_USING_WDT
    rt_uint16_t wdt_tick=0;
    rt_device_t wdg_dev=rt_device_find("wdt");
    #endif
    while (1)
    {
        rt_thread_delay(RT_TICK_PER_SECOND / 100);
        lv_task_handler();
        #ifdef  RT_USING_WDT
        if(wdt_tick++>300){
            rt_device_control(wdg_dev, RT_DEVICE_CTRL_WDT_KEEPALIVE, NULL);
            wdt_tick=0;
        }
        #endif
    }
}

int rt_lvgl_demo_init(void)
{
    rt_err_t ret = RT_EOK;
    rt_thread_t thread = RT_NULL;

    /* init littlevGL */
    ret = lvgl_rtt_init("lcd");
    if (ret != RT_EOK)
    {
        return ret;
    }

    /* littleGL demo gui thread */
    thread = rt_thread_create("lv_demo", lvgl_demo_run, RT_NULL, 2048, 5, 10);
    if (thread == RT_NULL)
    {
        return RT_ERROR;
    }
    rt_thread_startup(thread);

    return RT_EOK;
}
INIT_APP_EXPORT(rt_lvgl_demo_init);
