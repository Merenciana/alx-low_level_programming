#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes output to stdout
 * @c: character to print
 * Return: 1 on success
 * On error, -1 is returned, and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
