/**
 * Base24 Tokyo Night Moon 
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

#ifndef BASE24_tokyo_night_moon_H__
#define BASE24_tokyo_night_moon_H__

/**
 * The Base24 Tokyo Night Moon scheme.
 *
 * @author Michaël Ball, based on Tokyo Night by enkia (https://github.com/enkia/tokyo-night-vscode-theme)
 */
extern const base16_scheme base24_tokyo_night_moon;

#endif  /* BASE24_tokyo_night_moon_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_tokyo_night_moon_IMPLEMENTATION_ONCE
#define BASE24_tokyo_night_moon_IMPLEMENTATION_ONCE

const base16_scheme base24_tokyo_night_moon = {
    .name = "Tokyo Night Moon",
    .base = {
        { .r = 34, .g = 36, .b = 54 },
        { .r = 30, .g = 32, .b = 48 },
        { .r = 47, .g = 51, .b = 77 },
        { .r = 68, .g = 74, .b = 115 },
        { .r = 130, .g = 139, .b = 184 },
        { .r = 200, .g = 211, .b = 245 },
        { .r = 180, .g = 194, .b = 240 },
        { .r = 200, .g = 211, .b = 245 },
        { .r = 192, .g = 153, .b = 255 },
        { .r = 255, .g = 199, .b = 119 },
        { .r = 255, .g = 199, .b = 119 },
        { .r = 195, .g = 232, .b = 141 },
        { .r = 134, .g = 225, .b = 252 },
        { .r = 130, .g = 170, .b = 255 },
        { .r = 252, .g = 167, .b = 234 },
        { .r = 197, .g = 59, .b = 83 },

        /* Base24 */
        { .r = 30, .g = 32, .b = 48 },
        { .r = 26, .g = 27, .b = 42 },
        { .r = 255, .g = 117, .b = 127 },
        { .r = 255, .g = 215, .b = 147 },
        { .r = 195, .g = 232, .b = 141 },
        { .r = 134, .g = 225, .b = 252 },
        { .r = 130, .g = 170, .b = 255 },
        { .r = 252, .g = 167, .b = 234 }
    },
    .system = 24
};

#endif  /* BASE24_tokyo_night_moon_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
