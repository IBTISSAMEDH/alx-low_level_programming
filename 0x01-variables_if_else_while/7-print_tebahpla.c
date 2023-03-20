#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int reverse = 122;

	while (reverse > 96)
	{
		putchar(reverse);
		reverse--;
	}
	putchar(10);

	return (0);
}
