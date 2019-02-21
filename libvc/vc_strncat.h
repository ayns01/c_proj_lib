/**
 * File              : vc_strncat.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:28
 */
#ifndef UNTITLED1_VC_STRNCAT_H
#define UNTITLED1_VC_STRNCAT_H

char *vc_strncat(char *dest, char *src, int n){

    int i = 0;

    while (dest[i] != '\0'){
        i++;
    }
    for(int j = 0; j < n; j++){
        dest[i] = src[j];
        i++;
    }
    dest[i] = '\0';

    return dest;
}

#endif //UNTITLED1_VC_STRNCAT_H
