#include "main.h"
/**
 * rev - Print reverses string.
 * @list: Arguments
 * Return: Lenght of the output
 */
int rev(va_list list)
{

	int func_num = 0, len = 0;
	char *s = va_arg(list, char *);

	if (!s)
		s = "(null)";
	while (s[len])
		len++;

	while (len >= 0)
	{
		func_num += _putchar(s[len]);
		len--;
	}
	func_num--;
	return (func_num);
}
