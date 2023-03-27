#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed
 * to by src
 * @dest: copy to
 * @src: copy from
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0, i;

	while (*src)
	{
		src++;
		count++;
	}
	for (i = 0; i < count; i++)
		src--;
	for (i = 0; i < count; i++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = *src;

	return (dest);
}
