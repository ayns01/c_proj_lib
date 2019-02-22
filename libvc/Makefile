NAME = libvc.a
OBJECTS = vc_atoi.o vc_bzero.o vc_isalnum.o vc_isalpha.o vc_isascii.o vc_isdigit.o vc_isprint.o vc_itoa.o vc_memalloc.o vc_memccpy.o vc_memchr.o vc_memcmp.o vc_memcpy.o vc_memdel.o vc_memmove.o vc_memset.o vc_putchar.o vc_putendl.o vc_putnbr.o vc_puts.o vc_strcat.o vc_strchr.o vc_strclr.o vc_strcmp.o vc_strcpy.o vc_strdel.o vc_strdup.o vc_striter.o vc_strjoin.o vc_strlcat.o vc_strlen.o vc_strmap.o vc_strncat.o vc_strncmp.o vc_strncpy.o vc_strnew.o vc_strnstr.o vc_strrchr.o vc_strsplit.o vc_strstr.o vc_strsub.o vc_strtrim.o vc_tolower.o vc_toupper.o

all: oclean $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra *.c
	ar -cvq libvc.a *.o

aclean:
	rm -f *.a

oclean: aclean
	rm -f *.o