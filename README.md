0x11. C - printf
Project aimed to write our own printf function
This is a simple implementation of printf function that formats and prints data

Contributors to this project are:
1. Lameck Singu
2. Perpetua Otieno

DESCRIPTION

The _printf() function produces output according to a format which is described below. This function write its output to the stdout, the standard output stream. Returns the count of printed characters when the function is successful and -1 when the function fails.

The available convertion specifiers are:

%c: Prints a single character.
%s: Prints a string of characters.
%d: Prints integers.
%i: Prints integers.
%b: Prints the binary representation of an unsigned decimal.
%u: Prints unsigned integers
%x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
%X:Prints the hexadecial representation of an unsigned decimal in uppercase letters
%r: Prints a reversed string
%R: Prints the Rot13 interpretation of a string

Authorized functions and macros
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
