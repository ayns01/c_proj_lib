/**
 * File              : vc_isdigit.h
 * Author            : Mihail Urmanschi
 * Date              : 2019-02-17 13:29
 */
#ifndef UNTITLED1_VC_ISDIGIT_H
#define UNTITLED1_VC_ISDIGIT_H

#define TRUE  1
#define FALSE  0


int vc_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return TRUE;
    return FALSE;
}

#endif //UNTITLED1_VC_ISDIGIT_H
