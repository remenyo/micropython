/* This file is part of the MicroPython project, http://micropython.org/
 * The MIT License (MIT)
 * Copyright (c) 2022 Damien P. George
 */
#ifndef MICROPY_INCLUDED_MICROPYTHON_EMBED_H
#define MICROPY_INCLUDED_MICROPYTHON_EMBED_H

#include <stddef.h>
#include <stdint.h>

void mp_embed_init(void *gc_heap, size_t gc_heap_size);
void mp_embed_deinit(void);

// Only available if MICROPY_ENABLE_COMPILER is enabled.
void mp_embed_exec_str(const char *src);

// Only available if MICROPY_PERSISTENT_CODE_LOAD is enabled.
void mp_embed_exec_mpy(const uint8_t *mpy, size_t len);

#endif // MICROPY_INCLUDED_MICROPYTHON_EMBED_H
