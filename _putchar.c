#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: the character to print
 * Return: On success 1
 * On error, -2 is returned, errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
