#include "main.h"

/**
 * print_buffer - prints buffer
 * @str: buffer pointer
 * @numbuffer: number of byte to print
 * Return: number of bytes printed
 */
int print_buffer(char *str, unsigned int numbuffer)
{
	return (write(1, str, numbuffer));
}
