#include "main.h"

/**
 * handle_flags - this handles non-custom modifiers '0' and '-'
 * @num: a number to be printed with a specific flag
 * @negativeFlag: flag character to indicate a negative num
 * @zeroFlag: flag character to indicate leading zeros.
 * @positiveFlag: flag character to indicate a positive number.
 * @hashFlag: modifies output of the number
 * @spaceFlag: adds a space character before the number.
 * Return: 0
 */
int handle_flags(int num, const char *positiveFlag, const char *negativeFlag,
		const char *zeroFlag, const char *hashFlag, const char *spaceFlag)
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
	if (num < 0)
	{
		_writeputchar(*negativeFlag);
		f++;
		num = -num;
	}
	/*zero flag*/
	if (num == 0)
	{
		_writeputchar(*zeroFlag);
		f++;
	}
	/* prints the number */
	f += _printf("%d", num);

	return (f);
}
