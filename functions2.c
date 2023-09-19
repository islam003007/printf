#include "main.h"


/**
 * print_octal - prints unsigned int in octal format.
 *
 * @v: inputs va_list
 *
 * Return: number of printed characters.
*/

int print_octal(va_list v)
{
	unsigned int num = (unsigned int)va_arg(v, unsigned int);
	char octal[11];
	int i, octal_length = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		octal[octal_length] = num % 8;
		num /= 8;
		octal_length++;
	}

	for (i = octal_length - 1; i >= 0; i--)
		_putchar(octal[i] + '0');

	return (octal_length);
}

/**
 * print_hex - prints unsigned int in hex dicimal format.
 *
 * @v: inputs va_list.
 *
 * Return: number of printed characters.
*/

int print_hex(va_list v)
{
	unsigned int num = (unsigned int)va_arg(v, unsigned int);
	char hex[8];
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
 * print_HEX - prints unsigned int in hex dicimal format.
 *
 * @v: inputs va_list.
 *
 * Return: number of printed characters.
*/

int print_HEX(va_list v)
{
	unsigned int num = (unsigned int)va_arg(v, unsigned int);
	char hex[8];
	int i, hex_length = 0;
	char character[] = {'A', 'B', 'C', 'D', 'E', 'F'};

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
 * print_default - default print when no format specifier in inputed.
 *
 * @c: inputs char.
 *
 * Return: 2 always.
*/

int print_default(char c)
{
	_putchar('%');
	_putchar(c);
	return (2);
}
