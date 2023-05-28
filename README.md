THIS IS A PARTNERSHIP BETWEEN DOROTHY DEDE QUAO AND GRACE AMANING-KWARTENG ON 
THE PRINTF PROJECT DATED 26TH MAY 2023
 
PRINTF

SYNOPSIS
This is an  execution of printf function that formats and prints data.

DESCRIPTION
The _printf() function produces output according to a format which is described
below. This function writes its output to the stdout which is the standard output
stream and it returns the count of printed characters when the function is successful
and -1 when the function fails.

The available convertion specifiers are:

%c: Prints a single character
%s: Prints a string of characters.
%d: prints interger.
%i: prints integer.
%b: print the binary representation of an unsigned decimal.
%r: prints a reversed string.
%u: prints unsigned integers.
%x: prints the hexadecimal representation of an unsigned decimal in lowercase letters.
%X: prints the hexadecimal representation of an unsigned decimal in uppercase letters.

PROJECT TASKS.
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
mandatory
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifier

1. Education is when you read the fine print. Experience is what you get if you don't
mandatory
Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

2. With a face like mine, I do better in print

Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary
3. What one has not experienced, one will never understand in print
Handle the following conversion specifiers:

u
o
x
X
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

USAGE
All the files would be complied using gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
Include the "main.h" header file on the functions using _printf()
