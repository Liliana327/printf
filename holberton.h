#ifndef _HOLBERTON_H_
#define _HOLBERTON_H
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int _cases_num(va_list arguments);
int _cases_print(char *m);
int _cases_lis(va_list arguments);
int _strlen(char *a);
int _printf(const char *format, ...);
int _putchar(char c);
int _str_ptf(char *a);
int case_lst(const char *format, va_list arguments);
#endif /** _HOLBERTON_H_ */

