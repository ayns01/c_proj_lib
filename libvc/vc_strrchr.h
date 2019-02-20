/**
 * File              : vc_strrchr.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:28
 */
#ifndef UNTITLED1_VC_STRRCHR_H
#define UNTITLED1_VC_STRRCHR_H

#include "vc_strlen.h"

/**
 * The strrchr() function returns a pointer to the last occurrence of the character c in the string s.
 * char *strrchr(const char *s, int c);
 */


char *vc_strrchr(const char *s, int c)
{
    int s_len = vc_strlen(s);
    char *ptr = &s[0];
    for (int i = 0; i < s_len; ++i)
    {
        if (s[i] == c)
        {
            ptr = &s[i];
        }
    }
    return ptr;
}


#endif //UNTITLED1_VC_STRRCHR_H
