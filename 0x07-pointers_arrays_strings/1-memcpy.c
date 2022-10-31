#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
