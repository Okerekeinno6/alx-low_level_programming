#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 * base 16 contains 0 to 9 and alphabet a to f
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char aphabets;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (aphabets = 'a'; aphabets <= 'f'; aphabets++)
		putchar(aphabets);

	putchar('\n');

	return (0);
}
