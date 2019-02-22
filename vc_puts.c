/**
 * File              : vc_puts.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:30
 */
#ifndef UNTITLED1_VC_PUTS_H
#define UNTITLED1_VC_PUTS_H


#include <zconf.h>
#include "vc_strlen.h"

#include "vc_puts.h"

//puts(vc_putstr)
//puts() writes the string s and a trailing newline to stdout.
void vc_puts(char* str)
{
    int str_len = vc_strlen(str);
    char *new_line = "\n\0";
    write(1, str, str_len);
    write(1, new_line, 1);

}

#endif //UNTITLED1_VC_PUTS_H
