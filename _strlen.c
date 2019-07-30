#include "holberton.h"
/**
 * _str_len - function that counts how much the chain measures
 * @a: pointer of a estring
 * Return: (0)
*/
int _strlen(char *a)
{
	int m = 0;

	while (a[m] != 0)
	{
		m++;
	}
	return (m);
}
