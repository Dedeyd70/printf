#include "main.h"
#include <stdarg.h>
/**
 * print_pointer - Prints a pointer address.
 * @list: the list of arguments.
 * Return: the number of characters to be printed.
 */
int print_pointer(va_list list)
{
	int a, count;
	void *ptr = va_arg(list, void*);
	
	char hex[17];
	
	sprintf(hex, "%p", ptr);
	
	count = 0;

	_writeputchar('0');
	_writeputchar('x');
	count += 2;

	for (a = 2; hex[a] != '\0'; a++)
	{
		_writeputchar(hex[a]);
		count++;
	}
	return (count);
}
