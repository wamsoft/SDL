#if defined(SDL_PLATFORM_XBOXONE) || defined(SDL_PLATFORM_XBOXSERIES)
// Pre-compiled for the console at build time (compile_shaders_xbox.cmake),
// so the runtime does not have to recompile the generic DXIL below.
#include "SDL_render_gpu_xbox_dxil.h"
#else
#include "color.frag.dxil.h"
#include "linepoint.vert.dxil.h"
#include "texture_advanced.frag.dxil.h"
#include "texture_rgb.frag.dxil.h"
#include "texture_rgba.frag.dxil.h"
#include "tri_color.vert.dxil.h"
#include "tri_texture.vert.dxil.h"
#endif
