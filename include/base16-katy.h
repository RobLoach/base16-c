/**
 * Base16 Katy 
 *
 * @author George Essig (https://github.com/gessig)
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

#ifndef BASE16_katy_H__
#define BASE16_katy_H__

/**
 * The Base16 Katy scheme.
 *
 * @author George Essig (https://github.com/gessig)
 */
extern const base16_scheme base16_katy;

#endif  /* BASE16_katy_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_katy_IMPLEMENTATION_ONCE
#define BASE16_katy_IMPLEMENTATION_ONCE

const base16_scheme base16_katy = {
    .name = "Katy",
    .base = {
        { .r = 41, .g = 45, .b = 62 },
        { .r = 68, .g = 66, .b = 103 },
        { .r = 92, .g = 89, .b = 139 },
        { .r = 103, .g = 110, .b = 149 },
        { .r = 135, .g = 150, .b = 176 },
        { .r = 149, .g = 157, .b = 203 },
        { .r = 149, .g = 157, .b = 203 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 110, .g = 152, .b = 225 },
        { .r = 247, .g = 140, .b = 108 },
        { .r = 224, .g = 165, .b = 87 },
        { .r = 120, .g = 192, .b = 110 },
        { .r = 131, .g = 183, .b = 229 },
        { .r = 130, .g = 170, .b = 255 },
        { .r = 199, .g = 146, .b = 234 },
        { .r = 255, .g = 83, .b = 112 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 41, .g = 45, .b = 62 },
        { .r = 41, .g = 45, .b = 62 },
        { .r = 110, .g = 152, .b = 225 },
        { .r = 224, .g = 165, .b = 87 },
        { .r = 120, .g = 192, .b = 110 },
        { .r = 131, .g = 183, .b = 229 },
        { .r = 130, .g = 170, .b = 255 },
        { .r = 199, .g = 146, .b = 234 }
    },
    .system = 16
};

#endif  /* BASE16_katy_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
