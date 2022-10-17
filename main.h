#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h> /* va_list */ 
#include <stdio.h> 
#include <stdlib.h> /* malloc, free */ 
#include <unistd.h>  /* write */ 
/**
 * struct specifiers - struct    
 * @specifiers: identifier of type to print                                                      
 * @funptr: ptr to functions that print according to the type                                   
 */ 
typedef struct specifiers   
{
char specifiers;
int* (*funptr)(va_list);
} specifiers_t;

/* prototypes functions */
int _printf(const char *format, ...);
int get_function(char s, va_list args);

/*Conversion specifiers*/
int print_str(va_list args);
int print_char(va_list args);
int print_mod(va_list args);
int print_digit(va_list args);

/* helpful Functions*/ 
int _putchar(char);
int _strlen(char *s);
#endif 
