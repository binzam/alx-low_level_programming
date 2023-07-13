#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * isDigit - checks if a string contains only digits or not
 * @s: string
 *
 * Return: 0 (false), 1 (true)
 */

int isDigit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive integers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	char *str1, *str2;
	int str1Len, str2Len, sum, i, carry, digit1, digit2, *result, a = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !isDigit(str1) || !isDigit(str2))
		errors();
	str1Len = _strlen(str1);
	str2Len = _strlen(str2);
	sum = str1Len + str2Len + 1;
	result = malloc(sizeof(int) * sum);
	if (!result)
		return (1);
	for (i = 0; i <= str1Len + str2Len; i++)
		result[i] = 0;
	for (str1Len = str1Len - 1; str1Len >= 0; str1Len--)
	{
		digit1 = str1[str1Len] - '0';
		carry = 0;
		for (str2Len = _strlen(str2) - 1; str2Len >= 0; str2Len--)
		{
			digit2 = str2[str2Len] - '0';
			carry += result[str1Len + str2Len + 1] + (digit1 * digit2);
			result[str1Len + str2Len + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[str1Len + str2Len + 1] += carry;
	}
	for (i = 0; i < sum - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
