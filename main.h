#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * struct f_spec - Struct for format specifiers
 * @specifier: flags to be passed
 * @px: The function pointer
 */
struct f_spec
{
	char specifier;
	int (*px)(va_list);
};

typedef struct f_spec format_spec;

/* main functions */
int _printf(const char *format, ...);
int get_function(char s, va_list list);
int _putchar(char c);

/* function handlers */
int chr(va_list list);
int str(va_list list);
int digit(va_list list);
int mod(va_list list);
int rev(va_list list);

#endif /* MAIN_H */
