#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_binary - converts unsigned int to binary
 * @num: the unsigned int to binary
 * Return: binary number
 */
int print_binary(unsigned int num)
{
	int num_bits, count, index;
	char *buffer;
	/*handle the case when number is 0*/
	if (num == 0)
	{
		return (_putchar('0'));
	}
	/*determine the number of bits needed to represent the number*/
	num_bits = sizeof(num) * 8; /*8 bits per byte*/
	/*allocate memory for the buffer to store binary representation*/
	buffer = malloc(num_bits + 1); /*add 1 for null terminator*/
	if (buffer == NULL)
	{
		return (-1);/*memory allocation fails*/
	}
	/*null-terminate buffer*/
	buffer[num_bits] = '\0';

	/*perform binary conversion*/
	index = num_bits - 1;/*start from last index of the buffer*/
	while (num > 0)
	{
		/*store 1 or 0 in the buffer based on the rightmost bit*/
		buffer[index--] = (num & 1) ? '1' : '0';
		num >>= 1;/*right shift the number to get the next bit*/
	}
	index++;
	while (buffer[index])
	{
		_printf("%c\n", buffer[index++]);
	}
	/*print the binary representation*/
	count = num_bits - index - 1;/*compute count*/
	/*free allocated memory*/
	free(buffer);
	return (count);
}
