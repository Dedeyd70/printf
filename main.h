#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


/**
 *struct test - defines a structure for functions and symbols
 *@type: format
 *@f: the function
 */
struct test
{
char type;
int (*f)(va_list);
};
typedef struct test test_t

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
char *memcpy(char *dest, char *src, unsigned int n);
char *rev_string(char *);
void write_base(char *str);
int print_unsigned_number(unsigned int);


#endif
