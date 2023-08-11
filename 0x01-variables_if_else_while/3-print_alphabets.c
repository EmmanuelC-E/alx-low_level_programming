#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Description: print the letter  alphabet in lower acse then in upper case
 *
 *  Return: Always (Success)
 */
int main(void)
{
	int j, k;

	j = 97;
	k = 65;

	while (j < 123)
	{
		putchar(j);

		j++;
	}
	while (k < 91)
	{
		putchar(k);

		k++;
	}
	putchar(10);
	return (0);
}
