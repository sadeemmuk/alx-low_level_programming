#include <stdio.h>
/**
 * main - function
 * Return: main function
 */
int main(void)
{
	int i;
	long int l;
	long long int ll;
	float d;
	char c;

	printf("Size of char: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(l));
	printf("Size of a long long:%lu byte(s)\n", (unsigned long) sizeof(ll));
	printf("Size of	float:%lu byte(s)\n", (unsigned long) sizeof(d));
	return (0);
}
