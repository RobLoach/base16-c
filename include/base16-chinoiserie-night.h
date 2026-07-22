/**
 * Base16 Chinoiserie Night A variant of Tomorrow scheme from https://github.com/stonebuddha/base16-chinoiserie-scheme
 *
 * @author Di Wang (https://cs.cmu.edu/~diw3)
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

#ifndef BASE16_chinoiserie_night_H__
#define BASE16_chinoiserie_night_H__

/**
 * The Base16 Chinoiserie Night scheme.
 *
 * @author Di Wang (https://cs.cmu.edu/~diw3)
 */
extern const base16_scheme base16_chinoiserie_night;

#endif  /* BASE16_chinoiserie_night_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_chinoiserie_night_IMPLEMENTATION_ONCE
#define BASE16_chinoiserie_night_IMPLEMENTATION_ONCE

const base16_scheme base16_chinoiserie_night = {
    .name = "Chinoiserie Night",
    .base = {
        { .r = 29, .g = 29, .b = 29 },
        { .r = 40, .g = 40, .b = 40 },
        { .r = 55, .g = 55, .b = 55 },
        { .r = 145, .g = 128, .b = 114 },
        { .r = 189, .g = 174, .b = 173 },
        { .r = 196, .g = 203, .b = 207 },
        { .r = 238, .g = 231, .b = 242 },
        { .r = 255, .g = 254, .b = 249 },
        { .r = 240, .g = 124, .b = 130 },
        { .r = 244, .g = 168, .b = 58 },
        { .r = 244, .g = 206, .b = 105 },
        { .r = 178, .g = 207, .b = 135 },
        { .r = 176, .g = 213, .b = 223 },
        { .r = 143, .g = 178, .b = 201 },
        { .r = 190, .g = 157, .b = 185 },
        { .r = 184, .g = 148, .b = 133 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 29, .g = 29, .b = 29 },
        { .r = 29, .g = 29, .b = 29 },
        { .r = 240, .g = 124, .b = 130 },
        { .r = 244, .g = 206, .b = 105 },
        { .r = 178, .g = 207, .b = 135 },
        { .r = 176, .g = 213, .b = 223 },
        { .r = 143, .g = 178, .b = 201 },
        { .r = 190, .g = 157, .b = 185 }
    },
    .system = 16
};

#endif  /* BASE16_chinoiserie_night_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
