#include "main.h"

/**
 * _printf - My own printf function
 * @format: Contains the format specifiers
 *
 * Return: The _printf count, 0 (success)
 */

int _printf(const char *format, ...)
{
	int printer = 0;
	va_list var;

	if (format == NULL)
		return (-1);
	va_start(var, format);
	while (format && *format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if ((*format == '\0') || (*format == ' '))
				return (-1);
			if (*format == 'c')
				printer += _putchar(va_arg(var, int));
			else if (*format == 's')
				printer += _puts_string(va_arg(var, char *));
			else if (*format == '%')
				printer += write(1, "%", 1);
			else if ((*format == 'd') || (*format == 'i'))
				printer += _puts_int(va_arg(var, int));
			else
			{
				printer += write(1, "%", 1);
				printer += write(1, format, 1);
			}
		}
		else
			printer += write(1, format, 1);
		format++;
	}
	va_end(var);
	return (printer);
}
