/**
 * File              : vc_strjoin.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:34
 */
#ifndef UNTITLED1_VC_STRJOIN_H
#define UNTITLED1_VC_STRJOIN_H

#include "vc_strlen.h"
#include <stdlib.h>

/**
 *
 * Prototype char *vc_strjoin(char const *s1, char const *s2);
    Description
    Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’, result of the
    concatenation of s1 and s2. If the allocation fails the function returns NULL.
    Param # 1 The prefix string
    Param # 2 The suffix string
    Return The “fresh” string result of the concatenation of the 2 strings.
    libc malloc(3)
 */

#include "vc_strjoin.h"

char *vc_strjoin(char const *s1, char const *s2)
{
    int s1_len = vc_strlen(s1);
    int s2_len = vc_strlen(s2);
    int i;
    char *res = (char *) malloc((s1_len + s2_len + 1) * sizeof(char));
    for (i = 0; i < s1_len; ++i)
    {
        res[i] = s1[i];
    }
    i = 0;
    for (int j = s1_len; j < s1_len + s2_len; ++j)
    {
        res[j] = s2[i++];
    }
    res[s1_len + s2_len + 1] = '\0';
    return res;
}

#endif //UNTITLED1_VC_STRJOIN_H
