#include "main.h"

/**
 * _printf - handles identifier d and i
 * @format: argument to the function
 * Return: number of characters
 */
int _printf(const char *format, ...)
{
	va_list list;

	va_start(list, format);

	int result = 0;

	for (const char *p = format; *p != '\0'; p++)
	{
		if (*p == %)
			p++;
			switch (*p)
				case 'd':
				case 'i':

					int value = va_args(list, int);

					char buffer[12];

					int length = sprintf(buffer, "%d", value);

					result += result_formatted(buffer, length, p);
					break;
		else
		{
			putchar(p);
			result++;
		}
	}

	va_end(list);
	return (result);
}

/**
 * int_spec - gets formatting options
 * @str: string
 * @len: length
 * @spec: specifier
 * Return: number of characters
 */
int int_spec(const char *str, int len, const char spec)
{
	void(int field_width);

	void(int precision);

	int result = 0;

	if (precision >= 0 && length < precision)
	{
	char buffer[precision + 1];

	memset(buffer, '0', precision - length);
	buffer[precision - length] = '\0';
	written += printf("%s", buffer);
	}

	result += printf("%s", str);

	if (field_width > 0 && written < field_width)
	{
	char buffer[field_width - written + 1];

	memset(buffer, ' ', field_width - written);
	buffer[field_width - written] = '\0';
	written += printf("%s", buffer);
	}

	return (result);
}
