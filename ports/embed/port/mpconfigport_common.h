/* This file is part of the MicroPython project, http://micropython.org/
 * The MIT License (MIT)
 * Copyright (c) 2022 Damien P. George
 */

#include <stdint.h>

// Type definitions for the specific machine

typedef intptr_t mp_int_t; // must be pointer size
typedef uintptr_t mp_uint_t; // must be pointer size
typedef long mp_off_t;

// Define so there's no dependency on extmod/virtpin.h
#define mp_hal_pin_obj_t

// Need to provide a declaration/definition of alloca()
#include <alloca.h>

#define MICROPY_MPHALPORT_H "port/mphalport.h"
