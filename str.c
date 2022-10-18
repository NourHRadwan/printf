#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * str - Handle string.
 *
 * @list: passed args.
 *
 * Return: character count.
 */

int str(va_list list)
{
	int func_num = 0, i;
	char *str;

	str = va_arg(list, char *);
	if (!str)
		str = "(null)";

	if (str[0] == '\0')
		return (-1);
	i = 0;

	while (str[i] != '\0')
	{
		func_num += _putchar(str[i]);
		i++;
	}
	return (func_num);
}
