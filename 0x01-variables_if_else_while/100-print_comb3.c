#include <stdio.h>

/**
  * main - is an entry point
  *
  * Return: 0
  */
int main(void)
{
	int k;
	int i;

	for (k = '0'; k <= '9'; k++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (k < i)
			{
				putchar(k);
				putchar(i);

				if (k != '8' || (k == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
