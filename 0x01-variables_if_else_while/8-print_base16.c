#include <stdio.h>

/**
 * main - print all hexadecimal numbers
 *
 * Return: 0, Everytime.
 *
 */
int main(void)
{
	int n;
	char a;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}

