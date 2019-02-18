/**
 * File              : vc_isalpha.h
 * Author            : Mihail Urmanschi
 * Date              : 2019-02-17 13:29
 */
#ifndef UNTITLED1_VC_ISALPHA_H
#define UNTITLED1_VC_ISALPHA_H

int vc_isupper(char c)
{
    return c > 'A' && c < 'Z';
}

int vc_islower(char c)
{
    return c > 'a' && c < 'z';
}

int vc_isalpha(char c)
{
    return vc_isupper(c) || vc_islower(c);
}


#endif //UNTITLED1_VC_ISALPHA_H
