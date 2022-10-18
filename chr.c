#include "main.h"
#include <unistd.h>

/**
 * chr - print char
 *
 * @list: list of arguments .
 *
 * Return: count of chars.
 */

int chr(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
	return (1);

}
