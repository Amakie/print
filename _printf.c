#include "main.h"

/**
 * _printf - function that produces specified output.
 * @format: string.
 *
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, n = 0;
	va_list args;
	int (*func)(va_list, char *, unsigned int);
	char *buffer;

	va_start(args, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{	print_buffer(buffer, n), free(buffer), va_end(args);
				return (-1);
			}
			else
			{	func = get_function(format, i + 1);
				if (function == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					handle_buffer(buffer, format[i], n), len++, i--;
				}
				else
				{
					len += func(args, buffer, n);
					i += all_functions(format, i + 1);
				}
			} i++;
		}
		else
			handle_buffer(buffer, format[i], n), len++;
		for (n = len; n > 1024; n -= 1024)
			;
	}
	print_buffer(buffer, n), free(buffer), va_end(args);
	return (len);
}
