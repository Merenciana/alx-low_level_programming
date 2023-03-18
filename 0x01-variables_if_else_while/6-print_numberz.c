#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int y;

	for (y = '0'; y <= '9'; y++)
	putchar(y);
	putchar('\n');
	return (0);
}
