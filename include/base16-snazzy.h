/**
 * Base16 Snazzy 
 *
 * @author Chawye Hsu (https://github.com/chawyehsu), based on Hyper Snazzy Theme (https://github.com/sindresorhus/hyper-snazzy)
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

#ifndef BASE16_snazzy_H__
#define BASE16_snazzy_H__

/**
 * The Base16 Snazzy scheme.
 *
 * @author Chawye Hsu (https://github.com/chawyehsu), based on Hyper Snazzy Theme (https://github.com/sindresorhus/hyper-snazzy)
 */
extern const base16_scheme base16_snazzy;

#endif  /* BASE16_snazzy_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_snazzy_IMPLEMENTATION_ONCE
#define BASE16_snazzy_IMPLEMENTATION_ONCE

const base16_scheme base16_snazzy = {
    .name = "Snazzy",
    .base = {
        { .r = 40, .g = 42, .b = 54 },
        { .r = 52, .g = 53, .b = 62 },
        { .r = 67, .g = 69, .b = 79 },
        { .r = 120, .g = 120, .b = 126 },
        { .r = 165, .g = 165, .b = 169 },
        { .r = 226, .g = 228, .b = 229 },
        { .r = 239, .g = 240, .b = 235 },
        { .r = 241, .g = 241, .b = 240 },
        { .r = 255, .g = 92, .b = 87 },
        { .r = 255, .g = 159, .b = 67 },
        { .r = 243, .g = 249, .b = 157 },
        { .r = 90, .g = 247, .b = 142 },
        { .r = 154, .g = 237, .b = 254 },
        { .r = 87, .g = 199, .b = 255 },
        { .r = 255, .g = 106, .b = 193 },
        { .r = 178, .g = 100, .b = 60 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 40, .g = 42, .b = 54 },
        { .r = 40, .g = 42, .b = 54 },
        { .r = 255, .g = 92, .b = 87 },
        { .r = 243, .g = 249, .b = 157 },
        { .r = 90, .g = 247, .b = 142 },
        { .r = 154, .g = 237, .b = 254 },
        { .r = 87, .g = 199, .b = 255 },
        { .r = 255, .g = 106, .b = 193 }
    },
    .system = 16
};

#endif  /* BASE16_snazzy_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
