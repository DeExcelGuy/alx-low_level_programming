#include "main.h"

/**
 * _memset - a function that fill memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes of memory area
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
