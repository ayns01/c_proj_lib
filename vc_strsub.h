/**
 * File              : vc_strsub.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:34
 */
#ifndef UNTITLED1_VC_STRSUB_H
#define UNTITLED1_VC_STRSUB_H

#include "vc_strstr.h"

/**
 * vc_strsub
 *
 * @param s
 * @param start
 * @param len
 * @return
 *
 * Allocates (with malloc(3)) and returns a “fresh” substring from the string given as argument.
 * The substring begins at start and is of size len. If start and len aren’t refering to a valid
 * substring, the behavior is undefined. If the allocation fails, the function returns NULL
 */
char *vc_strsub(char const *s, size_t start, size_t len);


#endif //UNTITLED1_VC_STRSUB_H
