#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/uart.h"
#include "driver/gpio.h"
#include "sdkconfig.h"
#include "esp_log.h"
#include "cjext.h"
#include "config.h"


void uart_task(void *arg);
void parse_json(char* start);
char* parse_complete_config(char* json);