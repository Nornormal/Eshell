#include "shell.h"

/**
 * _strcat - function concatenates two strings.
 * @dest: 1st string
 * @src: 2nd string
 *
 * Return: a pointer to the resulting string "dest".
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
