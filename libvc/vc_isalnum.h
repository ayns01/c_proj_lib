/**
 * File              : vc_isalnum.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:29
 */
#ifndef UNTITLED1_VC_ISALNUM_H
#define UNTITLED1_VC_ISALNUM_H

#include "vc_isdigit.h"
#include "vc_isalpha.h"

int vc_isalnum(char c)
{
    return vc_isdigit(c) || vc_isalpha(c);
}

#endif //UNTITLED1_VC_ISALNUM_H
