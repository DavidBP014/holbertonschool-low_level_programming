#include <stdio.h>

/**
 * main- Prints all the numbers of base 16 in lowercase
 * followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char bs;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (bs = 'a'; bs <= 'f'; bs++)
	{
		putchar(bs);
	}
	putchar('\n');
	return (0);
}
