#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: memory area to fill
 * @b: constant byte fill s
 * @n: bytes of memory area to be filled
 *
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);

}
