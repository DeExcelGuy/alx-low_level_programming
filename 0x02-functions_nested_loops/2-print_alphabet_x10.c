#include "main.h"

/**
 * print_alphabet_x10 - print lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char k;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (k = 'a'; k <= 'z'; k++)
	{
	_putchar(k);
	}
	_putchar('\n');
	}
}
