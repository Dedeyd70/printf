#include "main.h"
#include <stdio.h>


/**
 *handle_convt_specifiers - handling the conversion specifiers
 * @num: the number
 * @fieldWidth: the field width
 * @precision: the percision
 * Return: the number of chars printed
*/
int handle_convt_specifiers(int num, int fieldWidth, int precision)
{
	int f = 0;

	if (fieldWidth > 0 && precision > 0)
	{
		f += printf("%*.*d", fieldWidth, precision, num);
		f += printf("%*.*u", fieldWidth, precision, (unsigned int)num);
		f += printf("%*.*o", fieldWidth, precision, (unsigned int)num);
		f += printf("%*.*x", fieldWidth, precision, (unsigned int)num);
		f += printf("%*.*X", fieldWidth, precision, (unsigned int)num);
	}
	else if (fieldWidth > 0)
	{
		f += printf("%*d", fieldWidth, num);
		f += printf("%*u", fieldWidth, (unsigned int)num);
		f += printf("%*o", fieldWidth, (unsigned int)num);
		f += printf("%*x", fieldWidth, (unsigned int)num);
		f += printf("%*X", fieldWidth, (unsigned int)num);
	}
	else if (precision > 0)
	{
		f += printf("%.*d", precision, num);
		f += printf("%.*u", precision, (unsigned int)num);
		f += printf("%.*o", precision, (unsigned int)num);
		f += printf("%.*x", precision, (unsigned int)num);
		f += printf("%.*X", precision, (unsigned int)num);
	}
	else
	{
		f += printf("%d", num);
		f += printf("%u", (unsigned int)num);
		f += printf("%o", (unsigned int)num);
		f += printf("%x", (unsigned int)num);
		f += printf("%X", (unsigned int)num);
	}
	return (f);
}
