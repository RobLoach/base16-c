/**
 * Base24 Eldritch 
 *
 * @author https://github.com/eldritch-theme
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

#ifndef TINTED_C_COLOR_H__
#define TINTED_C_COLOR_H__

/**
 * A single color used for Base16 or Base24.
 */
typedef struct tinted_color {
    unsigned char r; /** Red channel */
    unsigned char g; /** Green channel */
    unsigned char b; /** Blue channel */
} tinted_color;

#endif /* TINTED_C_COLOR_H__ */

#ifndef TINTED_C_SCHEME_H__
#define TINTED_C_SCHEME_H__

/**
 * A Tinted Base16 or Base24 Scheme.
 */
typedef struct tinted_scheme {
    const char *name; /** The name of the scheme. */
    tinted_color base[24]; /** An array of the colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} tinted_scheme;

#endif  /* TINTED_C_SCHEME_H__ */

#ifndef BASE24_eldritch_H__
#define BASE24_eldritch_H__

/**
 * The Base24 Eldritch scheme.
 *
 * @author https://github.com/eldritch-theme
 */
extern const tinted_scheme base24_eldritch;

#endif  /* BASE24_eldritch_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_eldritch_IMPLEMENTATION_ONCE
#define BASE24_eldritch_IMPLEMENTATION_ONCE

const tinted_scheme base24_eldritch = {
    .name = "Eldritch",
    .base = {
        { .r = 33, .g = 35, .b = 55 },
        { .r = 50, .g = 52, .b = 73 },
        { .r = 59, .g = 66, .b = 97 },
        { .r = 112, .g = 129, .b = 208 },
        { .r = 161, .g = 171, .b = 224 },
        { .r = 235, .g = 250, .b = 250 },
        { .r = 240, .g = 242, .b = 244 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 241, .g = 108, .b = 117 },
        { .r = 247, .g = 198, .b = 127 },
        { .r = 241, .g = 252, .b = 121 },
        { .r = 55, .g = 244, .b = 153 },
        { .r = 4, .g = 209, .b = 249 },
        { .r = 57, .g = 221, .b = 253 },
        { .r = 164, .g = 140, .b = 242 },
        { .r = 242, .g = 101, .b = 181 },

        /* Base24 */
        { .r = 23, .g = 25, .b = 40 },
        { .r = 14, .g = 15, .b = 26 },
        { .r = 248, .g = 154, .b = 157 },
        { .r = 249, .g = 233, .b = 161 },
        { .r = 111, .g = 255, .b = 193 },
        { .r = 108, .g = 233, .b = 255 },
        { .r = 122, .g = 233, .b = 255 },
        { .r = 212, .g = 179, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_eldritch_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_eldritch,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
