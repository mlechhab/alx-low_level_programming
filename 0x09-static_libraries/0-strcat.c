#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: a pointer to the resulting string @dest
 */
char *_strcat(char *dest, const char *src)
{
	int dest_len = 0;
	int i;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Copy the source string to the destination string */
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	/* Add the null terminator to the resulting string */
	dest[dest_len + i] = '\0';

	return (dest);
}

