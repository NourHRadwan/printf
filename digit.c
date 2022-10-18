#include "main.h"
#include <unistd.h>

/**
 * digit - print integers.
 *
 * @list: argument.
 *
 * Return: chars count.
 */

int digit(va_list list)
{
	int decimal = 1;
	int func_num = 0;
	long int digit = va_arg(list, int);
	long int digitaux;

	if (digit < 0)
	{
		func_num += _putchar('-');
		digit *= -1;
	}

	if (digit < 10)
		return (func_num += _putchar(digit + '0'));

	digitaux = digit;

	while (digitaux > 9)
	{
		decimal *= 10;
		digitaux /= 10;
	}
	while (decimal >= 1)
	{
		func_num += _putchar(((digit / decimal) % 10) + '0');
		decimal /= 10;
	}

	return (func_num);
}
