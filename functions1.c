#include "main.h"

/**
 * print_int - prints an int.
 *
 * @v: inputs va_list.
 *
 * Return: number of printed characters.
*/

int print_int(va_list v)
{
	int num = (int)va_arg(v, int);
	int sum = 0;

	sum += handle_int(num);

	return (sum);
}

/**
 * handle_int - prints an int.
 *
 * @num: inputs int.
 *
 * Return: number of printed characters.
*/

int handle_int(int num)
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
		sum += handle_int(temp / 10);

	_putchar((temp % 10) + '0');
	sum++;

	return (sum);
}

/**
 * print_binary - prints unsigned int in binary format.
 *
 * @v: inputs va_list.
 *
 * Return: number of printed characters.
*/

int print_binary(va_list v)
{
	unsigned int num = (unsigned int)va_arg(v, unsigned int);
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
 * @v: inputs va_list.
 *
 * Return: number of printed characters (always 1).
*/

int print_char(va_list v)
{
	char c = (char)va_arg(v, int);

	_putchar(c);

	return (1);
}

/**
 * print_string - prints a string.
 *
 * @v: inputs va_list.
 *
 * Return: number of printed characters.
*/

int print_string(va_list v)
{
	char *str = (char *)va_arg(v, char *);
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}
