#include <stdio.h>
/**
* main - Write a program that prints all single digi
* numbers of base 10 starting from 0,
* Return: Always
*/
int main(void)
{
	int numbers;

for (numbers = '0'; numbers <= '9'; numbers++)
{
putchar(numbers);
}
putchar('\n');
return (0);

}

