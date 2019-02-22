NAME = libvc.a
FILES = vc_atoi.c vc_bzero.c vc_isalnum.c vc_isalpha.c vc_isascii.c vc_isdigit.c vc_isprint.c vc_itoa.c vc_memalloc.c vc_memccpy.c vc_memchr.c vc_memcmp.c vc_memcpy.c vc_memdel.c vc_memmove.c vc_memset.c vc_putchar.c vc_putendl.c vc_putnbr.c vc_puts.c vc_strcat.c vc_strchr.c vc_strclr.c vc_strcmp.c vc_strcpy.c vc_strdel.c vc_strdup.c vc_striter.c vc_strjoin.c vc_strlcat.c vc_strlen.c vc_strmap.c vc_strncat.c vc_strncmp.c vc_strncpy.c vc_strnew.c vc_strnstr.c vc_strrchr.c vc_strsplit.c vc_strstr.c vc_strsub.c vc_strtrim.c vc_tolower.c vc_toupper.c
OBJECTS = vc_atoi.o vc_bzero.o vc_isalnum.o vc_isalpha.o vc_isascii.o vc_isdigit.o vc_isprint.o vc_itoa.o vc_memalloc.o vc_memccpy.o vc_memchr.o vc_memcmp.o vc_memcpy.o vc_memdel.o vc_memmove.o vc_memset.o vc_putchar.o vc_putendl.o vc_putnbr.o vc_puts.o vc_strcat.o vc_strchr.o vc_strclr.o vc_strcmp.o vc_strcpy.o vc_strdel.o vc_strdup.o vc_striter.o vc_strjoin.o vc_strlcat.o vc_strlen.o vc_strmap.o vc_strncat.o vc_strncmp.o vc_strncpy.o vc_strnew.o vc_strnstr.o vc_strrchr.o vc_strsplit.o vc_strstr.o vc_strsub.o vc_strtrim.o vc_tolower.o vc_toupper.o
HEADERS = libvc.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(FILES) -I $(HEADERS)
	ar -cvq libvc.a $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(NAME)

re: fclean all