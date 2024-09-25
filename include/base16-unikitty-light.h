/**
 * Base16 Unikitty Light 
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

#ifndef BASE16_unikitty_light_H__
#define BASE16_unikitty_light_H__

/**
 * The Base16 Unikitty Light scheme.
 *
 * @author Josh W Lewis (@joshwlewis)
 */
extern const base16_scheme base16_unikitty_light;

#endif  /* BASE16_unikitty_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_unikitty_light_IMPLEMENTATION_ONCE
#define BASE16_unikitty_light_IMPLEMENTATION_ONCE

const base16_scheme base16_unikitty_light = {
    .name = "Unikitty Light",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 225, .g = 225, .b = 226 },
        { .r = 196, .g = 195, .b = 197 },
        { .r = 167, .g = 165, .b = 168 },
        { .r = 137, .g = 135, .b = 139 },
        { .r = 108, .g = 105, .b = 110 },
        { .r = 79, .g = 75, .b = 81 },
        { .r = 50, .g = 45, .b = 52 },
        { .r = 216, .g = 19, .b = 127 },
        { .r = 214, .g = 84, .b = 7 },
        { .r = 220, .g = 138, .b = 14 },
        { .r = 23, .g = 173, .b = 152 },
        { .r = 20, .g = 155, .b = 218 },
        { .r = 119, .g = 93, .b = 255 },
        { .r = 170, .g = 23, .b = 230 },
        { .r = 224, .g = 19, .b = 208 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 216, .g = 19, .b = 127 },
        { .r = 220, .g = 138, .b = 14 },
        { .r = 23, .g = 173, .b = 152 },
        { .r = 20, .g = 155, .b = 218 },
        { .r = 119, .g = 93, .b = 255 },
        { .r = 170, .g = 23, .b = 230 }
    },
    .system = 16
};

#endif  /* BASE16_unikitty_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
