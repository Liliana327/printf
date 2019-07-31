#include "holberton.h"
/**
* _cases_c - auxiliary function
*
* @arguments: argument list
*
* @format: types of arguments passed to the function
*
* Return: the number of characters printed
*/
int _cases_c(va_list arguments, const char *format)
{
	int a = 0, ct = 0;

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
				case '%':
					_putchar('%');
					a++;
					break;
				case 's':
					ct += _cases_lis(arguments);
					ct--, a++;
					break;
				case '\0':
					ct = -2;
					break;
				case 'd':
				case 'i':
					ct += _cases_num(arguments);
					ct--, a++;
					break;
				default:
					_putchar('%');
					break;
			}
		}
		else
			_putchar(format[a]);
		ct++;
	}
	return (ct);
}
