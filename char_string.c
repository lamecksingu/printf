#include "main.h"
/**
 * print_char - helper function to print a single character
 * @c: a character to be printed
 * Return: number of characters printed
 */
int print_char(char c)
{
	return (_putchar(c));
}

/**
 * print_string - helper function to print a string
 * @str: a pointer to string
 * Return: number of characters printed
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
