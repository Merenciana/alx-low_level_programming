#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	/*declare variable*/
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		/*prints the value of the variable*/
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
