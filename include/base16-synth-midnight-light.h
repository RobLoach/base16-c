/**
 * Base16 Synth Midnight Terminal Light 
 *
 * @author Michaël Ball (http://github.com/michael-ball/)
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

#ifndef BASE16_synth_midnight_light_H__
#define BASE16_synth_midnight_light_H__

/**
 * The Base16 Synth Midnight Terminal Light scheme.
 *
 * @author Michaël Ball (http://github.com/michael-ball/)
 */
extern const base16_scheme base16_synth_midnight_light;

#endif  /* BASE16_synth_midnight_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_synth_midnight_light_IMPLEMENTATION_ONCE
#define BASE16_synth_midnight_light_IMPLEMENTATION_ONCE

const base16_scheme base16_synth_midnight_light = {
    .name = "Synth Midnight Terminal Light",
    .base = {
        { .r = 221, .g = 223, .b = 224 },
        { .r = 207, .g = 209, .b = 210 },
        { .r = 193, .g = 195, .b = 196 },
        { .r = 163, .g = 165, .b = 166 },
        { .r = 71, .g = 72, .b = 73 },
        { .r = 40, .g = 41, .b = 42 },
        { .r = 26, .g = 27, .b = 28 },
        { .r = 5, .g = 6, .b = 8 },
        { .r = 181, .g = 59, .b = 80 },
        { .r = 234, .g = 119, .b = 13 },
        { .r = 201, .g = 211, .b = 100 },
        { .r = 6, .g = 234, .b = 97 },
        { .r = 66, .g = 255, .b = 249 },
        { .r = 3, .g = 174, .b = 255 },
        { .r = 234, .g = 92, .b = 226 },
        { .r = 205, .g = 99, .b = 32 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 221, .g = 223, .b = 224 },
        { .r = 221, .g = 223, .b = 224 },
        { .r = 181, .g = 59, .b = 80 },
        { .r = 201, .g = 211, .b = 100 },
        { .r = 6, .g = 234, .b = 97 },
        { .r = 66, .g = 255, .b = 249 },
        { .r = 3, .g = 174, .b = 255 },
        { .r = 234, .g = 92, .b = 226 }
    },
    .system = 16
};

#endif  /* BASE16_synth_midnight_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
