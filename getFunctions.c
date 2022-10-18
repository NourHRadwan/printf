#include "main.h"

/**
 * get_function - function specifiers.
 *
 * @passed_flag: flag specifiers.
 * @list: list of arguments.
 *
 * Return: char count.
 */

int get_function(char passed_flag, va_list list)
{
	int i = 0, func_num = 0;

	format_spec spec[] = {
		{'c', chr},
		{'s', str},
		{'%', mod},
		{'d', digit},
		{'i', digit},
		{'r', rev},
		{0, NULL}
	};

	while (spec[i].specifier)
	{
		if (passed_flag == spec[i].specifier)
			func_num += spec[i].px(list);
		i++;
	}

	if (func_num == 0)
	{
		func_num += _putchar('%');
		func_num += _putchar(passed_flag);
	}

	return (func_num);
}
