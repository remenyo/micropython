/* This file is part of the MicroPython project, http://micropython.org/
 * The MIT License (MIT)
 * Copyright (c) 2022 Damien P. George
 */

#include <stdio.h>
#include "py/mphal.h"

// Send string of given length to stdout, converting \n to \r\n.
void mp_hal_stdout_tx_strn_cooked(const char *str, size_t len) {
    printf("%.*s", (int)len, str);
}
