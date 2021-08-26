#include <stdio.h>
/**
* main - starting point of the program
*
* Description: print the sizes of various data types
* Return: 0 if program executes properly, else a non-zero number
*/
int main(void)
{
int intType;
float floatType;
long int longInt;
long long int longerInt;
char charType;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu bytes(s)\n", sizeof(intType));
printf("Size of a long int: %zu bytes(s)\n", sizeof(longInt));
printf("Size of a long long int: %zu bytes(s)\n", sizeof(longerInt));
printf("Size of a float: %zu bytes(s)\n", sizeof(floatType));
return (0);
}
