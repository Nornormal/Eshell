#include "shell.h"

/**
 * _strcpy - copies the string pointed to by "src", including the
 * terminating null byte (\0), to the buffer pointed to by "dest".
 * @dest: 1st pointed string
 * @src: 2nd pointed string
 *
 * Return: value of pointed to "dest"
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; i >= 0; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
		i++;
	}
	return (dest);
}

/**
 * _strlen - function that returns the length of a string.
 * @s: string to be checked.
 *
 * Return: length value of a string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}
