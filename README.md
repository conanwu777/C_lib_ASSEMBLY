# C_lib_ASSEMBLY

This is an introductory project to ASM.
The goal is to make an intel x86_64 assembly implementation for mac of some libc functions:

* bzero
* cat
* isalnum
* isalpha
* isascii
* isdigit
* isprint
* memcpy
* memset
* puts
* strcat
* strdup
* strlen
* tolower
* toupper

### Some additional functions I implemented:

* putchar
* putnbr
* putbbyte
* print_binary
* strnew

The makefile compile and link the `libfts.a` static library.

### Dependencies

* nasm
* gcc
* ar

### Unit tests

Unit tests are provided and compiled with the library, for run them, just execute `tests` binary after compilation.
