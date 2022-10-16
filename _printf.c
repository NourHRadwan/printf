#include "main.h"

/**
  *_printf - mini version of the printf function
  * Description: write output to stdout, the standard output stream
  * @format: charachter string with the format identifier
  * Returns: the number of characters printed (excluding the null byte used to end output to strings)
*/

int _printf(const char *format, ...)
{

int i;
va_list list;
char *str,;
if (!format || (format[0] == '%' && !format[1]))
	return (-1);
va_start(list, format);

for (i = 0;  format[i] != '\0'; i++)
{

