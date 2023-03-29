#include "main.h"
/**
* _strlen - return th length of a string.
*@s: the string that we need to caclut its length.
* Return: the length of s.
*/
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
