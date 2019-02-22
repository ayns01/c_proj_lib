/**
 * File              : vc_strcpy.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:27
 */
#ifndef UNTITLED1_VC_STRCPY_H
#define UNTITLED1_VC_STRCPY_H

#include "vc_strcpy.h"

char *vc_strcpy(char *dest, char *src) {
        for(int i=0; src[i] != '\0'; i++) {
            dest[i] = src[i];
        }
        return dest;
}

#endif //UNTITLED1_VC_STRCPY_H
