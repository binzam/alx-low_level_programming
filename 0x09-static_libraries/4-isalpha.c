#include "main.h"

/**
 * _isalpha - checks if character is a letter
 *		 both lower or uppercase
 * @c: input
 * Return: 1 if true, else 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
