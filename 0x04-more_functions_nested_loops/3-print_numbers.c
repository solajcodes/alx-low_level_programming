#include "main.h"

/**
 * print_numbers - prints number from 0-9
 */

void print_numbers(void)
{
	int solaj = 0;

	do {
		_putchar(solaj + '0');
		solaj++;
	} while (solaj < 10);

	_putchar('\n');
}
