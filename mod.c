#include "main.h"
#include <unistd.h>

/**
 * mod - print %.
 *
 * @list: list of arguments.
 *
 * Return: count of chars.
 */

int mod(va_list list)
{
	(void)list;

	_putchar('%');

	return (1);
}
