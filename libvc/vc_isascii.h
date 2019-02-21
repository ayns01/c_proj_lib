/**
 * File              : vc_isascii.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:29
 */
#ifndef UNTITLED1_VC_ISASCII_H
#define UNTITLED1_VC_ISASCII_H

#include "vc_helper.h"

/**
 *
 * DESCRIPTION
     The isascii() function tests for an ASCII character, which is any character between 0 and octal
     0177 inclusive.
 * . **/
int vc_isascii(int c)
{
    if(c >= 0 && c <= 127){
        return TRUE;
    }
    return FALSE;
}

#endif //UNTITLED1_VC_ISASCII_H
