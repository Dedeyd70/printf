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
/**
 * print_unsigned_number - Printing an unsigned number.
 * @n: unsigned integer.
 * Return: the amount of numbers.
 */
int print_unsigned_number(unsigned int n)
{
	int l;
	int d;
	unsigned int numb;

	l = 0;
	d = 1;
	numb = n;

	for (; numb / d > 9; )
		d *= 10;

	for (; d != 0;)
	{
		l += _writeputchar('0' + numb / d);
		numb %= d;
		d /= 10;
	}
	return (l);
}
