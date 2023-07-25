#include "main.h"
/**
 * print_unsigned - helper function to print unsigned integer
 * @num: the number to be printed as unsigned integer
 * Return: number of integers printed
 */
int print_unsigned(unsigned int num)
{
	int index, count;
	char buffer[20];/*enough for 32-bit unsigned int*/

	if (num == 0)
	{
		return (_putchar('0'));
	}

	index = 0;
	while (num > 0)
	{
		/*convert the last digit to its character representation*/
		buffer[index++] = '0' + (num % 10);
		num /= 10;/*move to the next digit*/
	}

	count = 0;
	while (index > 0)
	{
		count += _putchar(buffer[--index]);
	}
	return (count);
}
/**
 * print_octal - helper function to convert unsigned int
 * to its octal representation
 * @num: number to be converted
 * Return: count of numbers printed
 */
int print_octal(unsigned int num)
{
	int index, count;
	char buffer[2];

	if (num == 0)
	{
		return (_putchar('0'));
	}

	index = 0;
	while (num > 0)
	{
		/*take the last 3bits(octal) and convert to its character represenation*/
		buffer[index++] = '0' + (num & 7);
		/*right shift by 3 bits to get the next octal*/
		num  >>= 3;
	}

	count = 0;
	while (index > 0)
	{
		count += _putchar(buffer[--index]);
	}
	return (count);
}

/**
 * print_hexadecimal - helper function to convert unsigned int into hex
 * @num: unsigned int to be converted
 * @uppercase: a flag to determine whether to print uppercase or lowercase
 * Return: a number of character printed
 */
int print_hexadecimal(unsigned int num, int uppercase)
{
	int index, digit, count;
	char buffer[20];

	if (num == 0)
	{
		return (_putchar('0'));
	}

	index = 0;
	while (num > 0)
	{
		/*take last 4 bits and convert to its character representation*/
		digit = num & 15;
		if (digit < 10)
		{
			buffer[index++] = '0' + digit;
		} else
		{
			buffer[index++] = (uppercase) ? 'A' + digit - 10 : 'a' + digit - 10;
		}
		/*right shift by 4 bits*/
		num >>= 4;
	}

	count = 0;
	while (index > 0)
	{
		count += _putchar(buffer[--index]);
	}
	return (count);
}
