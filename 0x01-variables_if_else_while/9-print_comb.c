#include <stdio.h>
/**
 * main - pogram that prints integers seperated by commas
 * Return: 0
 */
int main(void)
{
	int d = 0;

	while (d < 10)
	{
		putchar (d + '0');
		if (d < 9)
		{
		putchar (',');
		putchar (' ');
		}
	d++;
	}
	putchar ('\n');
	return (0);
}
