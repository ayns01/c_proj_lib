/**
 * File              : vc_putendl.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:34
 */
#ifndef UNTITLED1_VC_PUTENDL_H
#define UNTITLED1_VC_PUTENDL_H

#include <zconf.h>

/**
 *  vc_putendl
    Prototype void vc_putendl(char const *s);
    Description Outputs the string s to the standard output followed by '\n'
    Param # 1 The string to output
    Return None.
    libc write(2)
 * @param str
 */

void vc_putendl(char *str);

#endif //UNTITLED1_VC_PUTENDL_H
