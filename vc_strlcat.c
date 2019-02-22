/**
 * File              : vc_strlcat.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:28
 */
#ifndef UNTITLED1_VC_STRLCAT_H
#define UNTITLED1_VC_STRLCAT_H
#include "vc_strlen.h"
#include "vc_strlcat.h"

unsigned int vc_strlcat(char *dest, char *src,  int size){
    int dest_size = vc_strlen(dest);
    int src_size = vc_strlen(src);
    int ideal_size = dest_size + src_size;
    if (size > src_size){
        int j = 0;
        int i = 0;
        for (i = dest_size; i <size-1; i++){
            dest[i] = src[j];
            j++;
        }
        dest[i] = '\0';
    }else if (ideal_size > size){
        return src_size+size;
    }
    return ideal_size;
}

#endif //UNTITLED1_VC_STRLCAT_H
