/**
 * File              : vc_strcmp.h
 * Author            : Mihail Urmanschi
 * Date              : 2019-02-17 13:28
 */
#ifndef UNTITLED1_VC_STRCMP_H
#define UNTITLED1_VC_STRCMP_H

#include "vc_strlen.h"
#include "vc_helper.h"

int vc_strcmp(const char *s1, const char *s2)
{
    int s1_len = vc_strlen(s1);
    int s2_len = vc_strlen(s2);
    if (s1_len != s2_len)
    {
        return FALSE;
    }
    for (int i = 0; i < s1_len; ++i)
    {
        if (s1[i] != s2[i])
        {
            return FALSE;
        }
    }
    return TRUE;
}

#endif //UNTITLED1_VC_STRCMP_H
