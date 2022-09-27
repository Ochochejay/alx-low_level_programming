#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int _strspn(char *s, char *accept);
void print_chessboard(char (*a)[8]);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
void set_string(char **s, char *to);

#endif /* MAIN_H */
