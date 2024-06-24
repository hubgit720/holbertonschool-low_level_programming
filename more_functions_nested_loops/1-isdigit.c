#include "main.h"
/**
 * _isdigit - Write a function that checks for a digit (0 through 9)
 * @c: integer
 * Return: 0
 */
int _isdigit(int c)
{
	for (c = 0; c <= 9; c++)
	{
		if (c >= '0' && c <= '9')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
