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

/**
 * print_STRING - prints string , non pritable strings are printed in hex
 *
 * @v: inputs va_list
 *
 * Return: number of printed characters.
*/

int print_STRING(va_list v)
{
	char *str = (char *)va_arg(v, char *);
	int i;
	int temp;
	int sum = 0;
	char character[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
						'A', 'B', 'C', 'D', 'E', 'F'};

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');

			temp = (str[i] / 16) % 16;
			_putchar(character[temp]);

			temp = str[i] % 16;
			_putchar(character[temp]);

			sum += 4;
		}
		else
		{
			_putchar(str[i]);
			sum++;
		}
	}

	return (sum);
}

/**
 * print_reversed - prints reversed string.
 *
 * @v: inputs va_list.
 *
 * Return: number of printed characters.
*/

int print_reversed(va_list v)
{
	char *str = (char *)va_arg(v, char *);
	int i;
	int sum;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	;

	sum = i;

	for (i = i - 1; i >= 0; i--)
		_putchar(str[i]);

	return (sum);
}
