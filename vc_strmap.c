/**
 * File              : vc_strmap.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:34
 */
#ifndef UNTITLED1_VC_STRMAP_H
#define UNTITLED1_VC_STRMAP_H

#include "vc_strmap.h"
#include <stdlib.h>

char *vc_strmap(char const *s, char (*f)(char))
{
    int length = 0;
    for (int i = 0; s[i] != '\0'; ++i)
    {
        ++length;
    }

    char *result = (char *) malloc(length * sizeof(char *));
    result[length + 1] = '\0';

    for (int i = 0; s[i] != '\0'; ++i)
    {
        result[i] = f(s[i]);
    }

    return result;
}


#endif //UNTITLED1_VC_STRMAP_H
