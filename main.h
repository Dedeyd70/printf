#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 *struct test - defines a structure for functions and symbols
 *@type: format
 *@f: the function
 */

/* Forward declaration of struct test */
struct test
{
	char type;
	int (*f)(va_list);

};

/* Typedef for struct */
typedef struct test test_t;

/* The Main Functions */
int _printf(const char *format, ...);
int print_string(va_list);
int print_char(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_octal(va_list);
int unsigned_integer(va_list);
int print_number(va_list);
int rot13(va_list);
int print_binary(va_list);
int print_reversed(va_list);
int print_hex_lower(va_list);
int print_hex_upper(va_list);
int analyze(const char *format, test_t f_list[], va_list arg_list);
int _writeputchar(char);

/* Other Functions */
unsigned int Base_len(unsigned int, int);
char *custom_memcpy(char *dest, const char *src, unsigned int n);
char *rev_string(char *);
void write_base(char *str);
int print_unsigned_number(unsigned int);
int hex_check(int, char);
int print_str_non_printable(va_list list);
void printFormattedValues(void);


#endif
