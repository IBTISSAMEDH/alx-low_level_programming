#include "stdio.h"
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: the first occurrence of the substring
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *ptrh = haystack;
		char *ptrn = needle;

		while (*ptrh == *ptrn && *ptrn != '\0')
		{
			ptrh++;
			ptrn++;
		}
		if (*ptrn == '\0')
			return (haystack);
	}
	return (NULL);
}
