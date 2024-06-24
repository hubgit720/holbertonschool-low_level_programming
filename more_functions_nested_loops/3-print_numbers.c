#include "main.h"
/**
 * print_numbers - Write a function that prints the numbers
 *
 * Return: 0
 */
void print_numbers(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9';  numbers++)
	{
		_putchar(numbers);

	}
	_putchar('\n');

}
