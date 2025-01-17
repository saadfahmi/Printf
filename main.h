#ifndef MAIN_H
#define MAIN_H
/**
 * File: main.h
 * Description: Header file containing all function prototypes and necessary
 *              includes for custom implementation of formatted output functions.
 *              These functions provide utilities for printing in various formats
 *              including strings, integers, hexadecimal, octal, and more.
 *
 * Includes:
 * - Standard libraries and macros for variadic arguments, I/O, memory management,
 *   and limits.
 */
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stddef.h>

int _putchar(char c);
int print_string(const char *str);
int print_int(int num);
int print_unsigned_int(unsigned int num);
int print_hexa(unsigned int num, int uppercase);
int print_binary(unsigned int num);
int print_octal(unsigned int num);
int print_S(const char *str);
int reversed(const char *str);
int _rot13(const char *str);
int print_addr(void *ptr);
int handle_custom_specifiers(const char *format, va_list args);
int handle_specifiers(const char *format, va_list args);
int handle_specifiers_2(const char *format, va_list args);
int handle_formats(const char *format, va_list args);
int _printf(const char *format, ...);

#endif
