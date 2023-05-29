#include "main.h"

/**
 * analyze - Receives the main string to parameters to print a string
 * @format: string containing the chars
 * @f_list: the list of finctions
 * @arg_list: the list of arguments
 * Return: count of chars printed
 */
int analyze(const char *format, test_t f_list[], va_list arg_list)
{
	int d, j, dee, pr_chars;

	pr_chars = 0;
	for (d = 0; format[d] != '\0'; d++)
	{
	if (format[d] == '%')
	{
	j = 0;
	while (f_list[j].type != NULL)
	{
	if (format[d + 1] == f_list[j].type[0])
	{
	dee = f_list[j].f(arg_list);
	if (dee == -1)
	return (-1);
	pr_chars += dee;
	break;
	}
	j++;
	}
	if (f_list[j].type == NULL && format[d + 1] != ' ')
	{
	if (format[d + 1] != '\0')
	{
	_writeputchar(format[d]);
	_writeputchar(format[d + 1]);
	pr_chars += 2;
	}
	else
	return (-1);
	}
	d++;
	}
	else
	{
	_writeputchar(format[d]);
	pr_chars++;
	}
	};
	return (pr_chars);
}
