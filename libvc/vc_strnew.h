/**
 * File              : vc_strnew.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:33
 */
#ifndef UNTITLED1_VC_STRNEW_H
#define UNTITLED1_VC_STRNEW_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *vc_strnew(size_t size) {

    char *new_string = (char *) malloc(size * sizeof(char));
    if( new_string == NULL ){
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        new_string[i] ='\0';
    }


    return new_string;

}
#endif //UNTITLED1_VC_STRNEW_H
