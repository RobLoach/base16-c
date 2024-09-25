/**
 * Base16 Still Alive 
 *
 * @author Derrick McKee (derrick.mckee@gmail.com)
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

#ifndef BASE16_still_alive_H__
#define BASE16_still_alive_H__

/**
 * The Base16 Still Alive scheme.
 *
 * @author Derrick McKee (derrick.mckee@gmail.com)
 */
extern const base16_scheme base16_still_alive;

#endif  /* BASE16_still_alive_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_still_alive_IMPLEMENTATION_ONCE
#define BASE16_still_alive_IMPLEMENTATION_ONCE

const base16_scheme base16_still_alive = {
    .name = "Still Alive",
    .base = {
        { .r = 240, .g = 240, .b = 240 },
        { .r = 240, .g = 216, .b = 72 },
        { .r = 255, .g = 240, .b = 24 },
        { .r = 240, .g = 24, .b = 24 },
        { .r = 240, .g = 0, .b = 0 },
        { .r = 216, .g = 0, .b = 0 },
        { .r = 72, .g = 144, .b = 0 },
        { .r = 48, .g = 168, .b = 96 },
        { .r = 72, .g = 120, .b = 48 },
        { .r = 24, .g = 48, .b = 72 },
        { .r = 66, .g = 99, .b = 149 },
        { .r = 92, .g = 92, .b = 106 },
        { .r = 44, .g = 60, .b = 87 },
        { .r = 0, .g = 24, .b = 120 },
        { .r = 144, .g = 0, .b = 0 },
        { .r = 20, .g = 12, .b = 13 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 240, .g = 240, .b = 240 },
        { .r = 240, .g = 240, .b = 240 },
        { .r = 72, .g = 120, .b = 48 },
        { .r = 66, .g = 99, .b = 149 },
        { .r = 92, .g = 92, .b = 106 },
        { .r = 44, .g = 60, .b = 87 },
        { .r = 0, .g = 24, .b = 120 },
        { .r = 144, .g = 0, .b = 0 }
    },
    .system = 16
};

#endif  /* BASE16_still_alive_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
