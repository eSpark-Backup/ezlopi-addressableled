idf_component_register(SRCS "device_0071_other_addressable_RGB.c" 
                        INCLUDE_DIRS "."
                        REQUIRES    
                            # trace 
                            # led_strip
                            ezlopi-core-actions 
                            # ezlopi_hal 
                            # ezlopi_timer 
                            ezlopi-core-devices 
                            # ezlopi_cloud_constants 
                            # ezlopi_valueformatter
                            # gpio_isr_service
                            # ezlopi_wifi

                            # esp_netif

                            # led
                            # config
                            # led_server
                        )

