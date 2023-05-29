#include "main.h"

/**
 * print_char - printing characters
 * @list: argument list
 * Return: the amount of characters printed
 */
int print_char(va_list list)
{
	_writeputchar(va_arg(list, int))
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
