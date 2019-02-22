/**
 * File              : vc_strlen.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:27
 */
#ifndef UNTITLED1_VC_STRLEN_H
#define UNTITLED1_VC_STRLEN_H

#include <string.h>
#include "vc_strlen.h"


int vc_strlen(const char *str)
{
    size_t size = 0;
    while (str[size] != '\0')
    {
        size++;
    }
    return (int)size;
}

#endif //UNTITLED1_VC_STRLEN_H
