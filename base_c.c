#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - conerting numbers of base 10 to binary
 * @list: argument list
 * Return: the length of number printed
 */
int print_binary(va_list list)
{
	unsigned int num;
	int d, len;
	char *s;
	char *rev_s;

	num = va_arg(list, unsigned int);
	if (num == 0)
	return (_writeputchar('0'));

	if (num < 1)
	return (-1);

	len = base_len(num, 2);
	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	return (-1);

	for (d = 0; num > 0; d++)
	{
	if (num % 2 == 0)
	s[d] = '0';
	else
	s[d] = '1';
	num = num / 2;
	}

	s[d] = '\0';
	rev_s = rev_string(s);

	if (rev_s == NULL)
	{
	free(s);
	return (-1);
	}
	write_base(rev_s);
	free(s);
	free(rev_s);
	return (len);
	}
}
