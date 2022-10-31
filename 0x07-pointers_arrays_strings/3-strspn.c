#include <string.h>
#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: pointer to the main string
 * @accept: pointer to the substring
 * Return: the number of accepted bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
