#include "main.h"
/**
 * _isalpha - Write a function that checks for alphabetic character
 * Return: 0
 * @c: interger
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
