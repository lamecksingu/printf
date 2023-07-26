#include "main.h"
#include <stdint.h>
/**
 * print_pointer - a helper function to convert a pointer
 * to its hexadecimal representation
 * @ptr: the pointer itself
 * Return: hexadecimal pointer
 */
int print_pointer(const void *ptr)
{
	uintptr_t num;
	char buffer[20];
	int digit, index, count = 0;

	num = (uintptr_t)ptr;
	index = 0;
	while (num > 0)
	{
		/*take last 4 digits and convert into char representation*/
		digit = num & 15;
		if (digit < 10)
		{
			buffer[index++] = '0' + digit;
		} else
		{
			buffer[index++] = '0' + digit - 10;
		}
		num >>= 4; /*right shift by 4*/
	}
	/*print prefix "0x" for pointers*/
	count += print_string("0x");

	count = 0;
	while (index > 0)
	{
		count += _putchar(buffer[--index]);
	}
	return (count);
}
