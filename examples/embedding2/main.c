/* This file is part of the MicroPython project, http://micropython.org/
 * The MIT License (MIT)
 * Copyright (c) 2022 Damien P. George
 */

#include "port/micropython_embed.h"

// This is example 1 script, which will be compiled and executed.
static const char *example_1 =
    "print('hello world!', list(x + 1 for x in range(10)), end='eol\\n')";

// This is example 2 script, which will be compiled and executed.
static const char *example_2 =
    "import micropython\n"
    "\n"
    "print(dir(micropython))\n"
    "\n"
    "for i in range(10):\n"
    "    print('iter {:08}'.format(i))\n"
    "\n"
    "try:\n"
    "    1//0\n"
    "except Exception as er:\n"
    "    print('caught exception', repr(er))\n"
    "\n"
    "import gc\n"
    "print('run GC collect')\n"
    "gc.collect()\n"
    "\n"
    "print('finish')\n"
    ;

// This array is the MicroPython GC heap.
static char heap[8 * 1024];

int main() {
    // Initialise MicroPython.
    mp_embed_init(&heap[0], sizeof(heap));

    // Run the example scripts (they will be compiled first).
    mp_embed_exec_str(example_1);
    mp_embed_exec_str(example_2);

    // Deinitialise MicroPython.
    mp_embed_deinit();

    return 0;
}
