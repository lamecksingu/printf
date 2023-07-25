#include "main.h"
#include <stdarg.h>
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
					count += print_binary(va_arg(args, unsigned int));
					break;
				case 'u':
					count += print_unsigned(va_arg(args, unsigned int));
					break;
				case 'o':
					count += print_octal(va_arg(args, unsigned int));
					break;
				case 'x':
					count += print_hexadecimal(va_arg(args, unsigned int), 0);
					break;
				case 'X':
					count += print_hexadecimal(va_arg(args, unsigned int), 1);
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
