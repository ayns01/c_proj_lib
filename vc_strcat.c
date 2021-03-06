/**
 * File              : vc_strcat.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:27
 */
#ifndef UNTITLED1_VC_STRCAT_H
#define UNTITLED1_VC_STRCAT_H

#include <string.h>
#include "vc_strlen.h"

/**
 * char *strcat(char *dest, const char *src);

char *strncat(char *dest, const char *src, size_t n);
Description
The strcat() function appends the src string to the dest string, overwriting the terminating null byte ('\0') at the end of dest, and then adds a terminating null byte. The strings may not overlap, and the dest string must have enough space for the result. If dest is not large enough, program behavior is unpredictable; buffer overruns are a favorite avenue for attacking secure programs.

The strncat() function is similar, except that

*
it will use at most n bytes from src; and

*

src does not need to be null-terminated if it contains n or more bytes.

As with strcat(), the resulting string in dest is always null-terminated.
If src contains n or more bytes, strncat() writes n+1 bytes to dest (n from src plus the terminating null byte). Therefore, the size of dest must be at least strlen(dest)+n+1.
**/

#include "vc_strcat.h"


char *vc_strcat(char *dest, char *src){

    int i = 0;

    while (dest[i] != '\0'){
        i++;
    }
    int j = 0;
    while (src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return dest;
}

#endif //UNTITLED1_VC_STRCAT_H
