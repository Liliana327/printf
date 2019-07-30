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
	int a = 0, n = 0;

	for (a = 0; format[a] != '\0'; a++)
	{
	if (format[a] == '%')
	{
		switch (format[a + 1])
	{
		case 'c':
			_putchar(va_arg(arguments, int));
			a++;
			break;
		case 's':
			n += _cases_lis(arguments);
			a++;
			break;
		case '%':
			_putchar('%');
			a++;
			break;
		case '\0':
			n = -2;
			break;
		case 'i':
		case 'd':
			n += _cases_num(arguments);
			n--, a++;
			break;
		default:
			_putchar('%');
			break;
		}
		}
		else
			_putchar(format[a]);
		n++;
}
	return (n);
}
