#include <stdio.h>
/**
* main - Write a program that prints all
*the numbers of base 16 in lowercase, followed by a new line.
*
* Return: Always
*/
int main(void)
{
	int numbers;

for (numbers = 0; numbers < 16; numbers++)
{
if (numbers < 10)

	putchar((numbers % 10) + '0');
else
	putchar(numbers + 'a' - 10);
}


	putchar('\n');
	return (0);
}
