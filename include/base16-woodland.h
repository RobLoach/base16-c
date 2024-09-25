/**
 * Base16 Woodland 
 *
 * @author Jay Cornwall (https://jcornwall.com)
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

#ifndef BASE16_woodland_H__
#define BASE16_woodland_H__

/**
 * The Base16 Woodland scheme.
 *
 * @author Jay Cornwall (https://jcornwall.com)
 */
extern const base16_scheme base16_woodland;

#endif  /* BASE16_woodland_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_woodland_IMPLEMENTATION_ONCE
#define BASE16_woodland_IMPLEMENTATION_ONCE

const base16_scheme base16_woodland = {
    .name = "Woodland",
    .base = {
        { .r = 35, .g = 30, .b = 24 },
        { .r = 48, .g = 43, .b = 37 },
        { .r = 72, .g = 65, .b = 58 },
        { .r = 157, .g = 139, .b = 112 },
        { .r = 180, .g = 164, .b = 144 },
        { .r = 202, .g = 188, .b = 177 },
        { .r = 215, .g = 200, .b = 188 },
        { .r = 228, .g = 212, .b = 200 },
        { .r = 211, .g = 92, .b = 92 },
        { .r = 202, .g = 127, .b = 50 },
        { .r = 224, .g = 172, .b = 22 },
        { .r = 183, .g = 186, .b = 83 },
        { .r = 110, .g = 185, .b = 88 },
        { .r = 136, .g = 164, .b = 211 },
        { .r = 187, .g = 144, .b = 226 },
        { .r = 180, .g = 147, .b = 104 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 35, .g = 30, .b = 24 },
        { .r = 35, .g = 30, .b = 24 },
        { .r = 211, .g = 92, .b = 92 },
        { .r = 224, .g = 172, .b = 22 },
        { .r = 183, .g = 186, .b = 83 },
        { .r = 110, .g = 185, .b = 88 },
        { .r = 136, .g = 164, .b = 211 },
        { .r = 187, .g = 144, .b = 226 }
    },
    .system = 16
};

#endif  /* BASE16_woodland_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
