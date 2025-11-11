// emscripten version of csprng. this is used exactly *once* when creating a profile
// afaict its for online which we dont support but i want the save files to be
// compatible with the desktop version of the game
#ifdef __EMSCRIPTEN__

#include <emscripten.h>

EM_JS(void, fill_crypto_random, (void* buffer, size_t size), {
	const view = new Uint8Array(Module.HEAPU8.buffer, buffer, size);
	crypto.getRandomValues(view);
});

void csprng(void * const buffer, const size_t size)
{
	fill_crypto_random(buffer, size);
}

#endif
