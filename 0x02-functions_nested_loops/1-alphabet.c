#include <stdio.h>

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = a, letter <= z, letter++)
		_putchr(letter);

	_putchar('\n');
}
