#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int x;
	char ch;

	for (x = '0'; x <= '9'; x++)
	putchar(x);

	for (ch = 'a'; ch <= 'f'; ch++)
	putchar (ch);
	putchar ('\n');
	return (0);
}
