/**
 * Base16 Ayu Light 
 *
 * @author Tinted Theming (https://github.com/tinted-theming), Ayu Theme (https://github.com/ayu-theme)
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

#ifndef BASE16_ayu_light_H__
#define BASE16_ayu_light_H__

/**
 * The Base16 Ayu Light scheme.
 *
 * @author Tinted Theming (https://github.com/tinted-theming), Ayu Theme (https://github.com/ayu-theme)
 */
extern const base16_scheme base16_ayu_light;

#endif  /* BASE16_ayu_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_ayu_light_IMPLEMENTATION_ONCE
#define BASE16_ayu_light_IMPLEMENTATION_ONCE

const base16_scheme base16_ayu_light = {
    .name = "Ayu Light",
    .base = {
        { .r = 248, .g = 249, .b = 250 },
        { .r = 237, .g = 239, .b = 241 },
        { .r = 210, .g = 212, .b = 216 },
        { .r = 160, .g = 166, .b = 172 },
        { .r = 138, .g = 145, .b = 153 },
        { .r = 92, .g = 97, .b = 102 },
        { .r = 78, .g = 82, .b = 87 },
        { .r = 64, .g = 68, .b = 71 },
        { .r = 240, .g = 113, .b = 113 },
        { .r = 250, .g = 141, .b = 62 },
        { .r = 242, .g = 174, .b = 73 },
        { .r = 108, .g = 191, .b = 73 },
        { .r = 76, .g = 191, .b = 153 },
        { .r = 57, .g = 158, .b = 230 },
        { .r = 163, .g = 122, .b = 204 },
        { .r = 230, .g = 186, .b = 126 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 248, .g = 249, .b = 250 },
        { .r = 248, .g = 249, .b = 250 },
        { .r = 240, .g = 113, .b = 113 },
        { .r = 242, .g = 174, .b = 73 },
        { .r = 108, .g = 191, .b = 73 },
        { .r = 76, .g = 191, .b = 153 },
        { .r = 57, .g = 158, .b = 230 },
        { .r = 163, .g = 122, .b = 204 }
    },
    .system = 16
};

#endif  /* BASE16_ayu_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
