#include "main.h"

/**
 * print_format - prints based of format specifier
 *
 * @c: inputs format specefier.
 *
 * Return: number of printed characters.
*/

int (*print_format(char c))(va_list)
{
	int i;
	int function_limit = 14;

	print_t arr[] = {
		{'c', print_char}, {'b', print_binary},
		{'s', print_string}, {'u', print_unsigned_int},
		{'o', print_octal}, {'x', print_hex},
		{'i', print_int}, {'X', print_HEX},
		{'d', print_int}, {'%', print_percent},
		{'S', print_STRING}, {'r', print_reversed},
		{'R', print_rot}, {'p', print_pointer}
	};

	for (i = 0; i < function_limit; i++)
	{
		if (arr[i].c == c)
		{
			return (arr[i].print_function);
		}
	}

	return (NULL);
}
