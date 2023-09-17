#include "main.h"

/**
 * main - entry point.
 *
 * Return: 0 (always.)
*/

int main(void)
{
	int num1, num2;

	num1 = _printf("%", 6);
	num2 = printf("%", 6);
	printf("%i %i\n", num1, num2);


	(void)num1;
	(void)num2;
	return (0);
}
