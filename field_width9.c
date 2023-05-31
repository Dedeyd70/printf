#include "main.h"
#include <stdio.h>
/**
 * handle_field_width - handling the field width
 * @num: the number
 * @fieldWidth: the field width
 * Return: the number of chars wriiten to the output stream.
 */
int handle_field_width(int num, int fieldWidth)
{
	int fw = 0;

	if (fieldWidth > 0)
	{
		fw += printf("%*d", fieldWidth,  num);
	}
		else
		{
		fw += printf("%d", num);
		}
	return (fw);
}

