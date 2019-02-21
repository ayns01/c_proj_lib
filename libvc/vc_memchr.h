/**
 * File              : vc_memchr.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:27
 */
#ifndef UNTITLED1_VC_MEMCHR_H
#define UNTITLED1_VC_MEMCHR_H

/**
 * vc_memchr
 *
 * @param str
 * @param c
 * @param n
 *
 * searches for the first occurrence of the character c
 * in the first n bytes of the string pointed to, by the argument str.
 */

void *vc_memchr(const void *str, int c, unsigned int n) {

    unsigned char *p = (unsigned char*)str;
    while(n--)
        if( *p != (unsigned char)c )
            p++;
        else
            return p;

}

#endif //UNTITLED1_VC_MEMCHR_H
