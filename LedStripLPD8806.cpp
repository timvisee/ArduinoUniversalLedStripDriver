/******************************************************************************
 * Copyright (c) UniversalLedStripDriver 2016. All rights reserved.           *
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

#include "LedStripLPD8806.h"

LedStripLPD8806::LedStripLPD8806(uint16_t ledCount, uint8_t pinData, uint8_t pinClock) : LedStripBase(ledCount) {
    // Set the fields
    this->pinData = pinData;
    this->pinClock = pinClock;

    // Configure and set the adapter
    this->setAdapter(new LedStripAdapterLPD8806(ledCount, pinData, pinClock));
}

LedStripLPD8806::~LedStripLPD8806() { }

uint8_t LedStripLPD8806::getDataPin() {
    return this->pinData;
}

uint8_t LedStripLPD8806::getClockPin() {
    return this->pinClock;
}

void LedStripLPD8806::init() {
    this->getAdapter()->init();
}

void LedStripLPD8806::init(bool render) {
    this->getAdapter()->init(render);
}

void LedStripLPD8806::render() {
    this->getAdapter()->render();
}