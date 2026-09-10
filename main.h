#ifndef MAIN_H
#define MAIN_H

/* Header files*/
#include <stdarg.h>
#include <stdlib.h>

/* Function declarations */
int _putchar(char c);
int _printf(const char *s, ...);
int handle_f_specifier(char specifier, va_list args);
int print_string(char *s);
int print_int(int n);
int print_number(int n);

#endif
