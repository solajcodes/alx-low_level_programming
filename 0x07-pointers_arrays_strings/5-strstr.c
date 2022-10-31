#include "main.h"
#include <string.h>

/**
 * @haystack: pointer to the string haystack to be searched
 * @needle: pointer to character being searched for
 *
 * Return: pointer to the first position of the needle.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
