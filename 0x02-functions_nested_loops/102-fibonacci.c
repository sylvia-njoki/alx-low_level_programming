#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	long int num1, num2, b;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", n1, n2);
	for (a = 0; a < 48; a++)
	{
		b = num1 + num2;
		printf(", %ld", b);
		num1 = num2;
		num2 = b;
	}
	printf("\n");
	return (0);
}
