#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int counting = 0;

	while (*s != '\0')
	{
		counting++;
		s++;
	}
	return (counting);
}
