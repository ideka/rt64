//
// RT64
//

#pragma once

#include "shared/rt64_hlsl.h"

#ifdef HLSL_CPU
namespace interop {
#endif
    struct FramebufferParams {
        float2 resolution;
        float2 resolutionScale;
        float horizontalMisalignment;
        uint maxAnisotropy;     // samples along a stretched footprint (1 = no anisotropic filtering)
    };
#ifdef HLSL_CPU
};
#endif