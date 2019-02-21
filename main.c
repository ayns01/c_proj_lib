#include <stdio.h>
#include "libvc/vc_strlen.h"
#include "libvc/vc_atoi.h"
#include "libvc/vc_itoa.h"
#include "libvc/vc_putendl.h"
#include "libvc/vc_putchar.h"
#include "libvc/vc_putnbr.h"
#include "libvc/vc_isalpha.h"
#include "libvc/vc_strcmp.h"
#include "libvc/vc_tolower.h"
#include "libvc/vc_toupper.h"
#include "libvc/vc_strtrim.h"
#include "libvc/vc_strsub.h"
#include "libvc/vc_strstr.h"
#include "libvc/vc_strnstr.h"
#include "libvc/vc_strcat.h"
#include "libvc/vc_strcpy.h"
#include "libvc/vc_strclr.h"
#include "libvc/vc_strchr.h"
#include "libvc/vc_strsplit.h"
#include "libvc/vc_strncmp.h"
#include "libvc/vc_isalnum.h"
#include "libvc/vc_isascii.h"
#include "libvc/vc_strjoin.h"
#include "libvc/vc_striter.h"
#include "libvc/vc_memcpy.h"
#include "libvc/vc_memcmp.h"
#include "libvc/vc_memchr.h"
#include "libvc/vc_strnew.h"
#include "libvc/vc_puts.h"
#include "libvc/vc_strmap.h"
#include "libvc/vc_strdup.h"
#include "libvc/vc_strrchr.h"
#include "libvc/vc_isprint.h"
#include "libvc/vc_memset.h"
#include "libvc/vc_bzero.h"
#include "libvc/vc_strncpy.h"
#include "libvc/vc_strncat.h"
#include "libvc/vc_strlcat.h"
#include "libvc/vc_memdel.h"
#include "libvc/vc_memcmp.h"
#include "libvc/vc_strdel.h"
#include "libvc/vc_memccpy.h"
#include "libvc/vc_bzero.h"
#include "libvc/vc_memmove.h"

#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"

static void print_init(char *fun_name)
{
    printf("%s ============ testing %s ============\n\n", KGRN, fun_name);
}

static void print_end()
{
    printf("\n ================================================\n\n");
}

static void test_result(int res)
{
    if (res)
    {
        printf("%s test is passed\n", KGRN);
    } else
    {
        printf("%s test is NOT passed\n", KRED);

    }
}


static void test_vc_atoi()
{
    print_init((char *) __func__);
    int n = 123;
    int test_n = vc_atoi("123\0");
    test_result(n == test_n);

    int n_2 = 23;
    int test_n_2 = vc_atoi("123\0");
    test_result(n_2 != test_n_2);

    int n_3 = -23;
    int test_n_3 = vc_atoi("-23\0");
    test_result(n_3 == test_n_3);

    int n_4 = -123;
    int test_n_4 = vc_atoi("-23\0");
    test_result(n_4 != test_n_4);

    int n_5 = -990909;
    int test_n_5 = vc_atoi("-990909\0");
    test_result(n_5 == test_n_5);

    test_result(-103 == vc_atoi("-103\0"));

    print_end();
};

void test_vc_isdigit()
{
    print_init((char *) __func__);
    test_result(vc_isdigit('0') == TRUE);
    test_result(vc_isdigit('1') == TRUE);
    test_result(vc_isdigit('2') == TRUE);
    test_result(vc_isdigit('7') == TRUE);
    test_result(vc_isdigit('8') == TRUE);
    test_result(vc_isdigit('9') == TRUE);
    test_result(vc_isdigit('A') == FALSE);
    test_result(vc_isdigit('a') == FALSE);
    test_result(vc_isdigit('Z') == FALSE);
    test_result(vc_isdigit('z') == FALSE);
    print_end();
}

void test_vc_isalpha()
{
    print_init((char *) __func__);
    test_result(vc_isalpha('Z') == TRUE);
    test_result(vc_isalpha('R') == TRUE);
    test_result(vc_isalpha('A') == TRUE);
    test_result(vc_isalpha('a') == TRUE);
    test_result(vc_isalpha('r') == TRUE);
    test_result(vc_isalpha('z') == TRUE);
    test_result(vc_isalpha('0') == FALSE);
    test_result(vc_isalpha('9') == FALSE);
    test_result(vc_isalpha('^') == FALSE);
    print_end();
}

void test_vc_itoa()
{
    print_init((char *) __func__);
    test_result(vc_strcmp(vc_itoa(123), "123\0") == TRUE);
    test_result(vc_strcmp(vc_itoa(1), "1\0") == TRUE);
    test_result(vc_strcmp(vc_itoa(-123), "-123\0") == TRUE);
    test_result(vc_strcmp(vc_itoa(-1), "-1\0") == TRUE);
    test_result(vc_strcmp(vc_itoa(123), "1423\0") == FALSE);
    test_result(vc_strcmp(vc_itoa(-123), "123\0") == FALSE);
    test_result(vc_strcmp(vc_itoa(123), "3\0") == FALSE);
    test_result(vc_strcmp(vc_itoa(3), "9\0") == FALSE);
    print_end();
}

void test_vc_strcmp()
{
    print_init((char *) __func__);
    test_result(vc_strcmp("qwe\0", "qwe\0") == TRUE);
    test_result(vc_strcmp("qw e\0", "qw e\0") == TRUE);
    test_result(vc_strcmp("q\0", "q\0") == TRUE);
    test_result(vc_strcmp("q123qwe123\0", "q123qwe123\0") == TRUE);
    test_result(vc_strcmp("q123qwe123\0", "qwe\0") == FALSE);
    test_result(vc_strcmp("a\0", "b\0") == FALSE);
    test_result(vc_strcmp("asdf\0", "bsdb\0") == FALSE);
    print_end();
}

void test_vc_strncmp()
{
    print_init("test_vc_strncmp\0");
    test_result(vc_strncmp("qwe\0", "qwe\0", 1) == 0);
    test_result(vc_strncmp("qw e\0", "qw e\0", 2) == 0);
    test_result(vc_strncmp("q\0", "q\0", 1) == 0);
    test_result(vc_strncmp("q123qwe123\0", "q123qwe123\0", 5) == 0);
    test_result(vc_strncmp("q123qwe123\0", "qwe\0", 2) == -70);
    test_result(vc_strncmp("a\0", "b\0", 1) == -1);
    test_result(vc_strncmp("asdf\0", "bsdb\0", 3) == -1);
    print_end();
}


void test_vc_tolower()
{
    print_init((char *) __func__);
    test_result(vc_tolower('A') == 'a');
    test_result(vc_tolower('Z') == 'z');
    test_result(vc_tolower('R') == 'r');
    test_result(vc_tolower('r') == 'r');
    test_result(vc_tolower('a') == 'a');
    test_result(vc_tolower('a') != 'b');
    test_result(vc_tolower('T') != 'b');
    test_result(vc_tolower('c') != 'C');
    print_end();
}

void test_vc_toupper()
{
    print_init((char *) __func__);
    test_result(vc_toupper('a') == 'A');
    test_result(vc_toupper('z') == 'Z');
    test_result(vc_toupper('r') == 'R');
    test_result(vc_toupper('R') == 'R');
    test_result(vc_toupper('f') == 'F');
    test_result(vc_toupper('a') != 'B');
    test_result(vc_toupper('T') != 'B');
    test_result(vc_toupper('C') != 'c');
    print_end();
}

void test_vc_strtrim()
{
    print_init((char *) __func__);
    char s[] = " asd \0";
    test_result(vc_strcmp(vc_strtrim(" asd"), "asd") == TRUE);
    test_result(vc_strcmp(vc_strtrim(" asd "), "asd") == TRUE);
    test_result(vc_strcmp(vc_strtrim(s), "asd\0") == TRUE);
    test_result(vc_strcmp(vc_strtrim("asd "), "asd") == TRUE);
    test_result(vc_strcmp(vc_strtrim("  asd  "), "asd") == TRUE);
    test_result(vc_strcmp(vc_strtrim("  a s d  "), "a s d") == TRUE);
    print_end();
}

void test_vc_strsub()
{
    print_init((char *) __func__);
    char *source = "I like pasta";
    test_result(vc_strcmp(vc_strsub(source, 0, 2), "I ") == TRUE);
    test_result(vc_strcmp(vc_strsub(source, 6, 6), " pasta") == TRUE);
    test_result((int) vc_strsub(source, 99999, 0) != TRUE);
    print_end();
}

void test_vc_strstr()
{
    print_init((char *) __func__);
    test_result(vc_strcmp(vc_strstr("asd", "asd"), "asd") == TRUE);

    // check for equal pointer
    char *str = "asd";
    int p = &str[0];
    int p_t = &vc_strstr(str, "asd")[0];
    test_result(p == p_t);

    // check for equal pointer
    char *str_2 = "my sentence";
    int p_2 = &str_2[3];
    int p_t_2 = &vc_strstr(str_2, "sentence")[0];
    test_result(p_2 == p_t_2);

    test_result(vc_strcmp(vc_strstr("my sentence", "sentence"), "sentence") == TRUE);

    // In case not found
    test_result(vc_strstr("my sentence", "your sentence") == 0);

    print_end();
}

void test_vc_strnstr()
{
    print_init("test_vc_strnstr\0");
    test_result(vc_strcmp(vc_strnstr("asd", "asd", 5), "asd") == TRUE);

    // check for equal pointer
    char *str = "asd";
    int p = &str[0];
    int p_t = &vc_strnstr(str, "asd", 4)[0];
    test_result(p == p_t);

    test_result(vc_strcmp(vc_strnstr("my sentence", "sentence", 12), "sentence") == TRUE);

    test_result(vc_strcmp(vc_strnstr("Foo Bar", "Bar", 8), "Bar") == TRUE);

    print_end();
}

void test_vc_strlen()
{
    print_init((char *) __func__);
    test_result(vc_strlen("12345\0") == 5);
    test_result(vc_strlen("1234 5\0") == 6);
    test_result(vc_strlen("asd asd\0") == 7);
    test_result(vc_strlen("\0") == 0);
    test_result(vc_strlen("asd asd\0") != 0);
    print_end();
}

void test_vc_strcat()
{
    print_init((char *) __func__);
    char str[] = "I am \0";
    test_result(vc_strcmp(vc_strcat(str, "batman\0"), "I am batman\0"));
    print_end();
}

void test_vc_strcpy()
{
    print_init((char *) __func__);
    print_end();
}

void test_vc_strchr()
{
    print_init((char *) __func__);
    test_result(vc_strcmp(vc_strchr("asd z asd\0", 'z'), "z asd\0"));
    test_result(vc_strcmp(vc_strchr("ad z asd\0", 'z'), "z asd\0"));
    test_result(vc_strcmp(vc_strchr("d z asd\0", 'z'), "z asd\0"));
    test_result(vc_strcmp(vc_strchr(" z asd\0", 'z'), "z asd\0"));
    test_result(vc_strcmp(vc_strchr("z asd\0", 'z'), "z asd\0"));
    test_result(vc_strcmp(vc_strchr("z asa sd\0", 'z'), "z asd\0") == FALSE);
    print_end();
}

void test_vc_putendl()
{
    print_init((char *) __func__);
    vc_putendl("text on the first line\0");
    vc_putendl("this text should be on the next line of the first line\0");
    print_end();
}

void test_vc_strclr()
{
    print_init((char *) __func__);
    char str1[] = "1234\0";
    vc_strclr(str1);
    test_result(str1[0] == '\0');
    test_result(str1[1] == '\0');
    test_result(str1[2] == '\0');
    test_result(str1[3] == '\0');
    test_result(str1[4] == '\0');
    print_end();
}

void test_vc_strjoin()
{
    print_init((char *) __func__);
    test_result(vc_strcmp(vc_strjoin("I am \0", "Batman\0"), "I am Batman\0"));
    test_result(vc_strcmp(vc_strjoin("I\0", " am\0"), "I am\0"));
    test_result(vc_strcmp(vc_strjoin(" am \0", " I \0"), " am  I \0"));
    print_end();
}

void test_vc_putchar()
{
    print_init((char *) __func__);
    vc_putchar('t');
    vc_putchar('e');
    vc_putchar('s');
    vc_putchar('t');
    vc_putchar(' ');
    vc_putchar('w');
    vc_putchar('o');
    vc_putchar('r');
    vc_putchar('k');
    vc_putchar('s');
    print_end();
}

void test_vc_striter()
{
    print_init("test_vc_striter\0");
    char *str = "Hello Kitty\0";
    vc_striter(str, iter_char);
    print_end();
}

void test_vc_memcpy()
{
    print_init("test_vc_memcpy\0");
    char dest[100];
    char *src = "Pink Panther";
    vc_memcpy(dest, src, 6);
    test_result(vc_strcmp(dest, "Pink P\0"));

    int isrc[] = {1, 2, 3, 4, 5};
    int n = sizeof(isrc) / sizeof(isrc[0]);
    int idest[n];
    int i;
    vc_memcpy(idest, isrc, sizeof(isrc));
    test_result(idest[0] == 1);
    test_result(idest[1] == 2);
    test_result(idest[2] == 3);
    test_result(idest[3] == 4);
    test_result(idest[4] == 5);
    print_end();
}

void test_vc_strsplit()
{
    print_init("test_vc_strsplit\0");
    char src[] = "HELLOTHEWORLD";
    char charset = 'L';
    char **src2 = vc_strsplit(src, charset);
    vc_print_words(src2);
    print_end();
}


void test_vc_strnew()
{
    print_init((char *) __func__);
    char *a = vc_strnew(2);
    a[0] = 'A';
    a[1] = 'B';
    a[2] = 'C';
    a[3] = 'D';
    a[4] = 'E';
    printf("%s", a);
    //Ask About this functionality
    printf("%s", a);
    //Ask About this functionality
    print_end();
}

void test_vc_puts()
{
    print_init((char *) __func__);
    vc_puts("YAAAAY");
    vc_puts("WOW");
    print_end();
}

void test_vc_strmap()
{
    print_init((char *) __func__);

    const char *originalStr = "Hello!";
    // -> "Ifmmp""
    char *newStrings = vc_strmap(originalStr, applyCharToChar);
    for (int i = 0; originalStr[i] != '\0'; ++i)
    {
        test_result(--(newStrings[i]) == originalStr[i]);
        test_result(&newStrings[i] != &originalStr[i]);
    }

    print_end();
}

void test_vc_strdup()
{
    print_init((char *) __func__);

    char source[] = "HelloWorld!";
    char *duplicated = vc_strdup(source);

    for (int i = 0; source[i] != '\0'; ++i)
    {
        test_result(duplicated[i] == source[i]);
        test_result(&duplicated[i] != &source[i]);
    }
    print_end();
}

void test_vc_memcmp()
{
    print_init("test_vc_memcmp\0");
    char *str1 = "Dog Cat Tiger";
    char *str2 = "Dog Ant Rabbit";
    test_result(vc_memcmp(str1, str2, 10) == 1);
    char *str3 = "Dog Cat Tigeo";
    char *str4 = "Dog Cat Tiger";
    test_result(vc_memcmp(str3, str4, 10) == 0);
    char *str5 = "Butter";
    char *str6 = "Buzz";
    test_result(vc_memcmp(str5, str6, 10) == -1);
    print_end();
}

void test_vc_memchr()
{
    print_init("test_vc_memchr\0");
    const char *str = "abcdef\0";
    const char ch = 'c';
    test_result((vc_strcmp(vc_memchr(str, ch, vc_strlen(str)), "cdef")));
    print_end();
}

void test_vc_memset()
{
    print_init((char *) __func__);
    char str[50];

    vc_strcpy(str, "This is string library function");
    vc_puts(str);

    vc_memset(str, '$', 7);
    vc_puts(str);

    print_end();
}

void test_vc_memccpy()
{
    print_init((char *) __func__);

    char *sr = "123\0";
    char *des = malloc(4 * sizeof(char));
    vc_memccpy(des, sr, '2', 4);
    test_result(des[0] == sr[0]);
    test_result(des[1] == sr[1]);
    test_result(des[2] == sr[2]);
    test_result(&des[0] != &sr[0]);
    test_result(&des[1] != &sr[1]);
    test_result(&des[2] != &sr[2]);
    print_end();
}

void test_vc_isprint()
{
    print_init((char *) __func__);

    for (int i = 0; i < 32; ++i)
    {
        test_result(vc_isprint(i) == FALSE);
    }
    for (int j = 32; j < 250; ++j)
    {
        test_result(vc_isprint(j) == TRUE);

    }

    print_end();
}

void test_vc_strrchr()
{
    print_init((char *) __func__);

    test_result(vc_strcmp(vc_strrchr("asd", 'a'), "asd") == TRUE);

    // check for equal pointer
    char *str = "asd";
    int p = &str[1];
    int p_t = &vc_strrchr(str, 's')[0];
    int p_t_n = &vc_strrchr(str, 's')[1];
    test_result(p == p_t);
    test_result(p != p_t_n);

    // check for equal pointer
    char *str_2 = "01234567839";
    int p_2 = &str_2[9];
    int p_2_n = &str_2[3];
    int p_t_2 = &vc_strrchr(str_2, '3')[0];
    test_result(p_2 == p_t_2);
    test_result(p_2_n != p_t_2);

    print_end();
}

void test_vc_isascii()
{

    print_init((char *) __func__);
    for (int i = 0; i <= 127; ++i)
    {
        test_result(vc_isascii(i) == TRUE);
    }
    for (int j = 128; j < 255; ++j)
    {
        test_result(vc_isascii(j) == FALSE);
    }
    for (int k = -50; k < 0; ++k)
    {
        test_result(vc_isascii(k) == FALSE);
    }

    print_end();

}

void test_vc_isalnum()
{
    print_init((char *) __func__);
    for (int i = '0'; i <= '9'; ++i)
    {
        test_result(vc_isalnum(i));
    }
    for (int j = 'a'; j <= 'z'; ++j)
    {
        test_result(vc_isalnum(j));
    }
    for (int j = 'A'; j <= 'Z'; ++j)
    {
        test_result(vc_isalnum(j));
    }

    print_end();
}


void test_vc_putnbr()
{
    print_init((char *) __func__);
    vc_putnbr(123);
    putchar('\n');
    vc_putnbr(321);
    putchar('\n');
    vc_putnbr(1);
    putchar('\n');
    vc_putnbr(1412341234);
    print_end();
}


void test_vc_memdel()
{
    print_init((char *) __func__);
    char **str = (char **) malloc(2 * sizeof(char *));
    vc_memdel(str);
    test_result(*str == NULL);
    print_end();
}


void test_vc_strdel()
{
    print_init((char *) __func__);
    char **str = (char **) malloc(2 * sizeof(char *));
    vc_strdel(str);
    test_result(*str == NULL);
    print_end();
}

void test_vc_memalloc()
{
    print_init((char *) __func__);
    void *ptr1 = vc_memalloc(0);
    test_result(ptr1 == NULL);
    void *ptr2 = vc_memalloc(2);
    test_result(ptr2 != NULL);
    print_end();
}


void test_vc_bzero()
{
    print_init((char *) __func__);

    char str[] = "Hello!\0";
    vc_bzero(str, 3);
    test_result(str[0] == 0);
    test_result(str[1] == 0);
    test_result(str[2] == 0);
    test_result(str[3] != 0);
    print_end();
}

void test_vc_memmove()
{
    print_init((char *) __func__);

    char *src1 = "0123456";

    char dst1[] = "aaaaaaa";
    vc_memmove(dst1, src1, 3);
    test_result(vc_strcmp(dst1, "012aaaa"));

    char dst2[] = "a";
    vc_memmove(dst2, src1, 99);
    test_result(vc_strcmp(dst2, "0123456"));

    char *src2 = "";
    char dst3[] = "a";
    vc_memmove(dst3, src2, 99);
    test_result(vc_strcmp(dst3, "a"));
    print_end();
}


void test_vc_strncpy()
{
    print_init((char *) __func__);

    char st[50];
    test_result(st[0] != 'r');
    vc_strncpy(st, "This is another thing\0", 3);
    test_result(st[0] == 'T');
    test_result(st[4] == '\0');

    print_end();
}

void test_vc_strncat()
{
    print_init((char *) __func__);
    char str[] = "I am \0";
    test_result(vc_strcmp(vc_strncat(str, "batman\0", 3), "I am bat\0"));
    print_end();
}

void test_vc_strlcat()
{
    print_init((char *) __func__);
    char *str = "I am \0";
    char *des = "I am \0";
    int rez = vc_strlcat(str, des, 3);
    test_result(rez == 8);
    print_end();
}

int main()
{
    test_vc_memset();
    test_vc_bzero();
    test_vc_memcpy();
    test_vc_memccpy();
    test_vc_memmove();
    test_vc_memchr();
    test_vc_memcmp();
    test_vc_strlen();
    test_vc_strdup();
    test_vc_strcpy();
    test_vc_strncpy();
    test_vc_strcat();
    test_vc_strncat();
    test_vc_strlcat();
    test_vc_strchr();
    test_vc_strrchr();
    test_vc_strstr();
    test_vc_strnstr();
    test_vc_strcmp();
    test_vc_strncmp();
    test_vc_atoi();
    test_vc_isalpha();
    test_vc_isdigit();
    test_vc_isalnum();
    test_vc_isascii();
    test_vc_isprint();
    test_vc_toupper();
    test_vc_tolower();
    test_vc_puts();

    test_vc_memalloc();
    test_vc_memdel();
    test_vc_strnew();
    test_vc_strdel();
    test_vc_strclr();
    test_vc_striter();
    test_vc_strmap();
    test_vc_strsub();
    test_vc_strjoin();
    test_vc_strtrim();
    test_vc_strsplit();
    test_vc_itoa();
    test_vc_putnbr();
    test_vc_putchar();
    test_vc_putendl();

    return 0;
}