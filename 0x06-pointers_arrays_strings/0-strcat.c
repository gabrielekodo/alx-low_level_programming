#include "main.h"
/**
 *_strcat - concats src to dest
 *
 *@src: array to copy from
 *@dest: array to copy to
 *
 *
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
char *dest_tmp = dest;

	while (*dest)
		++dest;
	while ((*dest++ = *src++))
		continue;
	return (dest_tmp);
}
