#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: copy to
 * @src: copy from
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0, y = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}

	for ( ; y < j; y++)
	{
		dest[y] = src[y];
	}
	dest[j] = '\0';
	return (dest);
}
