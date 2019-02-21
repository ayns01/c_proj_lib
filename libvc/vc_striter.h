/**
 * File              : vc_striter.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:33
 */
#ifndef UNTITLED1_VC_STRITER_H
#define UNTITLED1_VC_STRITER_H

#include <string.h>

static void iter_char(char *str)
{
    printf("%s\n", str);
}

void vc_striter(char *s, void (*f)(char *))
{
    if (s != NULL && f != NULL)
    {
        while (*s) {
            (*f)(s);
            s++;
        }
    }
}

#endif //UNTITLED1_VC_STRITER_H
