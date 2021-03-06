/**
 * File              : vc_strchr.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:28
 */
#ifndef UNTITLED1_VC_STRCHR_H
#define UNTITLED1_VC_STRCHR_H

#include "vc_strlen.h"
#include "vc_strchr.h"

char *vc_strchr( char *s, int c)
{
    int s_len = vc_strlen(s);
    for (int i = 0; i < s_len; ++i)
    {
        if (s[i] == c) return &s[i];
    }
    return s;
}

#endif //UNTITLED1_VC_STRCHR_H
