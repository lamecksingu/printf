#include "main.h"
#include <stdarg.h>
/**
 * print_integer - helper function to print integer
 * @num: an integer to be printed
 * Return: number of integers printed
 */
int print_integer(int num)
{
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	/*recursive call to print individual digits*/
	if (num / 10)
	{
		/*print the digits before the las one*/
		count += print_integer(num / 10);
	}
	/*print the las digit and update the count*/
	count += _putchar('0' + (num % 10));
	return (count);
}
