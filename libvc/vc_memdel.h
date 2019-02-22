/**
 * File              : vc_memdel.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:33
 */
#ifndef UNTITLED1_VC_MEMDEL_H
#define UNTITLED1_VC_MEMDEL_H

#include <string.h>
#include <stdlib.h>
/**
 *
 * Prototype void vc_memdel(void **ap
 * Description
    Takes as a parameter the address of a memory area that needs to be freed with free(3), then
    puts the pointer to NULL
    Param # 1 A pointer’s address that needs its memory freed and set to NULL.
    Return None
    libc free(3)
 */


void vc_memdel(void **ap);

#endif //UNTITLED1_VC_MEMDEL_H
