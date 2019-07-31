#include "holberton.h"
/**
* _cases_num - print a number
* @arguments: argument give
* Return: int
*/
int _cases_num(va_list arguments)
{
	int num, a = 1, ct = 0;
	unsigned int n;
	char s;

	num = va_arg(arguments, int);

	if (num < 0)
	{
		s = '-';
		ct = ct + write(1, &s, 1);
		n = -num;
	}
	else
		n = num;

	while (n / a > 9)
		a *= 10;

	while (a != 0)
	{
		s = n / a + '0';
		ct = ct + write(1, &s, 1);
		n = n % a;
		a = a / 10;
	}
	return (ct);
}
