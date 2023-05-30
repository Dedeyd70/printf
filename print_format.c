#include "main.h"

/**
 * printFormattedValues - printing length
 *
 * Return: always 0
 */
void printFormattedValues(void)
{
	int in = 42;
	long long_in = 1234567890L;
	short short_in = 99;

	printf("Decimal: %d\n", in);
	printf("Long decimal: %ld\n", long_in);
	printf("Short decimal: %hu\n", short_in);
	printf("Unsigned decimal: %u\n", in);
	printf("Long unsigned decimal: %lu\n", long_in);
	printf("Short unsigned decimal: %hu\n", short_in);
	printf("Octal: %o\n", in);
	printf("Long octal: %lo\n", long_in);
	printf("Short octal: %ho\n", short_in);
	printf("Hexadecimal: %x\n", in);
	printf("Long hexadecimal: %lx\n", long_in);
	printf("Short hexadecimal: %hx\n", short_in);
}
