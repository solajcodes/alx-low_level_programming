#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */

void print_most_numbers(void)
{
	int var = 0;

	do {
		if (var == 4 || var == 2)
		{
			var++;
			continue;
		}
		else
			_putchar(var + '0');
		var++;
	} while (var < 10);

	_putchar('\n');
}
