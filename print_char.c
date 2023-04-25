#include <stdio.h>
#include "main.h"
/**
 * print_char - writes character to standard output
 * @args: input character
 * @str: pointer
 * @n: index for pointer
 * Return: On success 1.
 */
int print_char(va_list args, char *str, unsigned int n)
{
	char c;

	c = va_arg(args, int);
	handle_buffer(str, c, n);

	return (1);
}
