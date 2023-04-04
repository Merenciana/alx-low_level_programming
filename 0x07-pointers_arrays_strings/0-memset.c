#include "main.h"

/**
 * *_memset - function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: pointer destination
 * @b: constant byte
 * @n: bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
		s[num] = b;
	return (s);
}
