#include "main.h"
/**
*_strcat - concatenates 2 strings
*@dest: destination string
*@src: the source string
*Return: the destination string
*/
char *_strcat(char *dest, char *src)
{
	int destlenght = 0;
	int srclenght = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlenght++;
	for (i = 0; src[i] != '\0'; i++)
		srclenght++;
	for (i = 0; i <= srclenght; i++)
		dest[destlenght + i] = src[i];
	return (dest);
}
