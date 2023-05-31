#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hex_check - checks which hex function is calling
 * @num: the number
 * @x: to know which hex function is calling
 * Return: ASCII value for a letter
 */
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
	return (hex[num]);
	else
	return (Hex[num]);
}

/**
 * print_hex_lower - prints decimal number on base 16 lowercase
 * @list: the argument list
 * Return: num of chars printed
 */
int print_hex_lower(va_list list)
{
	unsigned int num;
	int l, i, r_num;
	char *hex_rp;
	char *rev_h;

	num = va_arg(list, unsigned int);

	if (num == 0)
	{
		return (_writeputchar('0'));
	}
	if (num < 1)
	{
		return (-1);
	}
	l = Base_len(num, 16);
	hex_rp = malloc(sizeof(char) * (l + 1));
	for (i = 0; num > 0; i++)
	{
		r_num = num % 16;
		if (r_num > 9)
		{
			r_num = hex_check(r_num, 'x');
			hex_rp[i] = r_num;
		}
		else
			hex_rp[i] = r_num + 48;
		num = num / 16;
	}
	hex_rp[l] = '\0';
	rev_h = rev_string(hex_rp);
	if (rev_h == NULL)
	{
		free(hex_rp);
		return (-1);
	}
	write_base(rev_h);
	free(hex_rp);
	free(rev_h);
	return (l);
}

/**
 * print_hex_upper - prints decimal number on base 16 lowercase
 * @list: the argument list
 * Return: num of chars printed
 */
int print_hex_upper(va_list list)
{
	unsigned int num;
	int l, i, r_num;
	char *hex_rp;
	char *rev_h;

	num = va_arg(list, unsigned int);

	if (num == 0)
	{
		return (_writeputchar('0'));
	}
	if (num < 1)
	{
		return (-1);
	}
	l = Base_len(num, 16);
	hex_rp = malloc(sizeof(char) * (l + 1));
	if (hex_rp == NULL)
		return (-1);
	for (i = 0; num > 0; i++)
	{
		r_num = num % 16;
		if (r_num > 9)
		{
			r_num = hex_check(r_num, 'X');
			hex_rp[i] = r_num;
		}
		else
			hex_rp[i] = r_num + 48;
		num = num / 16;
	}

	hex_rp[l] = '\0';
	rev_h = rev_string(hex_rp);
	if (rev_h == NULL)
	{
		free(hex_rp);
		return (-1);
	}
	{
		write_base(rev_h);
		free(hex_rp);
		free(rev_h);
	}
	return (l);
}
