#ifndef HEADER_H
#define HEADER_H


#include <stdio.h>
#include <stdint.h>

typedef uint32_t  u32;
typedef int32_t   i32;
typedef uint16_t  u16;
typedef int16_t   i16;
typedef uint8_t   u8;
typedef int8_t    i8;
typedef double    f64;
typedef float     f32;


#pragma warning(push, 3)
#define WINDOWS_LEAN_AND_MEAN
#include <windows.h>
#pragma warning(pop)


#include "main.h"
#include "window/window.h"
#include "window/screen.h"

#endif // HEADER_H