/**
 * Base16 boo-shnickle-light 
 *
 * @author boo-shnickle (@boo_shnickle)
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

#ifndef BASE16_boo_shnickle_light_H__
#define BASE16_boo_shnickle_light_H__

/**
 * The Base16 boo-shnickle-light scheme.
 *
 * @author boo-shnickle (@boo_shnickle)
 */
extern const base16_scheme base16_boo_shnickle_light;

#endif  /* BASE16_boo_shnickle_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_boo_shnickle_light_IMPLEMENTATION_ONCE
#define BASE16_boo_shnickle_light_IMPLEMENTATION_ONCE

const base16_scheme base16_boo_shnickle_light = {
    .name = "boo-shnickle-light",
    .base = {
        { .r = 255, .g = 255, .b = 204 },
        { .r = 222, .g = 222, .b = 178 },
        { .r = 189, .g = 189, .b = 151 },
        { .r = 156, .g = 156, .b = 125 },
        { .r = 124, .g = 124, .b = 99 },
        { .r = 91, .g = 91, .b = 73 },
        { .r = 58, .g = 58, .b = 46 },
        { .r = 25, .g = 25, .b = 20 },
        { .r = 255, .g = 191, .b = 165 },
        { .r = 255, .g = 220, .b = 153 },
        { .r = 255, .g = 242, .b = 153 },
        { .r = 231, .g = 255, .b = 153 },
        { .r = 191, .g = 255, .b = 197 },
        { .r = 191, .g = 191, .b = 217 },
        { .r = 242, .g = 191, .b = 217 },
        { .r = 229, .g = 214, .b = 166 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 255, .g = 255, .b = 204 },
        { .r = 255, .g = 255, .b = 204 },
        { .r = 255, .g = 191, .b = 165 },
        { .r = 255, .g = 242, .b = 153 },
        { .r = 231, .g = 255, .b = 153 },
        { .r = 191, .g = 255, .b = 197 },
        { .r = 191, .g = 191, .b = 217 },
        { .r = 242, .g = 191, .b = 217 }
    },
    .system = 16
};

#endif  /* BASE16_boo_shnickle_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
