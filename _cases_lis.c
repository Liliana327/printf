#include "holberton.h"
/**
* _cases_lis - check cases
* @arguments: arguments given
* Return: amount of characters printed
*/
int _cases_lis(va_list arguments)
{
	int a = 0, ct = 0; /* aux variables and ct as counter */
	char *str;

	str = va_arg(arguments, char*);

	if (str == NULL)
		str  = "(null)";

	for (a = 0; str[a] != '\0'; a++)
	{
		write(1, &str[a], 1);
		ct++;
	}
	return (ct);
}

