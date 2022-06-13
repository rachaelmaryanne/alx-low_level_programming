#include<stdio.h>
#include "main.h"
/**
 * print_array - update value.
 * @a: value to be evaluate.
 * @n: value to be evaluate.
 * Return: not.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
