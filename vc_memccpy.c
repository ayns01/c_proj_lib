/**
 * File              : vc_memccpy.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:26
 */
#ifndef UNTITLED1_VC_MEMCCPY_H
#define UNTITLED1_VC_MEMCCPY_H

#include <string.h>

/**
 *        void *memccpy(void *dest, const void *src, int c, size_t n);

      The memccpy() function copies no more than n bytes from memory area
           src to memory area dest, stopping when the character c is found.

           If the memory areas overlap, the results are undefined.
    RETURN VALUE         top
           The memccpy() function returns a pointer to the next character in
           dest after c, or NULL if c was not found in the first n characters of
           src.
 */
#include "vc_memcpy.h"


void *vc_memccpy(void *dest, void *src, int c, int n)
{

    size_t *d = dest;
    size_t *s = src;

    for (int i = 0; i < n; ++i)
    {
        if (((int)s[i]) == c) return d;
        *d = *s;
        d++;
        s++;
    }
    return d;
}

#endif //UNTITLED1_VC_MEMCCPY_H
