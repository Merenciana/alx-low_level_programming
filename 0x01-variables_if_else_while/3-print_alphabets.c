#include <stdio.h>
/**
 * main - print lowercase and uppercase alphabets
 * Return: 0
 */
int main(void)
{
	/*declare variable*/
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
		for (ch = 'A'; ch <= 'Z'; ch++)
		{
			putchar(ch);
		}
	return (0);
}
