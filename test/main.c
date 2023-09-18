#include "main.h"

/**
 * main - entry point.
 *
 * Return: 0 (always.)
*/

int main(void)
{
	int num1, num2;

	num1 = _printf("binary number : %b ,, number : %d ,, char : %c ,, string : %s ,, printing %% : %% \n", 8473, 42652, 'g', "hello");
	num2 = printf("binary number : %b ,, number : %d ,, char : %c ,, string : %s ,, printing %% : %% \n", 8473, 42652, 'g', "hello");
	printf("%i %i\n", num1, num2);


	(void)num1;
	(void)num2;
	return (0);
}
