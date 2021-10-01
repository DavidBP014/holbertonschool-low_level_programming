#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,
 * followed by a new line,except q and e.
 * Return:Always 0 (Success)
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp != 'e' && alp != 'q')
		{
			putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}
