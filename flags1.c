#include "main.h"

/**
 * handle_flags - this handles non-custom modifiers '0' and '-'
 * @num: a number to be printed with a specific flag
 * @negativeFlag: flag character to indicate a negative num
 * @positiveFlag: flag character to indicate a positive number.
 * @hashFlag: modifies output of the number
 * @spaceFlag: adds a space character before the number.
 * @fieldWidth: the field width
 * @precision: the precision
 * Return: 0
 */
int handle_flags(int num, const char *positiveFlag, const char *negativeFlag,
		const char *hashFlag, const char *spaceFlag,
		int fieldWidth, int precision)
{
	int f = 0;
	/*positive flag*/
	if (num >= 0)
	{
		_writeputchar(*positiveFlag);
		f++;
	}
	/*hash flag*/
	if (*hashFlag != '\0')
	{
		_writeputchar(*hashFlag);
		f++;
	}
	/*space flag*/
	if (*spaceFlag != '\0' && num >= 0)
	{
		_writeputchar(*spaceFlag);
		f++;
	}

	/*negative flag*/
	if (negativeFlag[0] == '-')
	{
		f += handle_minus_flag(num, fieldWidth, precision);
	}
	else
	{
		f += handle_zero_flag(num, fieldWidth, precision);
	}
	return (f);
}
