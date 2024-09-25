/**
 * Base16 Circus 
 *
 * @author Stephan Boyer (https://github.com/stepchowfun) and Esther Wang (https://github.com/ewang12)
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

#ifndef BASE16_circus_H__
#define BASE16_circus_H__

/**
 * The Base16 Circus scheme.
 *
 * @author Stephan Boyer (https://github.com/stepchowfun) and Esther Wang (https://github.com/ewang12)
 */
extern const base16_scheme base16_circus;

#endif  /* BASE16_circus_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_circus_IMPLEMENTATION_ONCE
#define BASE16_circus_IMPLEMENTATION_ONCE

const base16_scheme base16_circus = {
    .name = "Circus",
    .base = {
        { .r = 25, .g = 25, .b = 25 },
        { .r = 32, .g = 32, .b = 32 },
        { .r = 48, .g = 48, .b = 48 },
        { .r = 95, .g = 90, .b = 96 },
        { .r = 80, .g = 80, .b = 80 },
        { .r = 167, .g = 167, .b = 167 },
        { .r = 128, .g = 128, .b = 128 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 220, .g = 101, .b = 125 },
        { .r = 75, .g = 177, .b = 167 },
        { .r = 195, .g = 186, .b = 99 },
        { .r = 132, .g = 185, .b = 124 },
        { .r = 75, .g = 177, .b = 167 },
        { .r = 99, .g = 158, .b = 228 },
        { .r = 184, .g = 136, .b = 226 },
        { .r = 184, .g = 136, .b = 226 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 25, .g = 25, .b = 25 },
        { .r = 25, .g = 25, .b = 25 },
        { .r = 220, .g = 101, .b = 125 },
        { .r = 195, .g = 186, .b = 99 },
        { .r = 132, .g = 185, .b = 124 },
        { .r = 75, .g = 177, .b = 167 },
        { .r = 99, .g = 158, .b = 228 },
        { .r = 184, .g = 136, .b = 226 }
    },
    .system = 16
};

#endif  /* BASE16_circus_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
