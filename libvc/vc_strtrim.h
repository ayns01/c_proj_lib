/**
 * File              : vc_strtrim.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:34
 */
#ifndef UNTITLED1_VC_STRTRIM_H
#define UNTITLED1_VC_STRTRIM_H

/** strtrim removes all whitespace characters from the beginning and the end of a string. As whitespace is counted everything for which isspace(3) returns true.
 **/

char *vc_strtrim(char *s)
{
    int str_len = vc_strlen(s);
    int str_first_space = 0;
    int str_last_space = 0;
    while (vc_isspace(s[str_first_space])) str_first_space++;
    while (vc_isspace(s[str_len]))
    {
        str_len--;
        str_last_space = str_len;
    }
//
    s[str_last_space] = '\0';


//    str_len = str_last_space - str_first_space;
//    char *res = (char*) malloc(str_len * sizeof(char));
//    for (int i = 0; i < str_len; ++i)
//    {
//        res[i] = s[str_first_space + i];
//    }

    return &s[str_first_space];
}

#endif //UNTITLED1_VC_STRTRIM_H
