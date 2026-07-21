/**
 * Base16 Penumbra Light A mathematically balanced colour scheme constructed in a perceptually uniform colour space, by Neal McKee. https://github.com/nealmckee/penumbra
 *
 * @author Zachary Weiss (https://github.com/zacharyweiss)
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

#ifndef BASE16_penumbra_light_H__
#define BASE16_penumbra_light_H__

/**
 * The Base16 Penumbra Light scheme.
 *
 * @author Zachary Weiss (https://github.com/zacharyweiss)
 */
extern const base16_scheme base16_penumbra_light;

#endif  /* BASE16_penumbra_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_penumbra_light_IMPLEMENTATION_ONCE
#define BASE16_penumbra_light_IMPLEMENTATION_ONCE

const base16_scheme base16_penumbra_light = {
    .name = "Penumbra Light",
    .base = {
        { .r = 255, .g = 253, .b = 251 },
        { .r = 255, .g = 247, .b = 237 },
        { .r = 242, .g = 230, .b = 212 },
        { .r = 190, .g = 190, .b = 190 },
        { .r = 143, .g = 143, .b = 143 },
        { .r = 99, .g = 99, .b = 99 },
        { .r = 48, .g = 51, .b = 56 },
        { .r = 36, .g = 39, .b = 43 },
        { .r = 202, .g = 115, .b = 108 },
        { .r = 186, .g = 130, .b = 58 },
        { .r = 141, .g = 151, .b = 65 },
        { .r = 71, .g = 164, .b = 119 },
        { .r = 0, .g = 162, .b = 175 },
        { .r = 87, .g = 148, .b = 208 },
        { .r = 148, .g = 129, .b = 204 },
        { .r = 188, .g = 115, .b = 164 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 255, .g = 253, .b = 251 },
        { .r = 255, .g = 253, .b = 251 },
        { .r = 202, .g = 115, .b = 108 },
        { .r = 141, .g = 151, .b = 65 },
        { .r = 71, .g = 164, .b = 119 },
        { .r = 0, .g = 162, .b = 175 },
        { .r = 87, .g = 148, .b = 208 },
        { .r = 148, .g = 129, .b = 204 }
    },
    .system = 16
};

#endif  /* BASE16_penumbra_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
