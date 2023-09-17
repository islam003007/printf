#include "main.h"

/**
 * main - entry point.
 *
 * Return: 0 (always.)
*/

int main(void)
{
	int num1, num2;

	num1 = _printf("%c", NULL);
	num2 = printf("%c", NULL);
	printf("%i %i\n", num1, num2);


	(void)num1;
	(void)num2;
	return (0);
}
