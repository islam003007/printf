#include "main.h"

/**
 * print_rot - prints rot13 string.
 *
 * @v: inputs va_list.
 *
 * Return: number of printed charcaters.
*/

int print_rot(va_list v)
{
	char *str = (char *)va_arg(v, char *);
	int i;
	char c;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			c = str[i] + 13;
		else if ((str[i] <= 'z' && str[i] > 'm') || (str[i] <= 'Z' && str[i] > 'M'))
			c = str[i] - 13;
		else
			c = str[i];
		_putchar(c);
	}

	return (i);
}

/**
 * handle_hex_long - prints a long int in hex.
 *
 * @num: inputs unsigned long int.
 *
 * Return: number of printed characters
*/

int handle_hex_long(unsigned long int num)
{
	char hex[16];
	int i, hex_length = 0;
	char character[] = {'a', 'b', 'c', 'd', 'e', 'f'};

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		hex[hex_length] = num % 16;
		if (hex[hex_length] > 9)
			hex[hex_length] = character[hex[hex_length] - 10];
		num /= 16;
		hex_length++;
	}

	for (i = hex_length - 1; i >= 0; i--)
	{
		if (hex[i] < 10)
			_putchar(hex[i] + '0');
		else
			_putchar(hex[i]);
	}
	return (hex_length);
}

/**
 * print_pointer - prints a pointer in hex.
 *
 * @v: inputs va_list.
 *
 * Return: number of printed characters.
*/

int print_pointer(va_list v)
{
	void *ptr = (void *)va_arg(v, void *);
	unsigned long int num = (unsigned long int)ptr;

	if (ptr == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');

		return (5);
	}
	_putchar('0');
	_putchar('x');

	return (2 + handle_hex_long(num));
}
