#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(char c);
int print_string(const char *str);
int print_integer(int num);
int print_binary(unsigned int num);
int print_unsigned(unsigned int num);
int print_octal(unsigned int num);
int print_hexadecimal(unsigned int num, int uppercase);
int print_non_printable(const char *str);

#endif
