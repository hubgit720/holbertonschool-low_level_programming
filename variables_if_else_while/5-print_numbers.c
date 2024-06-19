#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Write a program that prints all single digi
* numbers of base 10 starting from 0,
* Return: Always
*/
int main(void)
{
	char numbers;

for (numbers = '0'; numbers <= '9'; numbers++)
{
putchar(numbers);
}
return (0);
}

