#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>


/**
 * *_memcpy - Copying the memory area
 * @dest: the memory area
 * @src: the memory area
 * @n: the bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		*(dest + d) = *(src + d);
	}
	return (dest);
}

/**
 * rev_string - reversing a string
 * @s: the string
 * Return: pointer to character
 */
char *rev_string(char *s)
{
	int l, h;
	char t;
	char *dest;

	for (l = 0; s[l] != '\0'; l++)
	{}

	dest = malloc(sizeof(char) * l + 1);
	if (dest == NULL)
	return (NULL);

	memcpy(dest, s, l);
	for (h = 0; h < l; h++, l--)
	{
	t = dest[l - 1];
	dest[l - 1] = dest[h];
	dest[h] = t;
	}
	return (dest);
}

/**
 * write_base - sending chars to be written on stdout
 * @str: String to be used
*/
void write_base(char *str)
{
	int d;

	for (d = 0; str[d] != '\0'; d++)
	_writeputchar(str[d]);
}


/**
 * Base_len - calculating the length of an octal number
 * @num: the num
 * @base: the base
 * Return: length of a number
 */
unsigned int Base_len(unsigned int num, int base)
{
	unsigned int j;

	for (j = 0; num > 0; j++)
	num = num / base;
	return (j);
}

