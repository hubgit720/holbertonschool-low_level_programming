#include "main.h"
/**
 * jack_bauer - prints every minute of the day of jack bauer
 * Starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 23; h++)
	{

	for (m = 0; m <= 59; m++)
	{
	_putchar(h);
	_putchar(':');
	_putchar(m);
	_putchar('\n');
	}
	}
}
