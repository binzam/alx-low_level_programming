#include "main.h"

/**
 * reverseStr - reverse array
 * @n: integer parameters
 * Return: 0
 */

void reverseStr(char *n)
{
	int x = 0;
	int y = 0;
	char tmp;

	while (*(n + x) != '\0')
	{
		x++;
	}
	x--;

	for (y = 0; y < x; y++, x--)
	{
		tmp = *(n + y);
		*(n + y) = *(n + x);
		*(n + x) = tmp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: 1st number to add
 * @n2: 2nd number to add
 * @r: pointer to buffer (result)
 * @size_r: buffer size(length)
 * Return: pointer to calling the function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int over_flow = 0, digits = 0;
	int i = 0, j = 0;
	int value1 = 0, value2 = 0, tmp_total = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || over_flow == 1)
	{
		if (i < 0)
			value1 = 0;
		else
			value1 = *(n1 + i) - '0';
		if (j < 0)
			value2 = 0;
		else
			value2 = *(n2 + j) - '0';
		tmp_total = value1 + value2 + over_flow;
		if (tmp_total >= 10)
			over_flow = 1;
		else
			over_flow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (tmp_total % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	reverseStr(r);
	return (r);
}

