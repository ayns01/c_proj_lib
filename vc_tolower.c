/**
 * File              : vc_tolower.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:30
 */
#ifndef UNTITLED1_VC_TOLOWER_H
#define UNTITLED1_VC_TOLOWER_H

#include "vc_helper.h"
#include "vc_tolower.h"

char vc_tolower(char c)
{
    if (vc_isupper(c))
    {
        return c - ('A' - 'a');
    }
    return c;
}

#endif //UNTITLED1_VC_TOLOWER_H
