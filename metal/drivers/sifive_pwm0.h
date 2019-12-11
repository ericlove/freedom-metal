/* Copyright 2019 SiFive, Inc */
/* SPDX-License-Identifier: Apache-2.0 */

#ifndef METAL__DRIVERS__SIFIVE_PWM0_H
#define METAL__DRIVERS__SIFIVE_PWM0_H

#include <metal/clock.h>
#include <metal/machine.h>
#include <metal/pwm.h>

struct __metal_driver_vtable_sifive_pwm0 {
    const struct metal_pwm_vtable pwm;
};

__METAL_DECLARE_VTABLE(__metal_driver_vtable_sifive_pwm0)

struct __metal_driver_sifive_pwm0 {
    struct metal_pwm pwm;
    unsigned int max_count;
    unsigned int count_val;
    unsigned int freq;
    unsigned int duty[METAL_MAX_PWM0_NCMP];
    metal_clock_callback pre_rate_change_callback;
    metal_clock_callback post_rate_change_callback;
};

#endif
