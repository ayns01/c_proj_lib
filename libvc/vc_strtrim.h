/**
 * File              : vc_strtrim.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:34
 */
#ifndef UNTITLED1_VC_STRTRIM_H
#define UNTITLED1_VC_STRTRIM_H

/** strtrim removes all whitespace characters from the beginning and the end of a string. As whitespace is counted everything for which isspace(3) returns true.
 **/

char *vc_strtrim(char *s){
    int s_size = vc_strlen(s);
    int i = 0;
    int j = s_size -1;
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'){
        i++;
    }
    while(s[j] == ' ' || s[j] == '\n' || s[j] == '\t'){
        j--;
    }
    char *new_str = (char *) malloc(((s_size - i) -j) * sizeof(char));
    int new_str_i = 0;
    while(i <= j){
        new_str[new_str_i] = s[i];
        new_str_i++;
        i++;
    }

    new_str[new_str_i] = '\0';
    return new_str;
}
#endif //UNTITLED1_VC_STRTRIM_H
