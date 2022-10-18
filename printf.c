#include "main.h"
#include <unistd.h>
/**
 * _printf - Emulate the original.
 *
 * @format: Format by specifier.
 *
 * Return: count of chars.
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0, func_num;
	va_list list;

	va_start(list, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[i])
	{
		func_num = 0;
		if (format[i] == '%')
		{
			if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
			{
				count = -1;
				break;
			}
			func_num += get_function(format[i + 1], list);
			if (func_num == 0)
				count += _putchar(format[i + 1]);
			if (func_num == -1)
				count = -1;
			i++;
		}
		else
		{
			if (count == -1)
				_putchar(format[i]);
			else
				count += _putchar(format[i]);
		}
		i++;
		if (count != -1)
			count += func_num;
	}
	va_end(list);
	return (count);
}
