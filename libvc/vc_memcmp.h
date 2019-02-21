/**
 * File              : vc_memcmp.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:27
 */
#ifndef UNTITLED1_VC_MEMCMP_H
#define UNTITLED1_VC_MEMCMP_H
#include <stdio.h>
#include <stdlib.h>


static int compare_strings(char *str1,char *str2, int i,int size){
    if (str1[i] == '\0' || i == size){
        return 1;
    }else if (str2[i] == '\0'|| i == size){
        return 0;
    }
    else if (str1[i] > str2[i]){
        return 0;
    }else if (str1[i] < str2[i]){
        return 1;
    }else{
        return compare_strings(str1,str2,++i,size);
    }
}

int vc_memcmp(const void *s1, const void *s2, size_t n){

    char *p1 = (unsigned char *) s1;
    char *p2 = (unsigned char *) s2;


    compare_strings(p1,p2,0,n);

}

#endif //UNTITLED1_VC_MEMCMP_H
