/* -*- mode: c++ -*-
 * Kaleidoscope-Unicode -- Unicode input helpers
 * Copyright (C) 2016, 2017  Gergely Nagy
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <Kaleidoscope.h>
#include <Kaleidoscope-HostOS.h>

namespace kaleidoscope {
class Unicode : public KaleidoscopePlugin {
 public:
  Unicode(void);

  void begin(void) final;

  static void start(void);
  static void input(void);
  static void end(void);

  static void type(uint32_t unicode);
  static void typeCode(uint32_t unicode);
};
}

Key hexToKey(uint8_t hex);
Key hexToKeysWithNumpad(uint8_t hex);

void unicodeCustomStart(void);
void unicodeCustomEnd(void);
void unicodeCustomInput(void);

extern kaleidoscope::Unicode Unicode;
