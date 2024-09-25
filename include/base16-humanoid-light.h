/**
 * Base16 Humanoid light 
 *
 * @author Thomas (tasmo) Friese
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

#ifndef BASE16_humanoid_light_H__
#define BASE16_humanoid_light_H__

/**
 * The Base16 Humanoid light scheme.
 *
 * @author Thomas (tasmo) Friese
 */
extern const base16_scheme base16_humanoid_light;

#endif  /* BASE16_humanoid_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_humanoid_light_IMPLEMENTATION_ONCE
#define BASE16_humanoid_light_IMPLEMENTATION_ONCE

const base16_scheme base16_humanoid_light = {
    .name = "Humanoid light",
    .base = {
        { .r = 248, .g = 248, .b = 242 },
        { .r = 239, .g = 239, .b = 233 },
        { .r = 222, .g = 222, .b = 216 },
        { .r = 192, .g = 192, .b = 189 },
        { .r = 96, .g = 97, .b = 93 },
        { .r = 35, .g = 38, .b = 41 },
        { .r = 47, .g = 51, .b = 55 },
        { .r = 7, .g = 7, .b = 8 },
        { .r = 176, .g = 21, .b = 26 },
        { .r = 255, .g = 61, .b = 0 },
        { .r = 255, .g = 182, .b = 39 },
        { .r = 56, .g = 142, .b = 60 },
        { .r = 0, .g = 142, .b = 142 },
        { .r = 0, .g = 130, .b = 201 },
        { .r = 112, .g = 15, .b = 152 },
        { .r = 178, .g = 119, .b = 1 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 248, .g = 248, .b = 242 },
        { .r = 248, .g = 248, .b = 242 },
        { .r = 176, .g = 21, .b = 26 },
        { .r = 255, .g = 182, .b = 39 },
        { .r = 56, .g = 142, .b = 60 },
        { .r = 0, .g = 142, .b = 142 },
        { .r = 0, .g = 130, .b = 201 },
        { .r = 112, .g = 15, .b = 152 }
    },
    .system = 16
};

#endif  /* BASE16_humanoid_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
