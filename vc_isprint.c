/**
 * File              : vc_isprint.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:29
 */
#ifndef UNTITLED1_VC_ISPRINT_H
#define UNTITLED1_VC_ISPRINT_H

#include "vc_isprint.h"

int vc_isprint(int c)
{
    return c >= 32 && c <= 255;
}

#endif //UNTITLED1_VC_ISPRINT_H
