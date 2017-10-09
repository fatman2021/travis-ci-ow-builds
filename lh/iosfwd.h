///////////////////////////////////////////////////////////////////////////
// FILE: iosfwd/iosfwd.h (iostream forwarding declarations)
//
// =========================================================================
//
//                          Open Watcom Project
//
// Copyright (c) 2002-2017 The Open Watcom Contributors. All Rights Reserved.
// Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
//
//    This file is automatically generated. Do not edit directly.
//
// =========================================================================
//
// Description: This header is part of the C++ standard library. It
//              declares several iostream classes incompletely to serve
//              as forwarding declarations in cases where the overhead
//              of full class declarations is not necessary.
///////////////////////////////////////////////////////////////////////////
#ifndef _IOSFWD_H_INCLUDED
#define _IOSFWD_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifndef _IOSFWD_INCLUDED
 #include <iosfwd>
#endif
using std::ios;
using std::streambuf;
using std::istream;
using std::ostream;
using std::iostream;
using std::filebuf;
using std::ifstream;
using std::ofstream;
using std::fstream;

#endif
