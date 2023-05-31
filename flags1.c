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
	/*Handling the positive flag*/
	if (num >= 0)
	{
		putchar(*positiveFlag);
		f++;
	}
	/*Handling the hash flag*/
	if (*hashFlag != '\0')
	{
		putchar(*hashFlag);
		f++;
	}
	/*Handling the space flag*/
	if (*spaceFlag != '\0' && num >= 0)
	{
		putchar(*spaceFlag);
		f++;
	}

	/*Handling the negative flag*/
	if (num < 0)
	{
		putchar(*negativeFlag);
		f++;
		num = -num;
	}
	/*Handling the zero flag*/
	if (num == 0)
	{
		putchar(*zeroFlag);
		f++;
	}
	/*So printing the number*/
	printf("%d", num);
	f += snprintf(NULL, 0, num);

	return (f);
}
