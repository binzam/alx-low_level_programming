#include "main.h"
#include <ctype.h>

/**
 * *string_toupper -  function that changes all lowercase
 *                      letters of a string to uppercase.
 * @strn: string input
 * Return: string
 *
 */

char *string_toupper(char *strn)
{
	char *pntr = strn;

	while (*pntr)
	{
		*pntr = toupper(*pntr);
		pntr++;
	}
	return (strn);
}
