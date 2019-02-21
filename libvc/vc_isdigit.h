/**
 * File              : vc_isdigit.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:29
 */
#ifndef UNTITLED1_VC_ISDIGIT_H
#define UNTITLED1_VC_ISDIGIT_H


#include "vc_helper.h"

int vc_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return TRUE;
    return FALSE;
}

#endif //UNTITLED1_VC_ISDIGIT_H
