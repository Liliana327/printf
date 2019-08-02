#include "holberton.h"
/**
* _cases_num_bin - print a unsigned int as bin                                                                                                                              * @arguments: argument given                                                                                                                                            * Return: counter as the amount of arguments prints                                                                                                                     */
* @arguments: agument given
* Return: counter as the amount of arguments printed
*/
int _cases_num_bin(va_list arguments)
{
        int i, j, ct = 0; /*aux variables and ct as counter */
        unsigned int n;
        char s[10] ; /* maximum of binary large */

        n = va_arg(arguments, unsigned int);


        for (i = 0; n > 0; i++)
        {
                s[i] = n % 2 + '0';
                n = n / 2;
        }

        for (j = i - 1 ; j >= 0; j--)
        {
        ct = ct + _putchar(s[j]);
        }

        return (ct);
}
