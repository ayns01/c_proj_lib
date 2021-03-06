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


void *vc_memccpy(void *dest, const void *src, int c, size_t n);

#endif //UNTITLED1_VC_MEMCCPY_H
