#include "main.h"

int calcLength(char *s);
int test4Palndrm(char *s, int inx, int lng);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if string is a palindrome, 0 it's not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}

	return (test4Palndrm(s, 0, calcLength(s)));
}

/**
 * calcLength - function that returns the length of a string
 * @s: string
 * Return: length of string
 */

int calcLength(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + calcLength(s + 1));
}

/**
 * test4Palndrm - function that tests for palindrome string
 * @s: string
 * @inx: index
 * @lng: length of the string
 * Return: 1 if palindrome exsits, 0 if not
 */

int test4Palndrm(char *s, int inx, int lng)
{
	if (*(s + inx) != *(s + lng - 1))
	{
		return (0);
	}
	if (inx >= lng)
	{
		return (1);
	}

	return (test4Palndrm(s, inx + 1, lng - 1));
}

