/**
 * Base24 Jet Brains Darcula 
 *
 * @author FredHappyface (https://github.com/fredHappyface)
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

#ifndef BASE24_jet_brains_darcula_H__
#define BASE24_jet_brains_darcula_H__

/**
 * The Base24 Jet Brains Darcula scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_jet_brains_darcula;

#endif  /* BASE24_jet_brains_darcula_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_jet_brains_darcula_IMPLEMENTATION_ONCE
#define BASE24_jet_brains_darcula_IMPLEMENTATION_ONCE

const base16_scheme base24_jet_brains_darcula = {
    .name = "Jet Brains Darcula",
    .base = {
        { .r = 32, .g = 32, .b = 32 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 107, .g = 107, .b = 107 },
        { .r = 129, .g = 129, .b = 129 },
        { .r = 151, .g = 151, .b = 151 },
        { .r = 173, .g = 173, .b = 173 },
        { .r = 238, .g = 238, .b = 238 },
        { .r = 250, .g = 83, .b = 85 },
        { .r = 194, .g = 195, .b = 0 },
        { .r = 109, .g = 157, .b = 241 },
        { .r = 18, .g = 110, .b = 0 },
        { .r = 51, .g = 194, .b = 193 },
        { .r = 69, .g = 129, .b = 235 },
        { .r = 250, .g = 84, .b = 255 },
        { .r = 125, .g = 41, .b = 42 },

        /* Base24 */
        { .r = 56, .g = 56, .b = 56 },
        { .r = 28, .g = 28, .b = 28 },
        { .r = 251, .g = 113, .b = 114 },
        { .r = 255, .g = 255, .b = 0 },
        { .r = 103, .g = 255, .b = 79 },
        { .r = 96, .g = 211, .b = 209 },
        { .r = 109, .g = 157, .b = 241 },
        { .r = 251, .g = 130, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_jet_brains_darcula_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
