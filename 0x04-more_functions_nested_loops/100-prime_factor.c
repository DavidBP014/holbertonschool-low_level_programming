#include <stdio.h>
<<<<<<< HEAD

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, fp;

	n = 612852475143;
	for (fp = 2; fp <= n; fp++)
	{
		if (n % fp == 0)
		{
			n /= fp;
			fp--;
		}
	}
	printf("%ld\n", fp);
	return (0);
=======
/**
 * main - factor
 *
 * Return: 0
 */
int main(void)
{
  unsigned long int a, i;

  a = 612852475143;
  for (i = 3; i < (a / 2); i = i + 2)
    {
      while ((a % i == 0) && (a != i))
	a = a / i;
    }
  printf("%lu\n", a);
  return (0);
>>>>>>> 994d77e2c70efa6c385ef8ee6208ceec86557145
}