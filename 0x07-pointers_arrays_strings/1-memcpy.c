#include "main.h"

/**
 * _memcpy - a function to copy memory
 * @dest: memory area dest
 * @src: source memory area
 * @n: bytes from memory area to copy
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
