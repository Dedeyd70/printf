#include "main.h"
#include <stdio.h>
/**
 * handle_zero_flag - handling the zero flag
 * @num: the number
 * @fieldWidth: the field Width
 * @precision: the precision
 * Return: 0
 */
int handle_zero_flag(int num, int fieldWidth, int precision)
{
	int z = 0;
	int lz, r;

	if (fieldWidth > 0)
	{
	if (num < 0)
	{
		_writeputchar('-');
		num = -num;
		z++;
	}
	lz = fieldWidth -  z - precision;
	for (r = 0; r < lz; r++)
	{
		_writeputchar('0');
		z++;
	}
	}
	return (z);
}
