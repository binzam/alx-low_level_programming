#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: int
 * @argv: char
 * Return: 0 (success) , 1 if program doesnt have 2 arguments
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

