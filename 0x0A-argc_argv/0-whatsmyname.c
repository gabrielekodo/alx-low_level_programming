#include <stdio.h>
#include "main.h"
/**
 *main - starting point
 *@argc: number of arguments
 *@argv: arguments
 *
 *
 *Return: 0
 *
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
printf("%s\n", *argv++);

	}
return (0);
}
