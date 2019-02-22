/**
 * File              : vc_strsub.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:34
 */
#ifndef UNTITLED1_VC_STRSUB_H
#define UNTITLED1_VC_STRSUB_H

#include "vc_strstr.h"
#include "vc_strsub.h"
#include "stdlib.h"

/**
 * vc_strsub
 *
 * @param s
 * @param start
 * @param len
 * @return
 *
 * Allocates (with malloc(3)) and returns a “fresh” substring from the string given as argument.
 * The substring begins at start and is of size len. If start and len aren’t refering to a valid
 * substring, the behavior is undefined. If the allocation fails, the function returns NULL
 */
char *vc_strsub(char const *s, int start, int len) {
    int actualSLength = vc_strlen(s);

    if (actualSLength < start || actualSLength < len) {
        return 0;
    }

    char *resultStr = (char *) malloc(len * sizeof(char));
    resultStr[len] = '\0';

    for (int i = (int) start, j = 0; j < len; ++i, ++j) {
        resultStr[j] = s[i];
    }

    return resultStr;
}


#endif //UNTITLED1_VC_STRSUB_H
