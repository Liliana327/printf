#include "holberton.h"
/**
* case_lst - Evaluate the cases
* @format: format
* @arguments: arguments
* Return: ()
*/
int case_c(va_list arguments, const char *format)
{
	int a, n = 0;
	char c;

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] == '%')
		{
			switch (format[a + 1])
			{
				case 'c':
					c = va_arg(arguments, int), _putchar(c);
					a++;
					break;
				case 's':
					n += _cases_lis(arguments), n--, a++;
					break;
				case '%':
					_putchar('%'), a++;
					break;
				case '\0':
					n = -2;
					break;
				case 'd':
				case 'i':
					n += _cases_num(arguments);
					n--, a++;
					break;
				default:
					_putchar('%');
					break;
			}
		}
		else
			_putchar(format[a]), n++;
	}
	return (n);
}
