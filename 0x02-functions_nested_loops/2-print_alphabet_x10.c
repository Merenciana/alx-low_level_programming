#include "main.h"
/**
 * print_alphabet_x10 - print alphabet lines 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count;
	char ch;

	count = 0;

	while (count <= 9)
	{
		ch = 'a';
		while (ch <= 'z')
		{
		_putchar(ch);
		ch++;
		}
		_putchar('\n');
		count++;
	}
}
