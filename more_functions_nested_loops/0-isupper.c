#include "main.h"
/**
 * _isupper - Write a function that checks for uppercase character
 *
 * @c: interger
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
