/**
 * File              : vc_putchar.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:34
 */
#ifndef UNTITLED1_VC_PUTCHAR_H
#define UNTITLED1_VC_PUTCHAR_H

#include <zconf.h>
#include "vc_memalloc.h"

/**
 *  vc_putchar
    Prototype void vc_putchar(char c);
    Description Outputs the character c to the standard output.
    Param # 1 The character to output
    Return None.
    libc write(2)
 * @param c
 */

void vc_putchar(char c)
{
    write(0, &c, 1);
}


#endif //UNTITLED1_VC_PUTCHAR_H
