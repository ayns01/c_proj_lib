/**
 * File              : vc_strnstr.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:28
 */
#ifndef UNTITLED1_VC_STRNSTR_H
#define UNTITLED1_VC_STRNSTR_H

#include "vc_strlen.h"
#include "vc_strncmp.h"
#include "vc_strnstr.h"

char *vc_strnstr(char *str, char *to_find, int len)
{
    int i;

    i = 0;
    if (to_find == NULL || vc_strlen(to_find) == 0)
        return (str);
    if (vc_strlen(to_find) > len)
        return (NULL);
    while (i < len)
    {
        if (vc_strncmp(&str[i], to_find, vc_strlen(to_find)) == 0)
        {
            if (i + vc_strlen(to_find) > len)
                return (NULL);
            return (&str[i]);
        }
        i++;
    }
    return (NULL);
}

#endif //UNTITLED1_VC_STRNSTR_H
