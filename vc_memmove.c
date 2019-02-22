/**
 * File              : vc_memmove.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:27
 */
#ifndef UNTITLED1_VC_MEMMOVE_H
#define UNTITLED1_VC_MEMMOVE_H

#include "vc_memmove.h"

char *vc_memmove(char *dst, const char *src, int len) {

    for (int i = 0; i < len && src[i] != '\0'; ++i) {
        dst[i] = src[i];
    }

    return dst;
}

#endif //UNTITLED1_VC_MEMMOVE_H
