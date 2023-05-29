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
/**
 * print_octal - converts number to octal base
 * @list: argument list
 * Return: symbols printed to stdout
 */
int print_octal(va_list list)
{
	unsigned int num;
	int l;
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
	for (int i = 0; num > 0; i++)
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
	int l, r_num;
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
	for (int i = 0; num > 0; i++)
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
		return (-1);
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
	int l, r_num;
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
	for (int i = 0; num > 0; i++)
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
		return (-1);
	write_base(rev_h);
	free(hex_rp);
	free(rev_h);
	return (l);
}
