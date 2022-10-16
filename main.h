#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h> /* va_list */
#include <stdio.h> 
#include <stdlib.h> /* malloc, free */
#include <unistd.h>  /* write */

/**
  * struct vartypes - struct
  * @type: identifier of type to print (e.g. c means char)
  * @funptr: ptr to functions that print according to the type (e.g. print_c)
  */
typedef struct vartypes
{
char type;
int* (*funptr)(va_list);
} specifiers;

/* printf functions */

int _printf(const char *format, ...);
char *print_str(va_list list);
char *print_char(va_list list);
int print_mod(va_list lists);

/* helpful Functions*/
int _putchar(char);
int _strlen(char *s);  
#endif
