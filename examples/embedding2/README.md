Example
=======

First build the embed port using:

    $ make -f micropython_embed.mk

This will generate the `micropython_embed` directory which is a self-contained
copy of MicroPython suitable for embedding.  The .c files in this directory need
to be compiled into your project.

To build the example project, based on `main.c`, use:

    $ make

That will create an exacutable called `embed` which you can run:

    $ ./embed
