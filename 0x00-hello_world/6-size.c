#include <stdio.h>

/**
 *  main - Prints the sizeof many var types
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %cl byte(s)\n", sizeof(a));
	printf("Size of an int: %cl byte(s)\n", sizeof(b));
	printf("Size of a long int: %cl byte(s)\n", sizeof(c));
	printf("Size of a long long int: %cl byte(s)\n", sizeof(d));
	printf("Size of a float:n %cl byte(s)\n", sizeof(e));
	return (0);
}
