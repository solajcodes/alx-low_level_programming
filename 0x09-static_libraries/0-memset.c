#include "main.h"
#include <string.h>

/**
 * _memset - fills a memory with a constant bytes.
 * @s: memory area.
 * @b: constant bytes.
 * @n: size of bytes in memory space.
 *
 * Return: pointer to the variable s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
