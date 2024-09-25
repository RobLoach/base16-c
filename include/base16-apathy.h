/**
 * Base16 Apathy 
 *
 * @author Jannik Siebert (https://github.com/janniks)
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

#ifndef BASE16_apathy_H__
#define BASE16_apathy_H__

/**
 * The Base16 Apathy scheme.
 *
 * @author Jannik Siebert (https://github.com/janniks)
 */
extern const base16_scheme base16_apathy;

#endif  /* BASE16_apathy_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_apathy_IMPLEMENTATION_ONCE
#define BASE16_apathy_IMPLEMENTATION_ONCE

const base16_scheme base16_apathy = {
    .name = "Apathy",
    .base = {
        { .r = 3, .g = 26, .b = 22 },
        { .r = 11, .g = 52, .b = 45 },
        { .r = 24, .g = 78, .b = 69 },
        { .r = 43, .g = 104, .b = 94 },
        { .r = 95, .g = 156, .b = 146 },
        { .r = 129, .g = 181, .b = 172 },
        { .r = 167, .g = 206, .b = 200 },
        { .r = 210, .g = 231, .b = 228 },
        { .r = 62, .g = 150, .b = 136 },
        { .r = 62, .g = 121, .b = 150 },
        { .r = 62, .g = 76, .b = 150 },
        { .r = 136, .g = 62, .b = 150 },
        { .r = 150, .g = 62, .b = 76 },
        { .r = 150, .g = 136, .b = 62 },
        { .r = 76, .g = 150, .b = 62 },
        { .r = 62, .g = 150, .b = 91 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 3, .g = 26, .b = 22 },
        { .r = 3, .g = 26, .b = 22 },
        { .r = 62, .g = 150, .b = 136 },
        { .r = 62, .g = 76, .b = 150 },
        { .r = 136, .g = 62, .b = 150 },
        { .r = 150, .g = 62, .b = 76 },
        { .r = 150, .g = 136, .b = 62 },
        { .r = 76, .g = 150, .b = 62 }
    },
    .system = 16
};

#endif  /* BASE16_apathy_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
