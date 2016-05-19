// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_COLOR_PALETTE_H_
#define UI_GFX_COLOR_PALETTE_H_

#include "third_party/skia/include/core/SkColor.h"

namespace gfx {

extern const SkColor kChromeIconGrey;

// The number refers to the shade of darkness. Each color in the MD
// palette ranges from 100-900.
extern const SkColor kGoogleBlue300;
extern const SkColor kGoogleBlue500;
extern const SkColor kGoogleRed700;
extern const SkColor kGoogleGreen700;
extern const SkColor kGoogleYellow700;

}  // namespace gfx

#endif  // UI_GFX_COLOR_PALETTE_H_
