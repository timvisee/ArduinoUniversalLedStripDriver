/******************************************************************************
 * Copyright (c) LedStripController 2016. All rights reserved.                *
 *                                                                            *
 * @author Tim Visee                                                          *
 * @website http://timvisee.com/                                              *
 *                                                                            *
 * Open Source != No Copyright                                                *
 *                                                                            *
 * Permission is hereby granted, free of charge, to any person obtaining a    *
 * copy of this software and associated documentation files (the "Software"), *
 * to deal in the Software without restriction, including without limitation  *
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,   *
 * and/or sell copies of the Software, and to permit persons to whom the      *
 * Software is furnished to do so, subject to the following conditions:       *
 *                                                                            *
 * The above copyright notice and this permission notice shall be included    *
 * in all copies or substantial portions of the Software.                     *
 *                                                                            *
 * You should have received a copy of The MIT License (MIT) along with this   *
 * program. If not, see <http://opensource.org/licenses/MIT/>.                *
 ******************************************************************************/

#include "LedStripAdapterLPD8806.h"

LedStripAdapterLPD8806::LedStripAdapterLPD8806(uint8_t ledCount, uint8_t pinData, uint8_t pinClock) {
    // Initialize the LED strip
    strip = LPD8806(ledCount, pinData, pinClock);
}

uint8_t LedStripAdapterLPD8806::getColorChannelCount() {
    return LPD8806_COLOR_CHANNEL_COUNT;
}

uint8_t LedStripAdapterLPD8806::getColorValueMax() {
    return LPD8806_COLOR_VALUE_MAX;
}