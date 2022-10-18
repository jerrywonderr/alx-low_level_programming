#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints all strings passed to it as arguments
 *                 seperated by seperator
 *
 * @separator: the separator to be printed between strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
