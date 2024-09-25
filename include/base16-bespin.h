/**
 * Base16 Bespin 
 *
 * @author Jan T. Sott
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

#ifndef BASE16_bespin_H__
#define BASE16_bespin_H__

/**
 * The Base16 Bespin scheme.
 *
 * @author Jan T. Sott
 */
extern const base16_scheme base16_bespin;

#endif  /* BASE16_bespin_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_bespin_IMPLEMENTATION_ONCE
#define BASE16_bespin_IMPLEMENTATION_ONCE

const base16_scheme base16_bespin = {
    .name = "Bespin",
    .base = {
        { .r = 40, .g = 33, .b = 28 },
        { .r = 54, .g = 49, .b = 46 },
        { .r = 94, .g = 93, .b = 92 },
        { .r = 102, .g = 102, .b = 102 },
        { .r = 121, .g = 121, .b = 119 },
        { .r = 138, .g = 137, .b = 134 },
        { .r = 157, .g = 155, .b = 151 },
        { .r = 186, .g = 174, .b = 158 },
        { .r = 207, .g = 106, .b = 76 },
        { .r = 207, .g = 125, .b = 52 },
        { .r = 249, .g = 238, .b = 152 },
        { .r = 84, .g = 190, .b = 13 },
        { .r = 175, .g = 196, .b = 219 },
        { .r = 94, .g = 166, .b = 234 },
        { .r = 155, .g = 133, .b = 157 },
        { .r = 147, .g = 113, .b = 33 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 40, .g = 33, .b = 28 },
        { .r = 40, .g = 33, .b = 28 },
        { .r = 207, .g = 106, .b = 76 },
        { .r = 249, .g = 238, .b = 152 },
        { .r = 84, .g = 190, .b = 13 },
        { .r = 175, .g = 196, .b = 219 },
        { .r = 94, .g = 166, .b = 234 },
        { .r = 155, .g = 133, .b = 157 }
    },
    .system = 16
};

#endif  /* BASE16_bespin_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
