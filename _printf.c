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
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{'d', print_integer},
	{'i', print_integer},
	{'b', print_binary},
	{'u', unsigned_integer},
	{'o', print_octal},
	{'x', print_hex_lower},
	{'X', print_hex_upper},
	{'r', print_reversed},
	{'R', rot13},
	{'S', print_str_non_printable},
	{0, NULL}
	};

	va_list arg_list;

	if (format == NULL)
	return (-1);

	va_start(arg_list, format);

	print = analyze(format, f_list, arg_list);
	va_end(arg_list);
	return (print);
}
