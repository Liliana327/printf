#include "holberton.h"
/**
* _cases_lis - check cases
* @arguments: arguments given
* Return: characters printed
*/
int _cases_lis(va_list arguments)
{
	int a = 0, c = 0;
	char *m;

	m = va_arg(arguments, char *);

	if (m == NULL)
		m = "(null)";

	for (a = 0; m[a] != '\0'; a++)
	{
		write(1, &m[a], 1);
		c++;
	}
	return (c);
}
/**
* _cases_num - print a number
*@arguments: arguments given
*Return: (int)
*/
int _cases_num(va_list arguments)
{
	int num, i = 1, count = 0;
	unsigned int n;
	char c;

	num = va_arg(arguments, int);

	if (num < 0)
	{
		c = '-';
		count = count + write(1, &c, 1);
		n = -num;
	}
	else
		n = num;

	while (n / i > 9)
		i *= 10;

	while (i != 0)
	{
		c = n / i + '0';
		count = count + write(1, &c, 1);
		n = n % i;
		i = i / 10;
	}
	return (count);
}
