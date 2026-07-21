/**
 * Base16 Cerulean Signal Dark Low-glare cerulean interface theme with restrained neon-pink signal accents; dark compatibility palette.
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

#ifndef BASE16_cerulean_signal_dark_H__
#define BASE16_cerulean_signal_dark_H__

/**
 * The Base16 Cerulean Signal Dark scheme.
 *
 * @author Aaron Colichia (https://aaron.colichia.org/)
 */
extern const base16_scheme base16_cerulean_signal_dark;

#endif  /* BASE16_cerulean_signal_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_cerulean_signal_dark_IMPLEMENTATION_ONCE
#define BASE16_cerulean_signal_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_cerulean_signal_dark = {
    .name = "Cerulean Signal Dark",
    .base = {
        { .r = 16, .g = 23, .b = 34 },
        { .r = 19, .g = 28, .b = 41 },
        { .r = 23, .g = 58, .b = 90 },
        { .r = 143, .g = 160, .b = 181 },
        { .r = 170, .g = 184, .b = 202 },
        { .r = 220, .g = 230, .b = 242 },
        { .r = 241, .g = 246, .b = 252 },
        { .r = 247, .g = 249, .b = 252 },
        { .r = 255, .g = 138, .b = 154 },
        { .r = 245, .g = 163, .b = 92 },
        { .r = 226, .g = 200, .b = 95 },
        { .r = 112, .g = 225, .b = 176 },
        { .r = 88, .g = 217, .b = 223 },
        { .r = 125, .g = 211, .b = 255 },
        { .r = 255, .g = 116, .b = 212 },
        { .r = 213, .g = 155, .b = 125 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 16, .g = 23, .b = 34 },
        { .r = 16, .g = 23, .b = 34 },
        { .r = 255, .g = 138, .b = 154 },
        { .r = 226, .g = 200, .b = 95 },
        { .r = 112, .g = 225, .b = 176 },
        { .r = 88, .g = 217, .b = 223 },
        { .r = 125, .g = 211, .b = 255 },
        { .r = 255, .g = 116, .b = 212 }
    },
    .system = 16
};

#endif  /* BASE16_cerulean_signal_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
