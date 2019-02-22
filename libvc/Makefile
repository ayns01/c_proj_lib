NAME = libvc.a
FILES = vc_atoi.h vc_bzero.h vc_isalnum.h vc_isalpha.h vc_isascii.h vc_isdigit.h vc_isprint.h vc_itoa.h vc_memalloc.h vc_memccpy.h vc_memchr.h vc_memcmp.h vc_memcpy.h vc_memdel.h vc_memmove.h vc_memset.h vc_putchar.h vc_putendl.h vc_putnbr.h vc_puts.h vc_strcat.h vc_strchr.h vc_strclr.h vc_strcmp.h vc_strcpy.h vc_strdel.h vc_strdup.h vc_striter.h vc_strjoin.h vc_strlcat.h vc_strlen.h vc_strmap.h vc_strncat.h vc_strncmp.h vc_strncpy.h vc_strnew.h vc_strnstr.h vc_strrchr.h vc_strsplit.h vc_strstr.h vc_strsub.h vc_strtrim.h vc_tolower.h vc_toupper.h
OBJECTS = vc_atoi.o vc_bzero.o vc_isalnum.o vc_isalpha.o vc_isascii.o vc_isdigit.o vc_isprint.o vc_itoa.o vc_memalloc.o vc_memccpy.o vc_memchr.o vc_memcmp.o vc_memcpy.o vc_memdel.o vc_memmove.o vc_memset.o vc_putchar.o vc_putendl.o vc_putnbr.o vc_puts.o vc_strcat.o vc_strchr.o vc_strclr.o vc_strcmp.o vc_strcpy.o vc_strdel.o vc_strdup.o vc_striter.o vc_strjoin.o vc_strlcat.o vc_strlen.o vc_strmap.o vc_strncat.o vc_strncmp.o vc_strncpy.o vc_strnew.o vc_strnstr.o vc_strrchr.o vc_strsplit.o vc_strstr.o vc_strsub.o vc_strtrim.o vc_tolower.o vc_toupper.o
HEADERS = libvc.h

all: $(NAME)

$(NAME):
    gcc -c *.c
    ar -cvq libvc.a *.o

clean:
    rm -f $(OBJECTS)

fclean:
    rm -f *.o

re: fclean all