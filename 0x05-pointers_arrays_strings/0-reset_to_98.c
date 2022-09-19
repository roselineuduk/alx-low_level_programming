mkdir 0x05-pointers_arrays_strings

cd 0x05-pointers_arrays_strings

echo pointers arrays and strings > README.md

add the _putchar.c

main.h

#ifndef MAIN_H

#define MAIN_H



#include <stdio.h>



int _putchar(char c);

void reset_to_98(int *n);

void swap_int(int *a, int *b);

int _strlen(char *s);

void _puts(char *str);

void print_rev(char *s);

void rev_string(char *s);

void puts2(char *str);

void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);

int _atoi(char *s);



#endif /* MAIN_H */
