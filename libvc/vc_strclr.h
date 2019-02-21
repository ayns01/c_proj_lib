/**
 * File              : vc_strclr.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:33
 */
#ifndef UNTITLED1_VC_STRCLR_H
#define UNTITLED1_VC_STRCLR_H

#include "vc_strlen.h"

/**
 * vc_strclr
    Prototype void vc_strclr(char *s);
    Description Sets every character of the string to the value ’\0’.
    Param # 1 The string that needs to be cleared.
    Return None
    libc None
 * @return
 */

void vc_strclr(char *s)
{
    int s_len = vc_strlen(s);
    for (int i = 0; i < s_len; ++i)
    {
        s[i] = '\0';
    }

}

#endif //UNTITLED1_VC_STRCLR_H
