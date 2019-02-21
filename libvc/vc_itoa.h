/**
 * File              : vc_itoa.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:34
 */
#ifndef UNTITLED1_VC_ITOA_H
#define UNTITLED1_VC_ITOA_H

#include "vc_isdigit.h"
#include <stdlib.h>

int vc_abs(int n)
{
    if (n < 0) return n * -1;
    return n;
}

int vc_intlen(int n)
{
    int res = 0;
    while (n > 0)
    {
        n /= 10;
        res++;
    }
    return res;
}

char vc_charval(int num)
{
    if (num >= 0 && num <= 9)
        return (char) (num + '0');
    else
        return (char) (num - 10 + 'A');
}

char *vc_itoa(int n)
{
    int is_negative = 0;
    if (n < 0) {
        is_negative = 1;
        n = vc_abs(n);
    }
    int size = vc_intlen(n);
    if (is_negative) size++;
    char *res = (char *) malloc(size * sizeof(char));
    res[size--] = '\0';
    while (size >= 0)
    {
        int val = n % 10;
        res[size--] = vc_charval(val);
        n = n / 10;
    }
    if (is_negative) res[0] = '-';
    return res;
}

#endif //UNTITLED1_VC_ITOA_H
