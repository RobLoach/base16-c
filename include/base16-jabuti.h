/**
 * Base16 Jabuti 
 *
 * @author https://github.com/notusknot
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

#ifndef BASE16_jabuti_H__
#define BASE16_jabuti_H__

/**
 * The Base16 Jabuti scheme.
 *
 * @author https://github.com/notusknot
 */
extern const base16_scheme base16_jabuti;

#endif  /* BASE16_jabuti_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_jabuti_IMPLEMENTATION_ONCE
#define BASE16_jabuti_IMPLEMENTATION_ONCE

const base16_scheme base16_jabuti = {
    .name = "Jabuti",
    .base = {
        { .r = 41, .g = 42, .b = 55 },
        { .r = 52, .g = 53, .b = 69 },
        { .r = 60, .g = 62, .b = 81 },
        { .r = 69, .g = 71, .b = 93 },
        { .r = 80, .g = 82, .b = 107 },
        { .r = 192, .g = 203, .b = 227 },
        { .r = 217, .g = 224, .b = 238 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 236, .g = 106, .b = 136 },
        { .r = 239, .g = 185, .b = 147 },
        { .r = 225, .g = 198, .b = 151 },
        { .r = 63, .g = 218, .b = 164 },
        { .r = 255, .g = 126, .b = 182 },
        { .r = 63, .g = 198, .b = 222 },
        { .r = 190, .g = 149, .b = 255 },
        { .r = 139, .g = 141, .b = 169 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 41, .g = 42, .b = 55 },
        { .r = 41, .g = 42, .b = 55 },
        { .r = 236, .g = 106, .b = 136 },
        { .r = 225, .g = 198, .b = 151 },
        { .r = 63, .g = 218, .b = 164 },
        { .r = 255, .g = 126, .b = 182 },
        { .r = 63, .g = 198, .b = 222 },
        { .r = 190, .g = 149, .b = 255 }
    },
    .system = 16
};

#endif  /* BASE16_jabuti_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
