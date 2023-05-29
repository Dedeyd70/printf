#include "main.h"

/**
 * print_char - printing characters
 * @list: argument list
 * Return: 1
 */
int print_char(va_list list)
{
	_writeputchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - Printing a string
 * @list: argument list
 * Return: the amount of characters printed
 */
int print_string(va_list list)
{
	int d;
	char *str;

	str = va_arg(list, char*);

	if (str == 0)
	str = "(null)";
	for (d = 0; str[d] != '\0'; d++)
	_writeputchar(str[d]);
	return (d);
}

/**
 * print_percent - Printing a percent sysmbol
 * @list: argument list
 * Return: the amount of characters printed
 */
int print_percent(__attribute__((unused))va_list list)
{
	_writeputchar('%');
	return (1);
}

/**
 * unsigned_integer - printing unsigned int
 * @list: argument list
 * Return: number counts
 */
int unsigned_integer(va_list list)
{
	unsigned int numb;

	numb = va_arg(list, unsigned int);

	if (numb == 0)
		return (print_unsigned_number(numb));
	return (0);
}

/**
 * print_integer - Printing an integer
 * @list: the argument list
 * Return: the amount of chars printed
 */
int print_integer(va_list list)
{
	int num;

	num = print_number(list);
	return (num);
}
