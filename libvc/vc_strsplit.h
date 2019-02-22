/**
 * File              : vc_strsplit.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:34
 */
#ifndef UNTITLED1_VC_STRSPLIT_H
#define UNTITLED1_VC_STRSPLIT_H
#include <stdio.h>
#include <stdlib.h>
#include "vc_helper.h"
#define TRUE 1
#define FALSE 0


/**
 * The Function returns an Array of Strings that were seppared by spaces and non printable characters.
 * The last String is null, in a way to tell when is the end of the array.
 */

char **vc_strsplit(char *src, char charset);

#endif //UNTITLED1_VC_STRSPLIT_H
