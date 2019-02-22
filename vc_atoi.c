/**
 * File              : vc_atoi.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:29
 */
#ifndef UNTITLED1_VC_ATOI_H
#define UNTITLED1_VC_ATOI_H

#include "vc_strlen.h"
#include "vc_atoi.h"

int vc_atoi(const char *str)
{
    int result = 0, is_negative = 0, index = 0;
    int size = vc_strlen(str);
    if (str[0] == '-')
    {
        is_negative = 1;
        index = 1;
    }
    for (; index < size; index++)
    {
        result += str[index] - '0';
        if (index < size - 1)
        {
            result *= 10;
        }
    }
    if (is_negative)
    {
        result *= -1;
    }
    return result;
}

#endif //UNTITLED1_VC_ATOI_H
