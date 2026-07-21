/**
 * Base16 Digital Rain A base16 theme inspired by The Matrix, 90s aesthetics and retro terminals.
 *
 * @author Nathan Byrd (https://github.com/cognitivegears)
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

#ifndef BASE16_digital_rain_H__
#define BASE16_digital_rain_H__

/**
 * The Base16 Digital Rain scheme.
 *
 * @author Nathan Byrd (https://github.com/cognitivegears)
 */
extern const base16_scheme base16_digital_rain;

#endif  /* BASE16_digital_rain_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_digital_rain_IMPLEMENTATION_ONCE
#define BASE16_digital_rain_IMPLEMENTATION_ONCE

const base16_scheme base16_digital_rain = {
    .name = "Digital Rain",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 74, .g = 128, .b = 108 },
        { .r = 74, .g = 141, .b = 126 },
        { .r = 124, .g = 141, .b = 124 },
        { .r = 145, .g = 152, .b = 147 },
        { .r = 0, .g = 255, .b = 0 },
        { .r = 196, .g = 206, .b = 196 },
        { .r = 216, .g = 226, .b = 220 },
        { .r = 200, .g = 90, .b = 70 },
        { .r = 200, .g = 100, .b = 40 },
        { .r = 166, .g = 122, .b = 80 },
        { .r = 100, .g = 200, .b = 60 },
        { .r = 70, .g = 140, .b = 120 },
        { .r = 84, .g = 130, .b = 175 },
        { .r = 148, .g = 114, .b = 180 },
        { .r = 179, .g = 124, .b = 94 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 0, .g = 0, .b = 0 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 200, .g = 90, .b = 70 },
        { .r = 166, .g = 122, .b = 80 },
        { .r = 100, .g = 200, .b = 60 },
        { .r = 70, .g = 140, .b = 120 },
        { .r = 84, .g = 130, .b = 175 },
        { .r = 148, .g = 114, .b = 180 }
    },
    .system = 16
};

#endif  /* BASE16_digital_rain_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
