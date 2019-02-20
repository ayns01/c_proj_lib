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
#include "libvc/vc_strcat.h"
#include "libvc/vc_strcpy.h"
#include "libvc/vc_strclr.h"
#include "libvc/vc_strchr.h"
#include "libvc/vc_strncmp.h"
#include "libvc/vc_strmap.h"
#include "libvc/vc_strdup.h"

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
        printf("%s test is passes\n", KGRN);
    } else
    {
        printf("%s test is NOT passes\n", KRED);

    }
}


static void test_vc_atoi()
{
    print_init((char*)__func__);
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
    print_init((char*)__func__);
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

void test_vc_isupper()
{
    print_init((char*)__func__);
    test_result(vc_isupper('Z') == TRUE);
    test_result(vc_isupper('A') == TRUE);
    test_result(vc_isupper('P') == TRUE);
    test_result(vc_isupper('a') != TRUE);
    test_result(vc_isupper('r') != TRUE);
    print_end();
}

void test_vc_islower()
{
    print_init((char*)__func__);
    test_result(vc_islower('Z') != TRUE);
    test_result(vc_islower('R') != TRUE);
    test_result(vc_islower('A') != TRUE);
    test_result(vc_islower('a') == TRUE);
    test_result(vc_islower('r') == TRUE);
    test_result(vc_islower('z') == TRUE);
    test_result(vc_islower('$') == FALSE);
    test_result(vc_islower('7') == FALSE);
    test_result(vc_islower('0') == FALSE);
    test_result(vc_islower('9') == FALSE);
    test_result(vc_islower('&') == FALSE);
    print_end();
}

void test_vc_isalpha()
{
    print_init((char*)__func__);
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
    print_init((char*)__func__);
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
    print_init((char*)__func__);
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
    print_init((char*)__func__);
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
    print_init((char*)__func__);
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
    print_init((char*)__func__);
    char s[] = " asd \0";
    test_result(vc_strcmp(vc_strtrim(s), "asd\0") == TRUE);
//    test_result(vc_strcmp(vc_strtrim("asd "), "asd") == TRUE);
//    test_result(vc_strcmp(vc_strtrim(" asd"), "asd") == TRUE);
//    test_result(vc_strcmp(vc_strtrim(" asd "), "asd") == TRUE);
//    test_result(vc_strcmp(vc_strtrim("  asd  "), "asd") == TRUE);
//    test_result(vc_strcmp(vc_strtrim("  a s d  "), "a s d") == TRUE);
    print_end();
}

void test_vc_strsub()
{
    print_init((char*)__func__);
    test_result(vc_strcmp(vc_strsub("asd", "asd", "dsa"), "dsa") == TRUE);
    test_result(vc_strcmp(vc_strsub("I like pasta", "pasta", "meat"), "I like meat") == TRUE);
    test_result(vc_strcmp(vc_strsub("I like pasta", "like", "love"), "I love pasta") == TRUE);
    print_end();
}

void test_vc_strstr()
{
    print_init((char*)__func__);
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

void test_vc_strlen()
{
    print_init((char*)__func__);
    test_result(vc_strlen("12345\0") == 5);
    test_result(vc_strlen("1234 5\0") == 6);
    test_result(vc_strlen("asd asd\0") == 7);
    test_result(vc_strlen("\0") == 0);
    test_result(vc_strlen("asd asd\0") != 0);
    print_end();
}

void test_vc_strcat()
{
    print_init((char*)__func__);
    char *str = "I am \0";
    test_result(vc_strcmp(vc_strcat(str, "batman\0", vc_strlen("batman\0")), "I am batman\0"));
    print_end();
}

void test_vc_strcpy()
{
    print_init((char*)__func__);
    print_end();
}

void test_vc_strclr()
{
    print_init((char*)__func__);
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
    print_init("test_vc_putendl\0");
    vc_putendl("text on the first line\0");
    vc_putendl("this text should be on the next line of the first line\0");
    print_end();

}

void test_vc_strmap()
{

    print_init((char*)__func__);
    
    const char *originalStr = "Hello!";
    // -> "Ifmmp""
    char *newStrings = vc_strmap(originalStr, applyCharToChar);
    for (int i = 0; originalStr[i] != '\0'; ++i) {
        test_result(--(newStrings[i]) == originalStr[i]);
        test_result(&newStrings[i] != &originalStr[i]);
    }

    print_end();
}

void test_vc_strdup()
{
    print_init((char*)__func__);

    char source[] = "HelloWorld!";
    char *duplicated = vc_strdup(source);

    for (int i = 0; source[i] != '\0'; ++i) {
        test_result(duplicated[i] == source[i]);
        test_result(&duplicated[i] != &source[i]);
    }

    print_end();
}

int main()
{
    test_vc_isupper();
    test_vc_islower();
    test_vc_atoi();
    test_vc_isdigit();
    test_vc_isalpha();
    test_vc_strcmp();
    test_vc_strncmp();
    test_vc_itoa();
    test_vc_tolower();
    test_vc_toupper();
    test_vc_strtrim();
    test_vc_strsub();
    test_vc_strstr();
    test_vc_strlen();
    test_vc_strcat();
    test_vc_strcpy();
    test_vc_strclr();
    test_vc_putendl();
    test_vc_strmap();
    test_vc_strdup();

    return 0;
}