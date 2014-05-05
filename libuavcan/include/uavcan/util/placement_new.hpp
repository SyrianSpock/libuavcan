/*
 * Copyright (C) 2014 Pavel Kirienko <pavel.kirienko@gmail.com>
 */

#pragma once

#include <cstddef>
#include <uavcan/impl_constants.hpp>

#ifndef UAVCAN_IMPLEMENT_PLACEMENT_NEW
# error UAVCAN_IMPLEMENT_PLACEMENT_NEW
#endif

#if UAVCAN_IMPLEMENT_PLACEMENT_NEW

inline void* operator new  (std::size_t, void* ptr) throw()
{
    return ptr;
}
inline void* operator new[](std::size_t, void* ptr) throw()
{
    return ptr;
}

inline void  operator delete  (void*, void*) throw() { }
inline void  operator delete[](void*, void*) throw() { }

#else
# include <new>
#endif
