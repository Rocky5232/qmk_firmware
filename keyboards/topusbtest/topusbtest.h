/* Copyright 2021 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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

#include "quantum.h"

#define LAYOUT( \
    K00,   K70, K01, K71, K02, K72, K03, K73, K04, K74, K05, K75, K06, K76,    K46,   \
    K10,    K60, K11, K61, K12, K62, K13, K63, K14, K64, K15, K65, K16,        K66,   \
    K20,       K50, K21, K51, K22, K52, K23, K53, K24, K54, K25, K55,     K26, K56,   \
    K30,  K40,  K31,  K41,          K42,       K33,   K43,  K34,     K44, K35, K45    \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06   }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16   }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26   }, \
    { K30,   K31,   KC_NO, K33,   K34,   K35,   KC_NO }, \
    { K40,   K41,   K42,   K43,   K44,   K45,   K46   }, \
    { K50,   K51,   K52,   K53,   K54,   K55,   K56   }, \
    { K60,   K61,   K62,   K63,   K64,   K65,   K66   }, \
    { K70,   K71,   K72,   K73,   K74,   K75,   K76   }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
}

// generated by KBFirmware JSON to QMK Parser
// https://noroadsleft.github.io/kbf_qmk_converter/
