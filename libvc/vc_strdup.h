/**
 * File              : vc_strdup.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:27
 */
#ifndef UNTITLED1_VC_STRDUP_H
#define UNTITLED1_VC_STRDUP_H

#include <stdlib.h>

char *vc_strdup(char *str) {

    int length = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        ++length;
    }


    char *result = malloc(length * sizeof(char));
    for (int i = 0; str[i] != '\0'; ++i) {
        result[i] = str[i];
    }

    result[length] = '\0';

    return result;
}

#endif //UNTITLED1_VC_STRDUP_H
