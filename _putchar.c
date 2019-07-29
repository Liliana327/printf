#include <unistd.h>
/**
* _putchar - standard output character
* @c: The character that is printed.
* Return: 1 if met.
*/
	int _putchar(char c)
	{
	return (write(1, &c, 1));
	}
