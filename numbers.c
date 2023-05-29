#include "main.h"

/**
 * print_number - printing a number
 * @args: argument list
 * Return: num of printed arguments
 */
int print_number(va_list args)
{
	int d, j, e;
	unsigned int num;

	d = va_arg(args, int);
	j = 1;
	e = 0;
	if (d < 0)
	{
	e += _writeputchar('-');
	num = (unsigned int)(-d);
	}
	else
	num = (unsigned int)(d);
	for (; num / j > 9; j *= 10)
	{
	;
	}
	for (; j != 0; j /= 10)
	{
	e += _writeputchar('0' + (num / j));
	num %= j;
	}
	return (e);
}


