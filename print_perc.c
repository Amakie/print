#include <stdio.h>
#include "main.h"
/**
 * print_perc - writes character to standard output
 * @a: input chararacter
 * @str: pointer
 * @i: index for pointer
 * Return: On success 1.
 */
int print_perc(va_list a __attribute__((unused)), char *str, unsigned int i)
{
	handle_buffer(str, '%', i);

	return (1);
}
