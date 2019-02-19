/**
 * File              : vc_isascii.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:29
 */
#ifndef UNTITLED1_VC_ISASCII_H
#define UNTITLED1_VC_ISASCII_H

#include "vc_helper.h"

/** checks whether c is a 7-bit unsigned char value that fits into the ASCII character set. **/
int vc_isascii(int c)
{
    if(sizeof(c) == 7){

    }
        return TRUE;
    return FALSE;
}

#endif //UNTITLED1_VC_ISASCII_H
