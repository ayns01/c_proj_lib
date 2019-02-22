/**
 * File              : vc_helper.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 18:03
 */
#ifndef UNTITLED1_VC_HELPER_H
#define UNTITLED1_VC_HELPER_H

#define TRUE  1
#define FALSE  0

int vc_isupper(char c);

int vc_islower(char c);

int vc_isspace(char c);

void vc_putstr(char *str);

void vc_print_words(char **words);

int exists(char str, char charset);

int count_strings(char *str, char charset);

int count_characters(char *src, int start, char charset);

#endif //UNTITLED1_VC_HELPER_H
