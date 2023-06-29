#include "main.h"
#include <ctype.h>
/**
 * *cap_string - function that capitalizes all words of a string
 * @str: string input
 * Return: string with capitalized words
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int newWrd = 1; /*to indicate the start of a new word*/

	while (*ptr)
	{
		if (newWrd && isalpha(*ptr))
		{
			*ptr = toupper(*ptr);
			newWrd = 0;
		}
		else
		{
			switch (*ptr)
			{
				case ' ':
				case '\t':
				case '\n':
				case ',':
				case ';':
				case '.':
				case '!':
				case '?':
				case '\"':
				case '(':
				case ')':
				case '{':
				case '}':
					newWrd = 1;
					break;
				default:
					break;
			}
		}
		ptr++;
	}

	return (str);
}
