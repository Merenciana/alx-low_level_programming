#include "main.h"
/**
 * print_rev - prints a string reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int counting = 0;
	int v;

	while (*s != '\0')
	{
		counting++;
		s++;
	}
	s--;
	for (v = counting; v > 0; v--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
