#include "main.h"
#include <stdio.h>
/**
 * handle_precision - handling the precision
 * @num: the number to be used
 * @precision: the precision
 * Return: the number of chars written to the output stream.
 */
int handle_precision(int precision)
{
	int pr = 0;
	int r;

	if (precision > 0)
	{
		_writeputchar('.');
		pr++;

	for (r = 0; r < precision; r++)
	{
		_writeputchar('0');
		pr++;
	}
	}
	return (pr);
}
