#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print_func - struct for print functions
 * @struct_args: conversion specifier
 * @ptr: pointer to the print functions
 * Desc: this struct stores pointers to the print functions
 */

typedef struct print_func
{
	char *struct_args;
	int (*ptr)(va_list, char *, unsigned int);
} print_f;

int _printf(const char *format, ...);
int (*func)(va_list, char *, unsigned int);
int int_conversion(va_list args, char *str, unsigned int n);
unsigned int handle_buffer(char *str, char b, unsigned int n);
int print_buffer(char *str, unsigned int numbuffer);
int get_function(const char *s, int ind);
int get_function(const char *s, int ind);
int print_string(va_list args, char *str, unsigned int n);
int print_perc(va_list a __attribute__((unused)), char *str, unsigned int i);

#endif
