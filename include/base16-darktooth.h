/**
 * Base16 Darktooth 
 *
 * @author Jason Milkins (https://github.com/jasonm23)
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

#ifndef BASE16_darktooth_H__
#define BASE16_darktooth_H__

/**
 * The Base16 Darktooth scheme.
 *
 * @author Jason Milkins (https://github.com/jasonm23)
 */
extern const base16_scheme base16_darktooth;

#endif  /* BASE16_darktooth_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_darktooth_IMPLEMENTATION_ONCE
#define BASE16_darktooth_IMPLEMENTATION_ONCE

const base16_scheme base16_darktooth = {
    .name = "Darktooth",
    .base = {
        { .r = 29, .g = 32, .b = 33 },
        { .r = 50, .g = 48, .b = 47 },
        { .r = 80, .g = 73, .b = 69 },
        { .r = 102, .g = 92, .b = 84 },
        { .r = 146, .g = 131, .b = 116 },
        { .r = 168, .g = 153, .b = 132 },
        { .r = 213, .g = 196, .b = 161 },
        { .r = 253, .g = 244, .b = 193 },
        { .r = 251, .g = 84, .b = 63 },
        { .r = 254, .g = 134, .b = 37 },
        { .r = 250, .g = 192, .b = 59 },
        { .r = 149, .g = 192, .b = 133 },
        { .r = 139, .g = 165, .b = 155 },
        { .r = 13, .g = 102, .b = 120 },
        { .r = 143, .g = 70, .b = 115 },
        { .r = 168, .g = 115, .b = 34 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 29, .g = 32, .b = 33 },
        { .r = 29, .g = 32, .b = 33 },
        { .r = 251, .g = 84, .b = 63 },
        { .r = 250, .g = 192, .b = 59 },
        { .r = 149, .g = 192, .b = 133 },
        { .r = 139, .g = 165, .b = 155 },
        { .r = 13, .g = 102, .b = 120 },
        { .r = 143, .g = 70, .b = 115 }
    },
    .system = 16
};

#endif  /* BASE16_darktooth_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
