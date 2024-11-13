#ifndef DEVICE_0068_OTHER_ADDRESSABLE_RGB
#define DEVICE_0068_OTHER_ADDRESSABLE_RGB

#include "ezlopi_core_actions.h"
#include "ezlopi_core_devices.h"

int device_0071_other_addressable_RGB(e_ezlopi_actions_t action, l_ezlopi_item_t *item, void *arg, void *user_arg);

#endif // DEVICE_0071_OTHER_ADDRESSABLE_RGB

/* NOTE : used this config json

    "{\
        \"cmd\":3,\
        \"dev_detail\":[{\
                    \"dev_type\": 10,\
                    \"dev_name\": \"Addressable LED Controller\",\
                    \"id_room\": \"\",\
                    \"id_item\": 71,\
                    \"gpio\": 16\
                }\
        ],\
        \"dev_total\":1,\
        \"chipset\":\"ESP32\"\
    }"

*/