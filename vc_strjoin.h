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

char *vc_strjoin(char const *s1, char const *s2);

#endif //UNTITLED1_VC_STRJOIN_H
