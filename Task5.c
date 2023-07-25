#include "main.h"
/**
 * print_non_printable - helper function to print
 * a string with non printable characters
 * @str: the string itself
 * Return: Number of printed characters
 */
int print_non_printable(const char *str)
{
	int count = 0;

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			count += print_string("\\x");
			count += print_hexadecimal((unsigned char)(*str), 1);
		} else
		{
			count += _putchar(*str);
		}
		str++;
	}
	return (count);
}
