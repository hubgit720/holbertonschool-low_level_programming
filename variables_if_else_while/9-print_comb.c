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

for (numbers = 0; numbers < 9; numbers++)
{
putchar('0' + numbers);
if (numbers == 9)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
	return (0);
}
