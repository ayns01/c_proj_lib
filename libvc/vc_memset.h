/**
 * File              : vc_memset.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:26
 */
#ifndef UNTITLED1_VC_MEMSET_H
#define UNTITLED1_VC_MEMSET_H

#include <string.h>

/**
 *
 *  void *memset(void *s, int c, size_t n);
DESCRIPTION         top
       The memset() function fills the first n bytes of the memory area
       pointed to by s with the constant byte c.
RETURN VALUE         top
       The memset() function returns a pointer to the memory area s.

 */

void *vc_memset(void *s, int c, size_t n)
{
//    for (int i = 0; i < n; ++i)
//    {
//        s[i] = (char) c;
//    }
    return s;
}


#endif //UNTITLED1_VC_MEMSET_H
