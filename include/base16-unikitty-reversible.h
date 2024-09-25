/**
 * Base16 Unikitty Reversible 
 *
 * @author Josh W Lewis (@joshwlewis)
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

#ifndef BASE16_unikitty_reversible_H__
#define BASE16_unikitty_reversible_H__

/**
 * The Base16 Unikitty Reversible scheme.
 *
 * @author Josh W Lewis (@joshwlewis)
 */
extern const base16_scheme base16_unikitty_reversible;

#endif  /* BASE16_unikitty_reversible_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_unikitty_reversible_IMPLEMENTATION_ONCE
#define BASE16_unikitty_reversible_IMPLEMENTATION_ONCE

const base16_scheme base16_unikitty_reversible = {
    .name = "Unikitty Reversible",
    .base = {
        { .r = 46, .g = 42, .b = 49 },
        { .r = 75, .g = 72, .b = 78 },
        { .r = 105, .g = 102, .b = 107 },
        { .r = 135, .g = 133, .b = 137 },
        { .r = 165, .g = 163, .b = 166 },
        { .r = 195, .g = 194, .b = 196 },
        { .r = 225, .g = 224, .b = 225 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 216, .g = 19, .b = 127 },
        { .r = 214, .g = 84, .b = 7 },
        { .r = 220, .g = 138, .b = 14 },
        { .r = 23, .g = 173, .b = 152 },
        { .r = 20, .g = 155, .b = 218 },
        { .r = 120, .g = 100, .b = 250 },
        { .r = 179, .g = 60, .b = 232 },
        { .r = 212, .g = 26, .b = 205 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 46, .g = 42, .b = 49 },
        { .r = 46, .g = 42, .b = 49 },
        { .r = 216, .g = 19, .b = 127 },
        { .r = 220, .g = 138, .b = 14 },
        { .r = 23, .g = 173, .b = 152 },
        { .r = 20, .g = 155, .b = 218 },
        { .r = 120, .g = 100, .b = 250 },
        { .r = 179, .g = 60, .b = 232 }
    },
    .system = 16
};

#endif  /* BASE16_unikitty_reversible_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
