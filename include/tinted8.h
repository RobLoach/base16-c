/**
 * base16-c: Tinted8 header includes for C.
 * https://github.com/RobLoach/base16-c
 *
 * @author Rob Loach (https://github.com/RobLoach)
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

#ifndef TINTED8_C_H__
#define TINTED8_C_H__

#include "tinted8-catppuccin-latte.h" /* light */
#include "tinted8-catppuccin-mocha.h" /* dark */
#include "tinted8-gruvbox-dark.h" /* dark */
#include "tinted8-nord.h" /* dark */

/**
 * The total number of schemes available in tinted8_schemes.
 */
enum {
    TINTED8_COUNT = 0
    + 1
    + 1
    + 1
    + 1
};

/**
 * Pointers to every available Tinted8 scheme, in the same order as the
 * includes above.
 *
 * @code
 * int i;
 * for (i = 0; i < TINTED8_COUNT; i++) {
 *     const tinted8_scheme* scheme = tinted8_schemes[i];
 *     printf("%s\n", scheme->name);
 * }
 * @endcode
 */
extern const tinted8_scheme* const tinted8_schemes[TINTED8_COUNT];

#endif /* TINTED8_C_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef TINTED8_LIST_IMPLEMENTATION_ONCE
#define TINTED8_LIST_IMPLEMENTATION_ONCE

/*
 * Each scheme header ends with a section guarded by TINTED8_SCHEMES_ARRAY_ENTRY
 * that expands to "&tinted8_<slug>," and nothing else. Re-including the
 * headers here therefore fills the array; every other part of the headers is
 * skipped by their include guards.
 */
const tinted8_scheme* const tinted8_schemes[TINTED8_COUNT] = {
#define TINTED8_SCHEMES_ARRAY_ENTRY
#include "tinted8-catppuccin-latte.h"
#include "tinted8-catppuccin-mocha.h"
#include "tinted8-gruvbox-dark.h"
#include "tinted8-nord.h"
#undef TINTED8_SCHEMES_ARRAY_ENTRY
};

#endif /* TINTED8_LIST_IMPLEMENTATION_ONCE */
#endif /* TINTED_IMPLEMENTATION */
