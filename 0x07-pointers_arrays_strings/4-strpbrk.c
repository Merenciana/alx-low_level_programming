#include "main.h"
/**
 * *_strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: string input
 * @accept: string input
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int occurs;

	while (*s)
	{
		for (occurs = 0; accept[occurs]; occurs++)
		{
		if (*s == accept[occurs])
		return (s);
		}
	s++;
	}
	return ('\0');
}
