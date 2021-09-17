#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two arguments and prints result
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no errors
 */

int main(int argc, char **argv)
{
	if (argc < 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
