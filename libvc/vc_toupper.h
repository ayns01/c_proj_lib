/**
 * File              : vc_toupper.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:30
 */
#ifndef UNTITLED1_VC_TOUPPER_H
#define UNTITLED1_VC_TOUPPER_H


#include "vc_helper.h"

char vc_toupper(char c)
{
    if (vc_islower(c))
    {
        return c + ('A' - 'a');
    }
    return c;
}

#endif //UNTITLED1_VC_TOUPPER_H
