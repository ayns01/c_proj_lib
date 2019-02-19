/**
 * File              : vc_strstr.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:28
 */
#ifndef UNTITLED1_VC_STRSTR_H
#define UNTITLED1_VC_STRSTR_H

#include "vc_strlen.h"

char *vc_strstr(char *str, char *to_find)
{
    int haystack_len = vc_strlen(str);
    int needle_len = vc_strlen(to_find);
    if (needle_len == 0) return str;
    for (int i = 0; i < haystack_len; ++i)
    {
        if (str[i] == to_find[0])
        {
            int is_found = 0;
            for (int j = 0; j < needle_len; ++j)
            {
                if (str[i + j] != to_find[j]) break;
                if (j == needle_len - 1) is_found = 1;
            }
            if (is_found)
            {
                return &str[i];
            }
        }
    }
    return "NULL";
}

#endif //UNTITLED1_VC_STRSTR_H
