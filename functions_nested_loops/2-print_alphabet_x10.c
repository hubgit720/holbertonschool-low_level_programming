#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{

	int alphabet_x10;
	int alphabetcount;

	for (alphabetcount = 0; alphabetcount < 10; alphabetcount++)
	{
		for (alphabet_x10 = 'a'; alphabet_x10 <= 'z'; alphabet_x10++)
		{
			_putchar(alphabet_x10);
		}
	_putchar('\n');
	}
}
