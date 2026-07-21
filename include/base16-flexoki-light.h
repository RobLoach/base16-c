/**
 * Base16 Flexoki Light Inky color scheme for prose and code
 *
 * @author Steph Ango (https://github.com/kepano/flexoki)
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

#ifndef BASE16_flexoki_light_H__
#define BASE16_flexoki_light_H__

/**
 * The Base16 Flexoki Light scheme.
 *
 * @author Steph Ango (https://github.com/kepano/flexoki)
 */
extern const base16_scheme base16_flexoki_light;

#endif  /* BASE16_flexoki_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_flexoki_light_IMPLEMENTATION_ONCE
#define BASE16_flexoki_light_IMPLEMENTATION_ONCE

const base16_scheme base16_flexoki_light = {
    .name = "Flexoki Light",
    .base = {
        { .r = 255, .g = 252, .b = 240 },
        { .r = 242, .g = 240, .b = 229 },
        { .r = 230, .g = 228, .b = 217 },
        { .r = 206, .g = 205, .b = 195 },
        { .r = 159, .g = 157, .b = 150 },
        { .r = 64, .g = 62, .b = 60 },
        { .r = 40, .g = 39, .b = 38 },
        { .r = 16, .g = 15, .b = 15 },
        { .r = 175, .g = 48, .b = 41 },
        { .r = 188, .g = 82, .b = 21 },
        { .r = 173, .g = 131, .b = 1 },
        { .r = 102, .g = 128, .b = 11 },
        { .r = 36, .g = 131, .b = 123 },
        { .r = 32, .g = 94, .b = 166 },
        { .r = 94, .g = 64, .b = 157 },
        { .r = 160, .g = 47, .b = 111 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 255, .g = 252, .b = 240 },
        { .r = 255, .g = 252, .b = 240 },
        { .r = 175, .g = 48, .b = 41 },
        { .r = 173, .g = 131, .b = 1 },
        { .r = 102, .g = 128, .b = 11 },
        { .r = 36, .g = 131, .b = 123 },
        { .r = 32, .g = 94, .b = 166 },
        { .r = 94, .g = 64, .b = 157 }
    },
    .system = 16
};

#endif  /* BASE16_flexoki_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
