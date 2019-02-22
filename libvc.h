/**
 * File              : libvc.h
 * Author            : Mihail Urmanschi
 * Date              : 2019-02-22 14:52
 */
#ifndef UNTITLED1_LIBVC_H
#define UNTITLED1_LIBVC_H

#include "string.h"

int vc_atoi(const char *str);
void vc_bzero(void *s, int n);
int vc_isalnum(char c);
int vc_isalpha(char c);
int vc_isascii(int c);
int vc_isdigit(char c);
int vc_isprint(int c);
char *vc_itoa(int n);
void *vc_memalloc(size_t size);
void *vc_memccpy(void *dest, const void *src, int c, size_t n);
void *vc_memchr(const void *str, int c, unsigned int n);
int vc_memcmp(const void *str1, const void *str2, unsigned int n) ;
void vc_memcpy(void * dest, const void * src, unsigned int n);
void vc_memdel(void **ap);
char *vc_memmove(char *dst, const char *src, int len);
void *vc_memset(void *s, int c, size_t n);
void vc_putchar(char c);
void vc_putendl(char *str);
void vc_putnbr(int n);
void vc_puts(char* str);
char *vc_strcat(char *dest, char *src);
char *vc_strchr(const char *s, int c);
void vc_strclr(char *s);
int vc_strcmp(const char *s1, const char *s2);
char *vc_strcpy(char *dest, char *src);
void vc_strdel(char **as);
char *vc_strdup(char *str);
void vc_striter(char *s, void (*f)(char *));
char *vc_strjoin(char const *s1, char const *s2);
unsigned int vc_strlcat(char *dest, char *src, unsigned int size);
int vc_strlen(const char *str);
char *vc_strmap(char const *s, char (*f)(char));
char *vc_strncat(char *dest, char *src, int n);
int vc_strncmp(char *s1, char *s2, unsigned int n);
char *vc_strncpy(char *dest, char *src, unsigned int n);
char vc_toupper(char c);
char vc_tolower(char c);
char *vc_strtrim(char *s);
char *vc_strsub(char const *s, size_t start, size_t len);
char *vc_strstr(char *str, char *to_find);
char **vc_strsplit(char *src, char charset);
char *vc_strrchr(const char *s, int c);
char *vc_strnstr(char *str, char *to_find, size_t len);
char *vc_strnew(size_t size);

#endif //UNTITLED1_LIBVC_H
