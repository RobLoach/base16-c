/**
 * Base24 Mission Brogue 
 *
 * @author Thomas Leon Highbaugh
 *
 * Template by Rob Loach (https://robloach.net)
 * base16-c: https://github.com/RobLoach/base16-c
 *
 * License: MIT
 *
 * Copyright (c) 2024 Rob Loach (https://robloach.net)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef BASE16_COLOR_H__
#define BASE16_COLOR_H__

/**
 * A single color used for Base16 or Base24.
 */
typedef struct base16_color {
    unsigned char r; /** Red channel */
    unsigned char g; /** Green channel */
    unsigned char b; /** Blue channel */
} base16_color;

#endif /* BASE16_COLOR_H__ */

#ifndef BASE16_SCHEME_H__
#define BASE16_SCHEME_H__

/**
 * A Base16 Scheme.
 */
typedef struct base16_scheme {
    const char *name; /** The name of the scheme. */
    base16_color base[24]; /** An array of the colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE24_mission_brogue_H__
#define BASE24_mission_brogue_H__

/**
 * The Base24 Mission Brogue scheme.
 *
 * @author Thomas Leon Highbaugh
 */
extern const base16_scheme base24_mission_brogue;

#endif  /* BASE24_mission_brogue_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_mission_brogue_IMPLEMENTATION_ONCE
#define BASE24_mission_brogue_IMPLEMENTATION_ONCE

const base16_scheme base24_mission_brogue = {
    .name = "Mission Brogue",
    .base = {
        { .r = 40, .g = 49, .b = 57 },
        { .r = 59, .g = 73, .b = 84 },
        { .r = 77, .g = 96, .b = 111 },
        { .r = 96, .g = 119, .b = 138 },
        { .r = 120, .g = 142, .b = 161 },
        { .r = 147, .g = 165, .b = 180 },
        { .r = 171, .g = 185, .b = 196 },
        { .r = 231, .g = 235, .b = 238 },
        { .r = 239, .g = 169, .b = 169 },
        { .r = 242, .g = 219, .b = 120 },
        { .r = 224, .g = 184, .b = 138 },
        { .r = 140, .g = 212, .b = 176 },
        { .r = 147, .g = 223, .b = 236 },
        { .r = 162, .g = 197, .b = 253 },
        { .r = 204, .g = 183, .b = 219 },
        { .r = 142, .g = 158, .b = 203 },

        /* Base24 */
        { .r = 62, .g = 62, .b = 59 },
        { .r = 121, .g = 121, .b = 122 },
        { .r = 246, .g = 191, .b = 191 },
        { .r = 255, .g = 240, .b = 178 },
        { .r = 181, .g = 224, .b = 144 },
        { .r = 178, .g = 240, .b = 253 },
        { .r = 195, .g = 217, .b = 253 },
        { .r = 227, .g = 195, .b = 230 }
    },
    .system = 24
};

#endif  /* BASE24_mission_brogue_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
