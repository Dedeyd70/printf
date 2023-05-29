#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: the character string
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int print = 0;

	test_t f_list[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_percent},
	{NULL, NULL}
	};

	va_list arg_list;

	if (format == NULL)
	return (-1);

	va_start(arg_list, format);

	print = analyze(format, f_list, arg_list);
	va_end(arg_list);
	return (print);
}
