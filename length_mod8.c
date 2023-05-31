#include "main.h"
#include <stdio.h>
/**
 * handle_length_modifiers - handling the length modifiers
 * @num: the number to be used
 * Return: the number of chars wriiten to the output stream.
 */
int handle_length_modifiers(int num)
{
	int lm = 0;

	lm += printf("%ld", (long)num);
	lm += printf("%hd", (short)num);
	return (lm);
}
