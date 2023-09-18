#include "main.h"
#include <stdarg.h>
/**
 *handle_print.c - we can handle with p.
 *@p: is a specifier
 *return: NULL ..  
 */
int print_p(int *ptr)
{
	int num  = 3;
	if (ptr == NULL)
		printf("%p", &num);
	return (0);

}
