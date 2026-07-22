/**
 * Base24 Lichen Chartreuse Dark Low-glare chartreuse theme with green-gray neutrals; dark compatibility palette.
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

#ifndef BASE24_lichen_chartreuse_dark_H__
#define BASE24_lichen_chartreuse_dark_H__

/**
 * The Base24 Lichen Chartreuse Dark scheme.
 *
 * @author Aaron Colichia (https://aaron.colichia.org/)
 */
extern const base16_scheme base24_lichen_chartreuse_dark;

#endif  /* BASE24_lichen_chartreuse_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_lichen_chartreuse_dark_IMPLEMENTATION_ONCE
#define BASE24_lichen_chartreuse_dark_IMPLEMENTATION_ONCE

const base16_scheme base24_lichen_chartreuse_dark = {
    .name = "Lichen Chartreuse Dark",
    .base = {
        { .r = 21, .g = 22, .b = 19 },
        { .r = 28, .g = 30, .b = 26 },
        { .r = 62, .g = 81, .b = 35 },
        { .r = 137, .g = 146, .b = 130 },
        { .r = 160, .g = 165, .b = 152 },
        { .r = 224, .g = 229, .b = 218 },
        { .r = 236, .g = 239, .b = 231 },
        { .r = 252, .g = 252, .b = 250 },
        { .r = 226, .g = 139, .b = 130 },
        { .r = 213, .g = 173, .b = 115 },
        { .r = 178, .g = 208, .b = 132 },
        { .r = 131, .g = 189, .b = 165 },
        { .r = 156, .g = 198, .b = 201 },
        { .r = 120, .g = 173, .b = 196 },
        { .r = 191, .g = 166, .b = 212 },
        { .r = 210, .g = 160, .b = 178 },

        /* Base24 */
        { .r = 16, .g = 17, .b = 14 },
        { .r = 10, .g = 11, .b = 9 },
        { .r = 226, .g = 139, .b = 130 },
        { .r = 213, .g = 173, .b = 115 },
        { .r = 207, .g = 228, .b = 174 },
        { .r = 151, .g = 201, .b = 201 },
        { .r = 163, .g = 184, .b = 194 },
        { .r = 210, .g = 160, .b = 178 }
    },
    .system = 24
};

#endif  /* BASE24_lichen_chartreuse_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
