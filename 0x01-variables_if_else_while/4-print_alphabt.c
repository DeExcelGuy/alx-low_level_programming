#include <stdio.h>

/**
  * main - is an entry point
  *
  * Return: 0
  */
int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k != 'e' && k != 'q')
		{
			putchar(k);
		}
	}

	putchar('\n');

	return (0);
}
