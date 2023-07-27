#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024
#include <stdarg.h>

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

/* helper functions */
char* (*get_func(char i))(va_list);
char *create_buffer(void);
void write_buffer(char *buffer, int len, va_list list);


#endif
