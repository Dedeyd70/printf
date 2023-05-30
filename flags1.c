#include "main.h"
/**
 * handle_flags - this handles non-custom modifiers '0' and '-'
 * @num: a number to be printed with a specific flag
 * @negativeFlag: flag character to indicate a negative num
 * @zeroFlag: flag character to indicate leading zeros.
 * Return: 0
 */

int handle_flags(int num, const char *negativeFlag, const char *zeroFlag)
{
	int f = 0;

	/*Handling the negative flag*/
	if (num < 0)
	{
		putchar(*negativeFlad);
		f++
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
