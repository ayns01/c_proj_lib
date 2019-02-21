/**
 * File              : vc_memcmp.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:27
 */
#ifndef UNTITLED1_VC_MEMCMP_H
#define UNTITLED1_VC_MEMCMP_H
#include <stdio.h>
#include <stdlib.h>

/**
 * vc_memcmp
 *
 * @param str1
 * @param str2
 * @param n
 *
 * compares the first n bytes of memory area str1 and memory area str2
 */

int vc_memcmp(const void *str1, const void *str2, unsigned int n) {

    const unsigned char *p1 = str1, *p2 = str2;
    while(n--)
        if( *p1 != *p2 )
            return *p1 < *p2 ? -1 : 1;
        else
            p1++,p2++;
    return 0;
}

#endif //UNTITLED1_VC_MEMCMP_H
