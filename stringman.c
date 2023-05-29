#include "main.h"

/**
 * print_reversed - this calls a function in a reverse form and prints string
 * @arg: The arguments passed to function.
 * Return: the amount of printed characters.
 */
int print_reversed(va_list arg)
{
	char *ptr;
	char *str;
	int s_len;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);
	if (ptr == NULL)
		return (-1);
	for (s_len = 0; ptr[s_len] != '\0'; s_len++)
		_writeputchar(ptr[s_len]);
	free(ptr);
	return (s_len);
}
