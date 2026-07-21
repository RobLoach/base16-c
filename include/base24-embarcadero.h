/**
 * Base24 Embarcadero 
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

#ifndef BASE24_embarcadero_H__
#define BASE24_embarcadero_H__

/**
 * The Base24 Embarcadero scheme.
 *
 * @author Thomas Leon Highbaugh
 */
extern const base16_scheme base24_embarcadero;

#endif  /* BASE24_embarcadero_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_embarcadero_IMPLEMENTATION_ONCE
#define BASE24_embarcadero_IMPLEMENTATION_ONCE

const base16_scheme base24_embarcadero = {
    .name = "Embarcadero",
    .base = {
        { .r = 37, .g = 42, .b = 47 },
        { .r = 67, .g = 71, .b = 76 },
        { .r = 97, .g = 101, .b = 104 },
        { .r = 127, .g = 130, .b = 133 },
        { .r = 158, .g = 160, .b = 162 },
        { .r = 188, .g = 189, .b = 192 },
        { .r = 218, .g = 219, .b = 219 },
        { .r = 248, .g = 248, .b = 248 },
        { .r = 237, .g = 93, .b = 134 },
        { .r = 255, .g = 203, .b = 61 },
        { .r = 235, .g = 130, .b = 77 },
        { .r = 32, .g = 194, .b = 144 },
        { .r = 2, .g = 239, .b = 239 },
        { .r = 64, .g = 128, .b = 208 },
        { .r = 160, .g = 112, .b = 208 },
        { .r = 80, .g = 80, .b = 159 },

        /* Base24 */
        { .r = 55, .g = 55, .b = 66 },
        { .r = 113, .g = 113, .b = 136 },
        { .r = 245, .g = 125, .b = 154 },
        { .r = 255, .g = 224, .b = 137 },
        { .r = 160, .g = 208, .b = 160 },
        { .r = 64, .g = 192, .b = 192 },
        { .r = 128, .g = 176, .b = 240 },
        { .r = 192, .g = 144, .b = 240 }
    },
    .system = 24
};

#endif  /* BASE24_embarcadero_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
