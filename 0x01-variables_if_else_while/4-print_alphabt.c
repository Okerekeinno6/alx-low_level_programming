#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: 0 when successful
 */
int main(void)
{
	char lowCase;

	for (lowCase = 'a'; lowCase <= 'z'; lowCase++)
	{
		if (lowCase != 'e' && lowCase != 'q')
			putchar(lowCase);
	}

	putchar('\n');

	return (0);
}
