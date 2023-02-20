#include <stdio.h>

/**
 * main - Prints alphabet in both lowercase and uppercase.
 *
 * Return: 0 when successful
 */
int main(void)
{
	char lowCase;

	for (lowCase = 'a'; lowCase <= 'z'; lowCase++)
		putchar(lowCase);

	for (lowCase = 'A'; lowCase <= 'Z'; lowCase++)
		putchar(lowCase);

	putchar('\n');

	return (0);
}
