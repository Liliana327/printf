#include "holberton.h"
#include <stdarg.h>
/**
* _cases_num - check cases
* @arguments: arguments given
* Return: characters printed
*/
int _cases_num(va_list arguments)
{
	int num, a = 1, c = 0;
	unsigned int n;
	char ch;

	num = va_arg(arguments, int);
	if (num < 0)
	{
	ch = '-';
	c = c + write(1, &ch, 1);
	n = -num;
	}
	else
	n = num;
	while (n / a > 9)
	a *= 10;
	while (a != 0)
	{
	ch = n / a + '0';
	c = c + write(1, &ch, 1);
	n = n % a;
	a = a / 10;
	}
return (a);
}
