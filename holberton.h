#ifndef _HOLBERTON_H_
#define _HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int _cases_num(va_list arguments);
int _cases_lis(va_list arguments);
int _printf(const char *format, ...);
int _putchar(char c);
int case_lst(va_list arguments, const char *format);
#endif /** _HOLBERTON_H_ */

