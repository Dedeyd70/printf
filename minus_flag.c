#include "main.h"
#include <stdio.h>
/**
 * handle_minus_flag - handling the minus flag
 * @num: the number
 * @fieldWidth: the field width
 * @precision: precision
 * Return: the number of chars written to the output strea.
 */
int handle_minus_flag(int num, int fieldWidth, int precision)
{
	int minus = 0;

	if (num < 0)
	{
		_writeputchar('-');
		minus++;
		num = -num;
	}
	minus += handle_zero_flag(num, fieldWidth, precision);
	return (minus);
}
