#include <stdio.h>
#include <string.h>

/**
 * main - starting point of the program
 *
 * Description: prints all unique double double-digit combinations
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
int i, j, i_quotient, j_quotient, i_remainder, j_remainder;
for (i = 0; i <= 99; i++)
{
for (j = 0; j <= 99; j++)
{
if (j > i)
{
i_quotient = i / 10;
i_remainder = i % 10;
j_quotient = j / 10;
j_remainder = j % 10;
if (!(i == 0 && j == 1))
{
putchar(',');
putchar(' ');
}
putchar(i_quotient + '0');
putchar(i_remainder + '0');
putchar(' ');
putchar(j_quotient + '0');
putchar(j_remainder + '0');
}
}
}
putchar('\n');
return (0);
}
