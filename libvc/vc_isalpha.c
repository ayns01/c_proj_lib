/**
 * File              : vc_isalpha.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:29
 */
#ifndef UNTITLED1_VC_ISALPHA_H
#define UNTITLED1_VC_ISALPHA_H


#include "vc_helper.h"
#include "vc_isalpha.h"

int vc_isalpha(char c)
{
    if (vc_isupper(c) || vc_islower(c))
        return TRUE;
    return FALSE;
}


#endif //UNTITLED1_VC_ISALPHA_H
