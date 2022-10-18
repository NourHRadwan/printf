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
	int func_num = 0;
	char *str;

	str = va_arg(list, char *);
	if (!str)
		str = "(null)";

	if (str[0] == '\0')
		return (-1);

	while (str[i])
	{
		func_num += _putchar(str[i]);
		i++;
	}
	return (func_num);
}
