#include <stdio.h>
#include "libvc/vc_strlen.h"
#include "libvc/vc_atoi.h"
#include "libvc/vc_itoa.h"
#include "libvc/vc_putendl.h"
#include "libvc/vc_putchar.h"
#include "libvc/vc_putnbr.h"

#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"


static int test_result(int res, char *func_name)
{
    if (res)
    {
        printf("%s test is passes for %s\n", KGRN, func_name);
    } else
    {
        printf("%s test is NOT passes for %s\n", KRED, func_name);

    }
}

int test_vc_atoi()
{
    int n = 123;
    int test_n = vc_atoi("123\0");
    test_result(n == test_n, "test_vc_atoi\0");

    int n_2 = 23;
    int test_n_2 = vc_atoi("123\0");
    test_result(n_2 != test_n_2, "test_vc_atoi\0");

    int n_3 = -23;
    int test_n_3 = vc_atoi("-23\0");
    test_result(n_3 == test_n_3, "test_vc_atoi\0");

    int n_4 = -123;
    int test_n_4 = vc_atoi("-23\0");
    test_result(n_4 != test_n_4, "test_vc_atoi\0");

    int n_5 = -990909;
    int test_n_5 = vc_atoi("-990909\0");
    test_result(n_5 == test_n_5, "test_vc_atoi\0");

    test_result(-103 == vc_atoi("-103\0"), "test_vc_atoi\0");
}

int main()
{
    test_vc_atoi();

    return 0;
}