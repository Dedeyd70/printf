
/**
 * print_pointer - Prints a pointer address.
 * @list: the list of arguments.
 * Return: the number of characters to be printed.
 */
int print_pointer(va_list list)
{
	void *ptr = va_arg(list, void*);
	uintptr_t address = (uintptr_t)ptr;

	/*Converting the address  address to hexadecimal string presentation*/
	char hex[17];

	sprintf(hex, "%p", ptr);

	/*printing the address of the pointer*/
	int count = 0;

	_writeputchar('0');
	_writeputchar('x');
	count += 2;

	for (int a = 2; hex[a] != '\0'; a++)
	{
		_writeputchar(hex[a]);
		count++;
	}
	return (count);
}
