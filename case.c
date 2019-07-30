#include <stdarg.h>
#include "holberton.h"

/**
* case_lst - Evaluate the cases
* @format: format
* @arguments: arguments
* Return: ()
*/

int case_lst(const char *format, va_list arguments)
{
	int a = 0;
	int n = 0;
	char *m;

	while (format[a] != '\0')
	{
	if (format[a + 1] == '\0' && format[a] == '%')
		return (n = -1);
	else if (format[a] == '%')
	{
		switch (format[a + 1])
	{
		case 'c':
			_putchar(va_arg(arguments, int));
			n++, a++;
			break;
		case 's':
			m = va_arg(arguments, char *);
			n += _cases_lis(m);
			a++;
			break;
		case '%':
			_putchar('%');
			a++, n++;
			break;
		default:
			_putchar(format[a]);
			n++;
			break;
			}
			a++;
		}
		else
			_putchar(format[a]);
			n++;
			a++;
}
	va_end(arguments);
	return (n);
}
