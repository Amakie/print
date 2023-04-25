#include "main.h"

/**
 * print_string - writes string to standard output
 * @args: input string
 * @str: pointer
 * @n: index for pointer
 * Return: On success 1.
 */
int print_string(va_list args, char *str, unsigned int n)
{
	char *s;
	unsigned int i;
	char nill[] = "(null)";

	s = va_arg(args, char *);
	if (s == NULL)
	{
		for (i = 0; nill[i]; i++)
			n = handle_buffer(str, nill[i], n);
		return (6);
	}
	for (i = 0; s[i]; i++)
		n = handle_buffer(str, s[i], n);
	return (i);
}
