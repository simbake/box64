/*********************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.2.2) *
 *********************************************************************/
#ifndef __wrappedlibxcbresTYPES32_H_
#define __wrappedlibxcbresTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef my_xcb_XXX_iterator_t (*ZFp_t)(void*);
typedef my_xcb_cookie_t (*zFnup_t)(void*, uint32_t, void*);

#define SUPER() ADDED_FUNCTIONS()

#endif // __wrappedlibxcbresTYPES32_H_
