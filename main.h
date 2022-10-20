#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct _print {
    char *symbol;
    int (*_printf)(va_list arguments);
} print;

int _string_printf(va_list arguments);
int char_printf(va_list arguments);
int _putchar(char c);
int _int_print(va_list arguments);


#endif
