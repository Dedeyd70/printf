#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - converting numbers of base 10 to binary
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

	len = Base_len(num, 2);
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

/**
 * print_octal - converts number to octal base
 * @list: argument list
 * Return: symbols printed to stdout
 */
int print_octal(va_list list)
{
	unsigned int num;
	int l, i;
	char *ot_rp;
	char *rev_s;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_writeputchar('0'));
	if (num < 1)
		return (-1);
	l = Base_len(num, 8);
	ot_rp = malloc(sizeof(char) * (l + 1));
	if (ot_rp == NULL)
		return (-1);
	for (i = 0; num > 0; i++)
	{
		ot_rp[l] = (num % 8) + 48;
		num = num / 8;
	}
	ot_rp[l] = '\0';
	rev_s = rev_string(ot_rp);
	if (rev_s == NULL)
	{
		free(ot_rp);
		return (-1);
	}
	write_base(rev_s);
	free(ot_rp);
	free(rev_s);
	return (l);
}
