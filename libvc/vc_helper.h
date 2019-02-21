/**
 * File              : vc_helper.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 18:03
 */
#ifndef UNTITLED1_VC_HELPER_H
#define UNTITLED1_VC_HELPER_H

#define TRUE  1
#define FALSE  0

static int vc_isupper(char c)
{
    if (c >= 'A' && c <= 'Z')
        return TRUE;
    return FALSE;
}

static int vc_islower(char c)
{
    if (c >= 'a' && c <= 'z')
        return TRUE;
    return FALSE;
}

static int vc_isspace(char c)
{
    if(c == ' ')
        return TRUE;
    return FALSE;
}


static void vc_putstr(char *str) {

    int i = 0;
    while (str[i] != '\0') {
        putchar(str[i]);
        i++;
    }
}
static void vc_print_words(char **words){

    int i = 0;
    while(words[i] != '\0'){
        vc_putstr(words[i]);
        putchar('\n');
        i++;
    }
}

static int exists(char str,char charset){
    if (str == charset){
        return TRUE;
    }
    return FALSE;
}

static int count_strings(char *str,char charset){
    int count_strings = 0;
    int i =0;
    int boolean_space = TRUE;

    while(str[i] != '\0'){
        if (exists(str[i],charset) == TRUE){
            if(boolean_space == TRUE){
                count_strings++;
                boolean_space = FALSE;
            }
        }else{
            boolean_space = TRUE;
        }
        i++;
    }
    return ++count_strings;
}

static int count_characters(char *src,int start,char charset){
    int count =0;
    int i = start;
    while (src[i] != '\0'){
        if (exists(src[i],charset) == FALSE){
            count++;
        }else{
            break;
        }
        i++;
    }
    return count;
}

#endif //UNTITLED1_VC_HELPER_H
