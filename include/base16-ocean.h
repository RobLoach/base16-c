/**
 * Base16 Ocean 
 *
 * @author Chris Kempson (http://chriskempson.com)
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
    base16_color base[24]; /** An array of the base16 colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE16_ocean_H__
#define BASE16_ocean_H__

/**
 * The Base16 Ocean scheme.
 *
 * @author Chris Kempson (http://chriskempson.com)
 */
extern const base16_scheme base16_ocean;

#endif  /* BASE16_ocean_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_ocean_IMPLEMENTATION_ONCE
#define BASE16_ocean_IMPLEMENTATION_ONCE

const base16_scheme base16_ocean = {
    .name = "Ocean",
    .base = {
        { .r = 43, .g = 48, .b = 59 },
        { .r = 52, .g = 61, .b = 70 },
        { .r = 79, .g = 91, .b = 102 },
        { .r = 101, .g = 115, .b = 126 },
        { .r = 167, .g = 173, .b = 186 },
        { .r = 192, .g = 197, .b = 206 },
        { .r = 223, .g = 225, .b = 232 },
        { .r = 239, .g = 241, .b = 245 },
        { .r = 191, .g = 97, .b = 106 },
        { .r = 208, .g = 135, .b = 112 },
        { .r = 235, .g = 203, .b = 139 },
        { .r = 163, .g = 190, .b = 140 },
        { .r = 150, .g = 181, .b = 180 },
        { .r = 143, .g = 161, .b = 179 },
        { .r = 180, .g = 142, .b = 173 },
        { .r = 171, .g = 121, .b = 103 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 43, .g = 48, .b = 59 },
        { .r = 43, .g = 48, .b = 59 },
        { .r = 191, .g = 97, .b = 106 },
        { .r = 235, .g = 203, .b = 139 },
        { .r = 163, .g = 190, .b = 140 },
        { .r = 150, .g = 181, .b = 180 },
        { .r = 143, .g = 161, .b = 179 },
        { .r = 180, .g = 142, .b = 173 }
    },
    .system = 16
};

#endif  /* BASE16_ocean_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
