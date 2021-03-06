#ifndef CACHELOT_DEBUG_TRACE_H_INCLUDED
#define CACHELOT_DEBUG_TRACE_H_INCLUDED

//
//  (C) Copyright 2015 Iurii Krasnoshchok
//
//  Distributed under the terms of Simplified BSD License
//  see LICENSE file


#ifdef DEBUG

#include <iostream>

/// @defgroup debug Debugging instruments
/// @{

namespace cachelot {

auto & __debug_out_stream = std::cerr;

#if DEBUG_LEVEL > 3
#  define debug_trace3(__debug_out_stream <<)
#else
#  define
#endif

} // namespace cachelot

/// @}

#endif // DEBUG

#endif // CACHELOT_DEBUG_TRACE_H_INCLUDED
