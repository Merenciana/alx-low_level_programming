#include "main.h"

/**
 * *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination
 * @src: source
 * @n: input
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
		dest[num] = src[num];
	return (dest);
}
