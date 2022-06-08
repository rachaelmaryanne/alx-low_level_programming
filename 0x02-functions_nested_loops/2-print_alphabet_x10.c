#include "main.h"

/**
 * print_alphabet - 10 times i lowercase followed with a new line.
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int n, b;

	while (b = 10)
	{
		for (n ='a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		b++;
		_putchar('\n');
	}
}
