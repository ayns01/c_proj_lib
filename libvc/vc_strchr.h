/**
 * File              : vc_strchr.h
 * Author            : Mihail Urmanschi
 * Date              : 2019-02-17 13:28
 */
#ifndef UNTITLED1_VC_STRCHR_H
#define UNTITLED1_VC_STRCHR_H

#include "vc_strlen.h"

char *vc_strchr(const char *s, int c)
{
    int s_len = vc_strlen(s);
    for (int i = 0; i < s_len; ++i)
    {
        if (s[i] == c) return &s[i];
    }
    return &s;
}

#endif //UNTITLED1_VC_STRCHR_H
