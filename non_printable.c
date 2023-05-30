#include "main.h"
#include <string.h>

/**
 * print_str_non_printable - prints a string with non printable charters
 * @list: argument list
 * Return: count
 */
int print_str_non_printable(va_list list)
{
	int dee;
	char *str;
	int count = 0;

	str = va_arg(list, char*);

	if (str == NULL)
	str = "(null)";

	for (dee = 0; str[dee] != '\0'; dee++)
	{
		if (str[dee] < 32 || str[dee] >= 127)
		{
			printf("\\x%02X", (unsigned char) str[dee]);
			count += 4;
		}
		else
		{
			_writeputchar(str[dee]);
			count++;
		}
	}
	return (count);
}
