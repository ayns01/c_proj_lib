cmake_minimum_required(VERSION 3.13)
project(untitled1 C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled1 main.c libvc/vc_memset.h libvc/vc_bzero.h libvc/vc_memcpy.h libvc/vc_memccpy.h libvc/vc_memmove.h libvc/vc_memchr.h libvc/vc_memcmp.h libvc/vc_strlen.h libvc/vc_strdup.h libvc/vc_strcpy.h libvc/vc_strncpy.h libvc/vc_strcat.h libvc/vc_strncat.h libvc/vc_strlcat.h libvc/vc_strchr.h libvc/vc_strrchr.h libvc/vc_strstr.h libvc/vc_strnstr.h libvc/vc_strcmp.h libvc/vc_strncmp.h libvc/vc_atoi.h libvc/vc_isalpha.h libvc/vc_isdigit.h libvc/vc_isalnum.h libvc/vc_isascii.h libvc/vc_isprint.h libvc/vc_toupper.h libvc/vc_tolower.h libvc/vc_puts.h libvc/vc_memalloc.h libvc/vc_memdel.h libvc/vc_strnew.h libvc/vc_strdel.h libvc/vc_strclr.h libvc/vc_striter.h libvc/vc_strmap.h libvc/vc_strsub.h libvc/vc_strjoin.h libvc/vc_strtrim.h libvc/vc_strsplit.h libvc/vc_itoa.h libvc/vc_putnbr.h libvc/vc_putchar.h libvc/vc_putendl.h libvc/vc_helper.h)