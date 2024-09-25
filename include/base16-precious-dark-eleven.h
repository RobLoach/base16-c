/**
 * Base16 Precious Dark Eleven 
 *
 * @author 4lex4 &lt;4lex49@zoho.com&gt;
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

#ifndef BASE16_precious_dark_eleven_H__
#define BASE16_precious_dark_eleven_H__

/**
 * The Base16 Precious Dark Eleven scheme.
 *
 * @author 4lex4 &lt;4lex49@zoho.com&gt;
 */
extern const base16_scheme base16_precious_dark_eleven;

#endif  /* BASE16_precious_dark_eleven_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_precious_dark_eleven_IMPLEMENTATION_ONCE
#define BASE16_precious_dark_eleven_IMPLEMENTATION_ONCE

const base16_scheme base16_precious_dark_eleven = {
    .name = "Precious Dark Eleven",
    .base = {
        { .r = 28, .g = 30, .b = 32 },
        { .r = 41, .g = 43, .b = 45 },
        { .r = 55, .g = 57, .b = 58 },
        { .r = 133, .g = 133, .b = 133 },
        { .r = 168, .g = 168, .b = 167 },
        { .r = 184, .g = 183, .b = 182 },
        { .r = 184, .g = 183, .b = 182 },
        { .r = 184, .g = 183, .b = 182 },
        { .r = 255, .g = 135, .b = 130 },
        { .r = 234, .g = 151, .b = 85 },
        { .r = 208, .g = 165, .b = 67 },
        { .r = 149, .g = 182, .b = 88 },
        { .r = 66, .g = 189, .b = 167 },
        { .r = 104, .g = 176, .b = 238 },
        { .r = 183, .g = 153, .b = 254 },
        { .r = 243, .g = 130, .b = 216 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 28, .g = 30, .b = 32 },
        { .r = 28, .g = 30, .b = 32 },
        { .r = 255, .g = 135, .b = 130 },
        { .r = 208, .g = 165, .b = 67 },
        { .r = 149, .g = 182, .b = 88 },
        { .r = 66, .g = 189, .b = 167 },
        { .r = 104, .g = 176, .b = 238 },
        { .r = 183, .g = 153, .b = 254 }
    },
    .system = 16
};

#endif  /* BASE16_precious_dark_eleven_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
