/**
 * File              : vc_strlen.h
 * Author            : Mihail Urmanschi
 * Date              : 2019-02-17 13:27
 */
#ifndef UNTITLED1_VC_STRLEN_H
#define UNTITLED1_VC_STRLEN_H

int vc_strlen(const char *str)
{
    int size = 0;
    while (str[size] != '\0')
    {
        size++;
    }
    return size;
}

#endif //UNTITLED1_VC_STRLEN_H
