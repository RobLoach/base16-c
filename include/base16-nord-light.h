/**
 * Base16 Nord Light 
 *
 * @author threddast, based on fuxialexander&#39;s doom-nord-light-theme (Doom Emacs)
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

#ifndef BASE16_nord_light_H__
#define BASE16_nord_light_H__

/**
 * The Base16 Nord Light scheme.
 *
 * @author threddast, based on fuxialexander&#39;s doom-nord-light-theme (Doom Emacs)
 */
extern const base16_scheme base16_nord_light;

#endif  /* BASE16_nord_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_nord_light_IMPLEMENTATION_ONCE
#define BASE16_nord_light_IMPLEMENTATION_ONCE

const base16_scheme base16_nord_light = {
    .name = "Nord Light",
    .base = {
        { .r = 229, .g = 233, .b = 240 },
        { .r = 194, .g = 208, .b = 231 },
        { .r = 184, .g = 197, .b = 219 },
        { .r = 174, .g = 186, .b = 207 },
        { .r = 96, .g = 114, .b = 140 },
        { .r = 46, .g = 52, .b = 64 },
        { .r = 59, .g = 66, .b = 82 },
        { .r = 41, .g = 131, .b = 141 },
        { .r = 153, .g = 50, .b = 75 },
        { .r = 172, .g = 68, .b = 38 },
        { .r = 154, .g = 117, .b = 0 },
        { .r = 79, .g = 137, .b = 76 },
        { .r = 57, .g = 142, .b = 172 },
        { .r = 59, .g = 110, .b = 168 },
        { .r = 151, .g = 54, .b = 91 },
        { .r = 82, .g = 114, .b = 175 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 229, .g = 233, .b = 240 },
        { .r = 229, .g = 233, .b = 240 },
        { .r = 153, .g = 50, .b = 75 },
        { .r = 154, .g = 117, .b = 0 },
        { .r = 79, .g = 137, .b = 76 },
        { .r = 57, .g = 142, .b = 172 },
        { .r = 59, .g = 110, .b = 168 },
        { .r = 151, .g = 54, .b = 91 }
    },
    .system = 16
};

#endif  /* BASE16_nord_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
