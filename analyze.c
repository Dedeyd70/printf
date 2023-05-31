#include "main.h"

/**
 * analyze_format - Receives the main string to parameters to print a string
 * @format: string containing the chars
 * @f_list: the list of functions
 * @pr_chars: pointer to the count of printed characters
 * @arg_list: the list of arguments
 * Return: 1 if a format specifier was analyzed, otherwise 0
 */
int analyze_format(const char *format, test_t f_list[], va_list arg_list, int *pr_chars)
{
	int j, dee;

	j = 0;
	while (f_list[j].type != '\0')
	{
		if (format[1] == f_list[j].type)
		{
			dee = f_list[j].f(arg_list);
			if (dee == -1)
				return (-1);
			*pr_chars += dee;
			return (1);
		}
		j++;
	}
	if (format[1] == 'p')
	{
		dee = print_pointer(arg_list);
		if (dee == -1)
			return (-1);
		*pr_chars += dee;
		return (1);
	}
	return (0);
}

/**
 * analyze - Receives the main string to parameters to print a string
 * @format: string containing the chars
 * @f_list: the list of functions
 * @arg_list: the list of arguments
 * Return: 1 if a format specifier was analyzed, otherwise 0
 */
int analyze(const char *format, test_t f_list[], va_list arg_list)
{
	int d, pr_chars;

	pr_chars = 0;

	for (d = 0; format[d] != '\0'; d++)
	{
		if (format[d] == '%')
		{
			if (analyze_format(format + d, f_list, arg_list, &pr_chars))
				d++;
			else
			{
				_writeputchar(format[d]);
				pr_chars++;
			}
		}
		else
		{
			_writeputchar(format[d]);
			pr_chars++;
		}
	}
	return (pr_chars);
}

/**
 * handle_format - Handles a formats specifier that is not recognised
 * @format: string containing the format specifier
 * @pr_chars: pointer to the count of printed characters
 */
void handle_format(const char *format, int *pr_chars)
{
	_writeputchar(format[0]);
	_writeputchar(format[1]);
	*pr_chars += 2;
}
