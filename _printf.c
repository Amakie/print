#include "main.h"

/**
 * _printf - the function produces output according to a format
 * ...: variadic function
 * @format: string to be printed
 * Return: number of character printed excluding the null byte
 */
int _printf(const char *format, ...)
{
	va_list my_list;

	int count = 0;

	 char c;

	va_start(my_list, format);
	{
	if (format == NULL)
		return (-1);
	}
	while ((c = *format++) != '\0')
	{
		if (c == '%')
		{

			switch (*format++)
			{
				case 'c':
					putchar(va_arg(my_list, int));
					count++;
					break;
				case 's':
					count += printf("%s", va_arg(my_list, char*));
					break;
				case '%':
					putchar('%');
					count++;
					break;
				default:
					putchar('%');
					putchar(c);
					count += 2;
					break;
			}
		}
		else
		{
			putchar(c);
			count++;
		}
	}

	va_end(my_list);

	return (count);
}
