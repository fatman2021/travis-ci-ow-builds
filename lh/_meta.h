///////////////////////////////////////////////////////////////////////////
// FILE: _meta.h
//
// =========================================================================
//
//                          Open Watcom Project
//
// Copyright (c) 2004-2017 The Open Watcom Contributors. All Rights Reserved.
//
//    This file is automatically generated. Do not edit directly.
//
// =========================================================================
//
// Description: This header is an internal part of OWSTL. It provides the
//              template meta programming fuction helpers
///////////////////////////////////////////////////////////////////////////
#ifndef __META_H_INCLUDED
#define __META_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifndef __cplusplus
 #error This header file requires C++
#endif

namespace _ow {

/* ------------------------------------------------------------------
 * calc log2 of an integer rounded down
 */
template< int n >
struct log2_floor{
    static const int value = log2_floor<n/2>::value+1;
};

template<>
struct log2_floor<1>{
    static const int value = 0;
};


/* ------------------------------------------------------------------
 * calc log2 of an integer rounded up
 */
template< int n >
struct log2_ceil{
    static const int value = 1 + log2_floor<n-1>::value;
};

template<>
struct log2_ceil<1>{
    static const int value = 0;
};

} // namespace _ow

#endif
