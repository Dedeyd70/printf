#include "main.h"

/**
 * print_reversed - a function to string in reverse form
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


/**
 *rot13 - this converts a string to rot13.
 * @list: the string to coonvert.
 * Return: the converted string.
 */
int rot13(va_list list)
{
	int a, b;
	char *str;
	
	char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char g[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b <= 52; b++)
		{
			if (str[a] == d[b])
			{
				_writeputchar(g[b]);
				break;
			}
		}
		if (b == 53)
		{
			_writeputchar(str[a]);
		}
	}
	return (a);
}
