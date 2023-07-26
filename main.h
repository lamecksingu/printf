#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* va_list */
#include <stdlib.h> /* malloc, free */
#include <unistd.h> /* write */
#include <stdio.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/*Main functions*/
int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _write_char(char);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(__attribute__((unused))va_list list);
int print_integer(va_list list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);

/*Helper functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void _write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);
int is_digit(char);

/* Funciotns to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);


#endif
