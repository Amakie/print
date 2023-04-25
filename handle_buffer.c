#include "main.h"

/**
 * handle_buffer - adds the buffer characters
 * @str: buffer pointer
 * @c: charcter to concatenate
 * @n: index of buffer pointer
 * Return: index of buffer pointer.
 */
unsigned int handle_buffer(char *str, char c, unsigned int n)
{
	if (n == 1024)
	{
		print_buffer(str, n);
		n = 0;
	}
	str[n] = c;
	n++;
	return (n);
}
