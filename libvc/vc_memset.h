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
DESCRIPTION
     The memset() function writes len bytes of value c (converted to an
     unsigned char) to the string b.
RETURN VALUE         top
       The memset() function returns a pointer to the memory area s.

 */

void *vc_memset(void *s, int c, size_t n);

#endif //UNTITLED1_VC_MEMSET_H
