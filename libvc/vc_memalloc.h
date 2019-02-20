/**
 * File              : vc_memalloc.h
 * Author            : Mihail, Masa, Ayana, Gui
 * Date              : 2019-02-17 13:33
 */
#ifndef UNTITLED1_VC_MEMALLOC_H
#define UNTITLED1_VC_MEMALLOC_H


void *vc_memalloc(size_t size)
{
    return malloc(size * sizeof(size));
}

#endif //UNTITLED1_VC_MEMALLOC_H
