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
};
