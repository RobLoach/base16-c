/**
 * Base24 Tokyo Night Storm 
 *
 * @author Michaël Ball, based on Tokyo Night by enkia (https://github.com/enkia/tokyo-night-vscode-theme)
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

#ifndef BASE24_tokyo_night_storm_H__
#define BASE24_tokyo_night_storm_H__

/**
 * The Base24 Tokyo Night Storm scheme.
 *
 * @author Michaël Ball, based on Tokyo Night by enkia (https://github.com/enkia/tokyo-night-vscode-theme)
 */
extern const base16_scheme base24_tokyo_night_storm;

#endif  /* BASE24_tokyo_night_storm_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_tokyo_night_storm_IMPLEMENTATION_ONCE
#define BASE24_tokyo_night_storm_IMPLEMENTATION_ONCE

const base16_scheme base24_tokyo_night_storm = {
    .name = "Tokyo Night Storm",
    .base = {
        { .r = 36, .g = 40, .b = 59 },
        { .r = 22, .g = 22, .b = 30 },
        { .r = 52, .g = 58, .b = 82 },
        { .r = 68, .g = 75, .b = 106 },
        { .r = 120, .g = 124, .b = 153 },
        { .r = 169, .g = 177, .b = 214 },
        { .r = 203, .g = 204, .b = 209 },
        { .r = 213, .g = 214, .b = 219 },
        { .r = 192, .g = 202, .b = 245 },
        { .r = 169, .g = 177, .b = 214 },
        { .r = 13, .g = 185, .b = 215 },
        { .r = 158, .g = 206, .b = 106 },
        { .r = 180, .g = 249, .b = 248 },
        { .r = 42, .g = 195, .b = 222 },
        { .r = 187, .g = 154, .b = 247 },
        { .r = 247, .g = 118, .b = 142 },

        /* Base24 */
        { .r = 31, .g = 35, .b = 53 },
        { .r = 26, .g = 27, .b = 38 },
        { .r = 255, .g = 122, .b = 147 },
        { .r = 255, .g = 158, .b = 100 },
        { .r = 115, .g = 218, .b = 202 },
        { .r = 125, .g = 207, .b = 255 },
        { .r = 137, .g = 221, .b = 255 },
        { .r = 187, .g = 154, .b = 247 }
    },
    .system = 24
};

#endif  /* BASE24_tokyo_night_storm_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
