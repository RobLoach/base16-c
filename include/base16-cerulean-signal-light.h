/**
 * Base16 Cerulean Signal Light Low-glare cerulean interface theme with restrained neon-pink signal accents; light compatibility palette.
 *
 * @author Aaron Colichia (https://aaron.colichia.org/)
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

#ifndef BASE16_cerulean_signal_light_H__
#define BASE16_cerulean_signal_light_H__

/**
 * The Base16 Cerulean Signal Light scheme.
 *
 * @author Aaron Colichia (https://aaron.colichia.org/)
 */
extern const base16_scheme base16_cerulean_signal_light;

#endif  /* BASE16_cerulean_signal_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_cerulean_signal_light_IMPLEMENTATION_ONCE
#define BASE16_cerulean_signal_light_IMPLEMENTATION_ONCE

const base16_scheme base16_cerulean_signal_light = {
    .name = "Cerulean Signal Light",
    .base = {
        { .r = 247, .g = 249, .b = 252 },
        { .r = 238, .g = 244, .b = 251 },
        { .r = 221, .g = 231, .b = 241 },
        { .r = 99, .g = 114, .b = 135 },
        { .r = 86, .g = 101, .b = 121 },
        { .r = 35, .g = 43, .b = 56 },
        { .r = 32, .g = 43, .b = 58 },
        { .r = 20, .g = 29, .b = 42 },
        { .r = 180, .g = 35, .b = 61 },
        { .r = 154, .g = 79, .b = 0 },
        { .r = 111, .g = 99, .b = 0 },
        { .r = 23, .g = 121, .b = 94 },
        { .r = 0, .g = 114, .b = 126 },
        { .r = 0, .g = 111, .b = 168 },
        { .r = 160, .g = 0, .b = 125 },
        { .r = 122, .g = 78, .b = 60 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 247, .g = 249, .b = 252 },
        { .r = 247, .g = 249, .b = 252 },
        { .r = 180, .g = 35, .b = 61 },
        { .r = 111, .g = 99, .b = 0 },
        { .r = 23, .g = 121, .b = 94 },
        { .r = 0, .g = 114, .b = 126 },
        { .r = 0, .g = 111, .b = 168 },
        { .r = 160, .g = 0, .b = 125 }
    },
    .system = 16
};

#endif  /* BASE16_cerulean_signal_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
