/**
 * File              : vc_bzero.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:26
 */
#ifndef UNTITLED1_VC_BZERO_H
#define UNTITLED1_VC_BZERO_H

#include "vc_strlen.h"
#include <string.h>

void vc_bzero(void *s, int n)
{
    if (n == 0) return;
    char *ptr = (char*)s;
    for (int i = 0; i < n; ++i)
    {
        ptr[i] = '\0';
    }

}

#endif //UNTITLED1_VC_BZERO_H
