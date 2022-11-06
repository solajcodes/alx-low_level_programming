#include "main.h"
/**
 * _isalpha - checks for alphabetical letters
 * @c: upper and lower case characters to be checked
 * Return: return 0 or 1 depending on the condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
