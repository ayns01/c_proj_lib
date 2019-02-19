/**
 * File              : vc_strsub.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:34
 */
#ifndef UNTITLED1_VC_STRSUB_H
#define UNTITLED1_VC_STRSUB_H

/**
 *
 * NAME
strsub - substitute first occurence of pattern with another string

SYNOPSIS
#include <publib.h>
char *strsub(char *str, const char *pat, const char *sub);
DESCRIPTION
strsub finds the first occurence of the pattern pat in the string str (using a method similar to strstr(3), i.e., no regular expressions), and replaces it with sub. If pat does not occur in str, no substitution is made.

Of course, if sub is an empty string, the pattern is deleted from the string.

RETURN VALUE
strsub returns a pointer to the first character after the substitution, or NULL if no substitution was made.

EXAMPLE
To substitute up to two occurences of "foo" with "bar" in a line, one might do the following.

p = strsub(line, "foo", "bar");
if (p != NULL)
	strsub(line, "foo", "bar");
 *
 * **/

char *vc_strsub(char *str, const char *pat, const char *sub)
{
    return "\0";
}


#endif //UNTITLED1_VC_STRSUB_H
