#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			count++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
				break;
			if (format[i] == 'c')
			{
				int c = va_arg(args, int);

				putchar(c);
				count++;
			}
			else if (format[i] == 's')
			{
				char *s = va_arg(args, char *);

				while (*s != '\0')
				{
					putchar(*s);
					s++;
					count++;
				}
			}
			else if (format[i] == '%')
			{
				putchar('%');
				count++;
			}
			else
				continue;
		}
	}
	va_end(args);
	return (count);
}
