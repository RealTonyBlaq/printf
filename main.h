#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int _strlen(char *str);
int _puts_string(char *str);
int _putchar(char c);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int ev_print_func(const char *s, int index);
int null_checker(char *str);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int print_buf(char *buf, unsigned int nbuf);
int _puts_int(int n);

#endif /* _MAIN_H */
