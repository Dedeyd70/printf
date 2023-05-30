#include "main.h"

int handle_flags(int num, const char *positiveFlag,
		const char *hashFlag, const char *spaceFlag)
{
	int f = 0;
	/*Handling the positive flag*/
	if (num >= 0)
	{
		putchar(*positiveFlag);
		f++;
	}
	/*Handling the hash flag*/
	if (*hashFlag != '\0')
	{
		putchar(*hashFlag);
		f++;
	}
	/*Handling the space flag*/
	if (*spaceFlag != '\0' && num >= 0)
	{
		putchar(*spaceFlag);
		f++;
	}
	/*So now to print the number*/
	printf("%d", num);
	f += snprintf(NULL, 0, "%d", num);
	return (f);
}
