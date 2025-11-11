#ifndef EMSCRIPTEN_CSPRNG_H
#define EMSCRIPTEN_CSPRNG_H

// add emscripten specific csprng

#ifdef __EMSCRIPTEN__
#include <emscripten.h>

#ifdef __cplusplus
extern "C" {
#endif

// Override the csprng implementation for Emscripten
#undef csprng
void csprng(void * const buffer, const size_t size);

#ifdef __cplusplus
}
#endif

#endif

#endif
