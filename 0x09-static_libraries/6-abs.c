#include <stdlib.h>
#include "main.h"
/**
 * _abs - function that computes the absoulute
 *  value of an integer
 * @r: taskes an integer as input
 * Return: 0 (success)
 */
int _abs(int r)
{
	if (r < 0)
		r = (-1) * r;
	return (r);
}
