#include "main.h"

/**
 * main - entry point.
 *
 * Return: 0 (always.)
*/

int main(void)
{
	int num1, num2;

	num1 = _printf("hello %c %s %% %s\n", 'p', "yoooo", NULL);
	num2 = printf("hello %c %s %% %s\n", 'p', "yoooo", NULL);
	printf("%i %i\n", num1, num2);


	return (0);
}
