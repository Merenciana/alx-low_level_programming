#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Returns a pointer to the first occurrence of the
 * character c in the string s, or NULL if the character is not found
 * @s: input string
 * @c: first occurence character c
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int z;

	for (z = 0; s[z] >= '\0'; z++)
	{
		if (s[z] == c)
			return (s + z);
	}
	return (NULL);
}
