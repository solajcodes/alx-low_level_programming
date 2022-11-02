#include "main.h"
#include <string.h>

/**
 * _puts_recursion - print a string rcursively
 * @s: pointer to the string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
		_putchar('\n');
}
