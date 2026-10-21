//
// RT64
//

#pragma once

#include <cstdint>

namespace RT64 {
    // Anisotropic filtering for the emulated texture sampling (RasterPS): the most samples taken along a
    // texture footprint stretched across a pixel. 1 turns it off.
    void setMaxAnisotropy(uint32_t samples);
    uint32_t getMaxAnisotropy();

    // Keyed textures: original (not replaced) textures, by hash, whose pure black texels are transparent and
    // the rest opaque (their own alpha is ignored), like a cutout replacement: discarded under half opacity
    // once filtered, even where the game draws them without alpha.
    void setKeyedTexture(uint64_t hash, bool keyed);
    bool isKeyedTexture(uint64_t hash);
};
