#include "main.h"

/**
 * print_percent - prints %.
 *
 * @v: inputs va_list
 *
 * Return: number of printed characters, always 1
*/

int print_percent(va_list v)
{
	(void)v;

	_putchar('%');

	return (1);
}

/**
 * print_unsigned_int - prints unsigned int.
 *
 * @v: inputs va_list.
 *
 * Return: number of printed characters.
*/

int print_unsigned_int(va_list v)
{
	unsigned int num = (unsigned int)va_arg(v, unsigned int);
	int sum = 0;

	sum += handle_unsigned_int(num);

	return (sum);
}

/**
 * handle_unsigned_int - prints unsigned int.
 *
 * @num: inputs int.
 *
 * Return: number of printed characters.
*/

int handle_unsigned_int(unsigned int num)
{
	int sum = 0;

	if (num / 10)
		sum += handle_unsigned_int(num / 10);

	_putchar((num % 10) + '0');

	return (1 + sum);
}
