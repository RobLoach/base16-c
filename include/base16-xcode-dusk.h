/**
 * Base16 XCode Dusk 
 *
 * @author Elsa Gonsiorowski (https://github.com/gonsie)
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

#ifndef BASE16_xcode_dusk_H__
#define BASE16_xcode_dusk_H__

/**
 * The Base16 XCode Dusk scheme.
 *
 * @author Elsa Gonsiorowski (https://github.com/gonsie)
 */
extern const base16_scheme base16_xcode_dusk;

#endif  /* BASE16_xcode_dusk_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_xcode_dusk_IMPLEMENTATION_ONCE
#define BASE16_xcode_dusk_IMPLEMENTATION_ONCE

const base16_scheme base16_xcode_dusk = {
    .name = "XCode Dusk",
    .base = {
        { .r = 40, .g = 43, .b = 53 },
        { .r = 61, .g = 64, .b = 72 },
        { .r = 83, .g = 85, .b = 93 },
        { .r = 104, .g = 106, .b = 113 },
        { .r = 126, .g = 128, .b = 134 },
        { .r = 147, .g = 149, .b = 153 },
        { .r = 169, .g = 170, .b = 174 },
        { .r = 190, .g = 191, .b = 194 },
        { .r = 178, .g = 24, .b = 137 },
        { .r = 120, .g = 109, .b = 197 },
        { .r = 67, .g = 130, .b = 136 },
        { .r = 223, .g = 0, .b = 2 },
        { .r = 0, .g = 160, .b = 190 },
        { .r = 121, .g = 14, .b = 173 },
        { .r = 178, .g = 24, .b = 137 },
        { .r = 199, .g = 124, .b = 72 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 40, .g = 43, .b = 53 },
        { .r = 40, .g = 43, .b = 53 },
        { .r = 178, .g = 24, .b = 137 },
        { .r = 67, .g = 130, .b = 136 },
        { .r = 223, .g = 0, .b = 2 },
        { .r = 0, .g = 160, .b = 190 },
        { .r = 121, .g = 14, .b = 173 },
        { .r = 178, .g = 24, .b = 137 }
    },
    .system = 16
};

#endif  /* BASE16_xcode_dusk_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
