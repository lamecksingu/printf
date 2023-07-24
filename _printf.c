#include "main.h"
#include <stdarg.h>
/**
 * print_char - helper function to print a single char
 * @c: the character to be printed
 * Return: printed character at stdout
 */
int print_char(char c)
{
	return (_putchar(c));
}
/**
 * print_string - helper function to print a string to stdout
 * @str: string to be printed
 * Return: printed string to stdout
 */
int print_string(const char *str)
{
	int count = 0;

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}
/**
 * _printf - a function that produces output according to a format
 * @format: the format with character string
 * Return: the number of character printed
 * excluding the NULL byte
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++; /*move next*/
			/*handle conversion specifiers*/
			switch (*format)
			{
				case 'c':
					count += print_char(va_arg(args, int));
					break;
				case 's':
					count += print_string(va_arg(args, const char *));
					break;
				case '%':
					count += print_char('%');
					break;
				case 'd':
				case 'i':
					count += print_integer(va_arg(args, int));
					break;
				case 'b':
					count =+ print_binary(va_arg(args, unsigned int));
					break;
				default:
					count += print_char('%');
					count += print_char(*format);
			}
		} else
		{
			/*regular character print as it is*/
			count += print_char(*format);
		}
		format++; /*move to the next char*/
	}
	va_end(args);
	return (count);
}
