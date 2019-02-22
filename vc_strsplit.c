/**
 * File              : vc_strsplit.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:34
 */
#ifndef UNTITLED1_VC_STRSPLIT_H
#define UNTITLED1_VC_STRSPLIT_H
#include <stdio.h>
#include <stdlib.h>
#include "vc_helper.h"
#define TRUE 1
#define FALSE 0

#include "vc_strsplit.h"

/**
 * The Function returns an Array of Strings that were seppared by spaces and non printable characters.
 * The last String is null, in a way to tell when is the end of the array.
 */

char **vc_strsplit(char *src, char charset){
    int dest_size = count_strings(src,charset);
    char **dest = (char **) malloc((dest_size + 1) * sizeof(char *));
    int dest_position = 0;
    int string_position = 0;
    int start_src = 0;
    int string_size = 0;

    while (src[start_src] != 0){

        if (exists(src[start_src],charset) == TRUE){
            start_src++;
            continue;
        }
        string_size = count_characters(src,start_src,charset);

        dest[dest_position] = (char *) malloc(string_size * sizeof(char));

        for(int j = start_src; j < string_size + start_src; j++){
            dest[dest_position][string_position] = src[j];
            string_position++;
        }
        dest[dest_position][string_position] = 0;
        string_position = 0;
        dest_position++;
        start_src = start_src + string_size;
    }

    dest[dest_size] = 0;
    
    return dest;
}

#endif //UNTITLED1_VC_STRSPLIT_H
