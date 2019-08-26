

#ifndef _HARDWARE_LED_H
#define _HARDWARE_LED_H

#include <hardware/hardware.h>

__BEGIN_DECLS

struct led_device_t{
	struct hw_device_t common;
	int (*led_open)(struct led_device_t*dev);
	int (*led_ctrl)(struct led_device_t*dev, int which, int status);
};


__END_DECLS

#endif  // _HARDWARE_LED_H