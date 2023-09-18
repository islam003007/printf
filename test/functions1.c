#include "main.h"

/**
 * print_int - prints an int.
 *
 * @num: inputs int.
 *
 * Return: number of printed characters.
*/

int print_int(int num)
{
	int sum = 0;
	unsigned int temp = num;

	if (num < 0)
	{
		_putchar('-');
		temp *= -1;
		sum++;
	}

	if (temp / 10)
		sum += print_int(temp / 10);

	_putchar((temp % 10) + '0');
	sum++;

	return (sum);
}

/**
 * print_binary - prints unsigned int in binary format.
 *
 * @num: inputs unsigned int
 *
 * Return: number of printed characters.
*/

int print_binary(unsigned int num)
{
	char binary[32];
	int i, binary_length = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		binary[binary_length] = num % 2;
		num /= 2;
		binary_length++;
	}

	for (i = binary_length - 1; i >= 0; i--)
		_putchar(binary[i] + '0');

	return (binary_length);
}

/**
 * print_char - prints a character.
 *
 * @c: inputs char.
 *
 * Return: number of printed characters (always 1).
*/

int print_char(char c)
{
	_putchar(c);

	return (1);
}

/**
 * print_string - prints a string.
 *
 * @str: inputs char pointer.
 *
 * Return: number of printed characters.
*/

int print_string(char *str)
{
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}

/**
 * print_format - prints based of format specifier
 *
 * @c: inputs format specefier.
 * @v: inputs va_list
 *
 * Return: number of printed characters.
*/

int print_format(char c, va_list v)
{
	int sum = 0;

	switch (c)
			{
			case 'c':
					sum += print_char((char)va_arg(v, int));
					break;
			case 's':
					sum += print_string((char *)va_arg(v, char *));
					break;
			case '%':
					_putchar('%');
					sum++;
					break;
			case 'i':
			case 'd':
					sum += print_int((int)va_arg(v, int));
					break;
			case 'b':
					sum += print_binary((unsigned int)va_arg(v, unsigned int));
					break;
			default:
					_putchar('%');
					_putchar(c);
					sum += 2;
					break;
			}

	return (sum);
}
