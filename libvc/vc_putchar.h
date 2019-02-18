/**
 * File              : vc_putchar.h
 * Author            : Mihail Urmanschi
 * Date              : 2019-02-17 13:34
 */
#ifndef UNTITLED1_VC_PUTCHAR_H
#define UNTITLED1_VC_PUTCHAR_H

#include <zconf.h>
#include "vc_memalloc.h"

void vc_putchar(char c)
{
//    char *ch = (char*)malloc(2 * sizeof(char));
    char *ch = (char*)vc_memalloc(2);
    ch[0] = c;
    ch[1] = '\0';
//    char* ch = "a\0";
    write(1, ch, 1);
}


#endif //UNTITLED1_VC_PUTCHAR_H
