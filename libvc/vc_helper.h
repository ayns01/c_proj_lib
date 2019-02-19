/**
 * File              : vc_helper.h
 * Author            : Mihail Urmanschi
 * Date              : 2019-02-17 18:03
 */
#ifndef UNTITLED1_VC_HELPER_H
#define UNTITLED1_VC_HELPER_H

#define TRUE  1
#define FALSE  0

int vc_isupper(char c)
{
    if (c >= 'A' && c <= 'Z')
        return TRUE;
    return FALSE;
}

int vc_islower(char c)
{
    if (c >= 'a' && c <= 'z')
        return TRUE;
    return FALSE;
}

int vc_isspace(char c)
{
    if(c == ' ')
        return TRUE;
    return FALSE;
}

#endif //UNTITLED1_VC_HELPER_H
