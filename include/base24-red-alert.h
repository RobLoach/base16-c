/**
 * Base24 Red Alert 
 *
 * @author FredHappyface (https://github.com/fredHappyface)
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

#ifndef BASE24_red_alert_H__
#define BASE24_red_alert_H__

/**
 * The Base24 Red Alert scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_red_alert;

#endif  /* BASE24_red_alert_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_red_alert_IMPLEMENTATION_ONCE
#define BASE24_red_alert_IMPLEMENTATION_ONCE

const base16_scheme base24_red_alert = {
    .name = "Red Alert",
    .base = {
        { .r = 118, .g = 36, .b = 35 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 38, .g = 38, .b = 38 },
        { .r = 82, .g = 82, .b = 82 },
        { .r = 126, .g = 126, .b = 126 },
        { .r = 170, .g = 170, .b = 170 },
        { .r = 214, .g = 214, .b = 214 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 213, .g = 46, .b = 77 },
        { .r = 190, .g = 184, .b = 107 },
        { .r = 101, .g = 169, .b = 240 },
        { .r = 113, .g = 190, .b = 107 },
        { .r = 107, .g = 190, .b = 184 },
        { .r = 71, .g = 155, .b = 237 },
        { .r = 232, .g = 120, .b = 214 },
        { .r = 106, .g = 23, .b = 38 },

        /* Base24 */
        { .r = 25, .g = 25, .b = 25 },
        { .r = 12, .g = 12, .b = 12 },
        { .r = 224, .g = 36, .b = 83 },
        { .r = 223, .g = 221, .b = 183 },
        { .r = 175, .g = 240, .b = 139 },
        { .r = 183, .g = 223, .b = 221 },
        { .r = 101, .g = 169, .b = 240 },
        { .r = 221, .g = 183, .b = 223 }
    },
    .system = 24
};

#endif  /* BASE24_red_alert_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
