/**
 * File              : vc_memcpy.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:26
 */
#ifndef UNTITLED1_VC_MEMCPY_H
#define UNTITLED1_VC_MEMCPY_H

/**
 * vc_memcpy
 *
 * @param dest
 * @param src
 * @param n
 *
 * copies n characters from memory area src to memory area dest
 */

void vc_memcpy(void * dest, const void * src, unsigned int n) {
    char *csrc = (char *)src;
    char *cdest = (char *)dest;

    for (int i=0; i<n; i++)
        cdest[i] = csrc[i];
}

#endif //UNTITLED1_VC_MEMCPY_H
