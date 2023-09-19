#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char *const format, ...)
{
	spc_list match[] = {
		{"%s", printf_string},
		{"%c", printf_char},
		{"%%", print_percent}};

	va_list args_list;
	int i = 0, spc, len = 0;

	va_start(args_list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		int found = 0;

		spc = 3;

		while (spc >= 0)
		{
			if (match[spc].id[0] == format[i] && match[spc].id[1] == format[i + 1])
			{
				len += match[spc].f(args_list);
				i = i + 2;
				found = 1;
				break;
			}
			spc--;
		}
		if (!found)
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(args_list);
	return (len);
}
