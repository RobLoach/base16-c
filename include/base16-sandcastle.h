/**
 * Base16 Sandcastle 
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

#ifndef BASE16_sandcastle_H__
#define BASE16_sandcastle_H__

/**
 * The Base16 Sandcastle scheme.
 *
 * @author George Essig (https://github.com/gessig)
 */
extern const base16_scheme base16_sandcastle;

#endif  /* BASE16_sandcastle_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_sandcastle_IMPLEMENTATION_ONCE
#define BASE16_sandcastle_IMPLEMENTATION_ONCE

const base16_scheme base16_sandcastle = {
    .name = "Sandcastle",
    .base = {
        { .r = 40, .g = 44, .b = 52 },
        { .r = 44, .g = 50, .b = 59 },
        { .r = 62, .g = 68, .b = 81 },
        { .r = 102, .g = 92, .b = 84 },
        { .r = 146, .g = 131, .b = 116 },
        { .r = 168, .g = 153, .b = 132 },
        { .r = 213, .g = 196, .b = 161 },
        { .r = 253, .g = 244, .b = 193 },
        { .r = 131, .g = 165, .b = 152 },
        { .r = 160, .g = 126, .b = 59 },
        { .r = 160, .g = 126, .b = 59 },
        { .r = 82, .g = 139, .b = 139 },
        { .r = 131, .g = 165, .b = 152 },
        { .r = 131, .g = 165, .b = 152 },
        { .r = 215, .g = 95, .b = 95 },
        { .r = 168, .g = 115, .b = 34 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 40, .g = 44, .b = 52 },
        { .r = 40, .g = 44, .b = 52 },
        { .r = 131, .g = 165, .b = 152 },
        { .r = 160, .g = 126, .b = 59 },
        { .r = 82, .g = 139, .b = 139 },
        { .r = 131, .g = 165, .b = 152 },
        { .r = 131, .g = 165, .b = 152 },
        { .r = 215, .g = 95, .b = 95 }
    },
    .system = 16
};

#endif  /* BASE16_sandcastle_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
