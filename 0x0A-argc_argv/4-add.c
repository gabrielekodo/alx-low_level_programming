#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds all positive numbers and prints it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	int sum = 0, argc_tmp = --argc;
	char *argv_tmp = argc ? *++argv : "";

	for (; *argv_tmp || ((argc_tmp -= !*argv_tmp) > 0); argv_tmp++)
		if (*argv_tmp && (*argv_tmp < '0' || *argv_tmp > '9'))
			return (printf("Error\n") && 1);
	while (argc--)
		sum += atoi(*argv++);
	printf("%d\n", sum);

	return (0);
}
