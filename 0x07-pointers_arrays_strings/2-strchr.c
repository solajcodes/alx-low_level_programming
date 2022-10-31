#include <string.h>
#include "main.h"

/**
 * _strchr - find a character in a string
 * @s: pointer to the string s to be searched
 * @c: character to be found
 * Return: the pointer to the first occurrence of the character c.
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
