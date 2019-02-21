/**
 * File              : vc_strncpy.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:27
 */
#ifndef UNTITLED1_VC_STRNCPY_H
#define UNTITLED1_VC_STRNCPY_H

char *vc_strncpy(char *dest, char *src, unsigned int n) {
    for (int i = 0; src[i] != '\0'; i++) {
        if (i >= n) {
            dest[i] = '\0';
        } else {
            dest[i] = src[i];
        };
    }
    return dest;
}

#endif //UNTITLED1_VC_STRNCPY_H
