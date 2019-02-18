/**
 * File              : vc_putnbr.h
 * Author            : Mihail Urmanschi
 * Date              : 2019-02-17 13:34
 */
#ifndef UNTITLED1_VC_PUTNBR_H
#define UNTITLED1_VC_PUTNBR_H

#include "vc_putchar.h"

void vc_putnbr(int n)
{
    if (n < 10)
        vc_putchar('0' + n);
    if (n > 9)
    {
        int f, s;
        f = n / 10;
        s = n % 10;
        vc_putnbr(f);
        vc_putnbr(s);
    }
}

#endif //UNTITLED1_VC_PUTNBR_H
