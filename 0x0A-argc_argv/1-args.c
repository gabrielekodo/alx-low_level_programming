#include <stdio.h>
#include "main.h"

/**
 * main - starting point of the program
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
