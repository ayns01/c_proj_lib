/**
 * File              : vc_strcpy.h
 * Author            : Mihail Urmanschi
 * Date              : 2019-02-17 13:27
 */
#ifndef UNTITLED1_VC_STRCPY_H
#define UNTITLED1_VC_STRCPY_H

#include "vc_strlen.h"

char *vc_strcpy(char *dest, char *src)
{
    int len_src = vc_strlen(src);
    int len_dest = vc_strlen(dest);
    if(len_dest < len_src) return dest;
//    int len_max = len_src > len_dest ? len_src : len_dest;
    for (int i = 0; i < len_src; ++i)
    {
        dest[i] = src[i];
    }
    if (len_dest > len_src)
    {
        for (int i = len_src; i < len_dest; ++i)
        {
            dest[i] = '\0';
        }
    }
    return dest;
}

#endif //UNTITLED1_VC_STRCPY_H
