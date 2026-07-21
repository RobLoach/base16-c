/**
 * Base16 Ascendancy The Ascendancy colour scheme aims to provide a comfortable spectrum of
background and foreground shades complimented by soft but regal colours. The
palette has a small bias towards golden colours without creating a sense of
washed out overexposure.

 *
 * @author EmergentMind (https://github.com/emergentmind/ascendancy-scheme)
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

#ifndef BASE16_ascendancy_H__
#define BASE16_ascendancy_H__

/**
 * The Base16 Ascendancy scheme.
 *
 * @author EmergentMind (https://github.com/emergentmind/ascendancy-scheme)
 */
extern const base16_scheme base16_ascendancy;

#endif  /* BASE16_ascendancy_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_ascendancy_IMPLEMENTATION_ONCE
#define BASE16_ascendancy_IMPLEMENTATION_ONCE

const base16_scheme base16_ascendancy = {
    .name = "Ascendancy",
    .base = {
        { .r = 40, .g = 40, .b = 40 },
        { .r = 33, .g = 47, .b = 61 },
        { .r = 80, .g = 73, .b = 69 },
        { .r = 146, .g = 131, .b = 116 },
        { .r = 189, .g = 174, .b = 147 },
        { .r = 213, .g = 199, .b = 161 },
        { .r = 235, .g = 219, .b = 178 },
        { .r = 251, .g = 241, .b = 199 },
        { .r = 208, .g = 80, .b = 0 },
        { .r = 254, .g = 128, .b = 25 },
        { .r = 255, .g = 204, .b = 27 },
        { .r = 184, .g = 187, .b = 38 },
        { .r = 143, .g = 63, .b = 113 },
        { .r = 69, .g = 133, .b = 136 },
        { .r = 250, .g = 189, .b = 47 },
        { .r = 181, .g = 155, .b = 77 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 40, .g = 40, .b = 40 },
        { .r = 40, .g = 40, .b = 40 },
        { .r = 208, .g = 80, .b = 0 },
        { .r = 255, .g = 204, .b = 27 },
        { .r = 184, .g = 187, .b = 38 },
        { .r = 143, .g = 63, .b = 113 },
        { .r = 69, .g = 133, .b = 136 },
        { .r = 250, .g = 189, .b = 47 }
    },
    .system = 16
};

#endif  /* BASE16_ascendancy_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
