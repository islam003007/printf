#include "main.h"

/**
 * main - entry point.
 *
 * Return: 0 (always.)
*/

int main(void)
{
	int num1, num2;

	num1 = _printf("%w dafa\n", -500, 86787, 0, -2147483647 - 1);
	num2 = printf("%w dafa\n", -500, 86787, 0, -2147483647 - 1);
	printf("%i %i\n", num1, num2);


	(void)num1;
	(void)num2;
	return (0);
}
