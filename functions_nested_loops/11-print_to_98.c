#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function that prints all natural numbers 98
 *
 * @n: The input
 *
 * Return: Request numbers
*/

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
				printf("98\n");
			else
				printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				printf("98\n");
			else
				printf("%d, ", i);
		}
	}
}
