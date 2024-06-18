#include <stdio.h>

/**
* main -  prints the size of various types on the computer
*
* Return: Always
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of a int : %d byte(s)\n", sizeof(a));
	printf("Size of a long int : %d byte(s)\n", sizeof(a));
	printf("Size of a long long int : %d byte(s)\n", sizeof(a));
	printf("Size of a float: %d byte(s)\n", sizeof(a));
	return (0);
}
