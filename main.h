#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024
#include <stdarg.h>

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

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(char c);
int print_string(const char *str);
int print_integer(int num);
int print_binary(unsigned int num);
int print_unsigned(unsigned int num);
int print_octal(unsigned int num);
int print_hexadecimal(unsigned int num, int ippercase);
int print_non_printable(const char *str);
int print_pointer(const void *pt);
int rot13(va_list list);
int print_reversed(va_list arg);
void _write_char(char c);

/* Funciotns to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);

/* helper functions */
char* (*get_func(char i))(va_list);
char *create_buffer(void);
void write_buffer(char *buffer, int len, va_list list);
int isdigit(int c);

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16


#endif
