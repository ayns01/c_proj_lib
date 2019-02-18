/**
 * File              : vc_bzero.h
 * Author            : Mihail Urmanschi
 * Date              : 2019-02-17 13:26
 */
#ifndef UNTITLED1_VC_BZERO_H
#define UNTITLED1_VC_BZERO_H

#include "vc_strlen.h"

void vc_bzero(char *s, int n)
{
    if (n == 0) return;
    for (int i = 0; i < n; ++i)
    {
        s[i] = '\0';
    }

}

#endif //UNTITLED1_VC_BZERO_H
