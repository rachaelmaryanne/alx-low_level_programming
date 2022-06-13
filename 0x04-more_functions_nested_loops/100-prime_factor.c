#include <stdio.h>
#include <math.h>

/**
 *  Find and print the largest prime factor of the number
 *  612852475143
 *  Return: 0
 */
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int prim;

	prim = 3;
	while (prim < num / 2)
	{
		if ((num % prim) == 0)
		{
			if ((prim % 3) == 2)
				printf(",%lu ", prim);
		}
		prim + = 2;
	} 
	putchar('\n');
	return (0);
}
