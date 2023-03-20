#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet except the letter e and  q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letter = 97;

	while (letter < 123)
	{
		if (letter != 101 && letter != 113)
		{
			putchar(letter);
		}
		letter++;
	}
	putchar(10);

	return (0);
}
