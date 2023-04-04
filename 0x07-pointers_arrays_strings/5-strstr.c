#include "main.h"

/**
 * *_strstr - finds the first occurrence of the
 * substring needle in the string haystack
 * @haystack: input string
 * @needle: input string
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *x != '\0')
		{
			x++;
			y++;
		}
		if (*y == '\0')
			return (haystack);
	}
	return (0);
}
