#pragma once

#ifdef ZC_PLATFORM_WIN32

#include <glad/gl.h>
#define GL_NVIDIA_PLATFORM_BINARY_NV 0

#endif

#ifdef ZC_PLATFORM_ZUNE
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#include <EGL/egl.h>

#undef GL_COLOR_ATTACHMENT0
#define GL_COLOR_ATTACHMENT0 GL_COLOR_ATTACHMENT0_NV 
#define GL_COLOR_ATTACHMENT1 GL_COLOR_ATTACHMENT1_NV 
#define GL_COLOR_ATTACHMENT2 GL_COLOR_ATTACHMENT2_NV 
#define GL_COLOR_ATTACHMENT3 GL_COLOR_ATTACHMENT3_NV 
#define GL_COLOR_ATTACHMENT4 GL_COLOR_ATTACHMENT4_NV 
#define GL_COLOR_ATTACHMENT5 GL_COLOR_ATTACHMENT5_NV 
#define GL_COLOR_ATTACHMENT6 GL_COLOR_ATTACHMENT6_NV 
#define GL_COLOR_ATTACHMENT7 GL_COLOR_ATTACHMENT7_NV 
#define GL_COLOR_ATTACHMENT8 GL_COLOR_ATTACHMENT8_NV 
#define GL_COLOR_ATTACHMENT9 GL_COLOR_ATTACHMENT9_NV 
#define GL_COLOR_ATTACHMENT10 GL_COLOR_ATTACHMENT10_NV
#define GL_COLOR_ATTACHMENT11 GL_COLOR_ATTACHMENT11_NV
#define GL_COLOR_ATTACHMENT12 GL_COLOR_ATTACHMENT12_NV
#define GL_COLOR_ATTACHMENT13 GL_COLOR_ATTACHMENT13_NV
#define GL_COLOR_ATTACHMENT14 GL_COLOR_ATTACHMENT14_NV
#define GL_COLOR_ATTACHMENT15 GL_COLOR_ATTACHMENT15_NV

#endif