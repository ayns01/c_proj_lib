/**
 * File              : vc_strncmp.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:29
 */
#ifndef UNTITLED1_VC_STRNCMP_H
#define UNTITLED1_VC_STRNCMP_H

int vc_strncmp(char *s1, char *s2, unsigned int n)
{
    if (!n)
        return 0;
    while ((*s1 && (*s1 == *s2)) && --n)
    {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

#endif //UNTITLED1_VC_STRNCMP_H
