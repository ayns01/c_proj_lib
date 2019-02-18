#include <stdio.h>
#include "libvc/vc_strlen.h"
#include "libvc/vc_atoi.h"
#include "libvc/vc_itoa.h"
#include "libvc/vc_putendl.h"
#include "libvc/vc_putchar.h"
#include "libvc/vc_putnbr.h"

#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define TRUE  1

static void print_init(char *fun_name)
{
    printf("%s ============ testing %s ============\n\n", KGRN,fun_name);
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
    print_init("test_vc_atoi\0");
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
    print_init("test_vc_isdigit\0");
    test_result(vc_isdigit('0') == TRUE);
    test_result(vc_isdigit('1') == TRUE);
    test_result(vc_isdigit('2') == TRUE);
    test_result(vc_isdigit('7') == TRUE);
    test_result(vc_isdigit('8') == TRUE);
    test_result(vc_isdigit('9') == TRUE);
    print_end();
}


int main()
{
    test_vc_atoi();
    test_vc_isdigit();

    return 0;
}