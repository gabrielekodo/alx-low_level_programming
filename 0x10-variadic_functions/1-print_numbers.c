
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
va_start(list, n);
unsigned int i;
for ( i = 0; i <= n; i++)
{
int num = va_arg(list, int);
printf("%d", num);

if (i != (n-1) && separator != NULL )
	printf("%s", separator);


}
printf("\n");
va_end(list);

}

