# base16-c

C Headers for [Base16] and [Base24] color schemes, for use in [C](https://en.wikipedia.org/wiki/C_(programming_language)) or [C++](https://en.wikipedia.org/wiki/C%2B%2B).

## Usage

``` c
#include <stdio.h>

#define TINTED_IMPLEMENTATION
#include "base24-dracula.h"

int main() {
    printf("Scheme: %s\n", base24_dracula.name);
    printf("  R: %d\n", base24_dracula.base[2].r);
    printf("  G: %d\n", base24_dracula.base[2].g);
    printf("  B: %d\n", base24_dracula.base[2].b);

    // Scheme: Dracula
    //   R: 68
    //   G: 71
    //   B: 90

    return 0;
}
```

Every scheme provides a `tinted_scheme` structure, made up of `tinted_color`
entries. Define `TINTED_IMPLEMENTATION` in one compilation unit before
including the headers to compile the scheme data, or define
`TINTED_HEADER_ONLY` to only have the declarations available.

To include every Base16 and Base24 scheme at once, use the aggregate
[`include/tinted.h`](include/tinted.h) header:

``` c
#define TINTED_IMPLEMENTATION
#include "tinted.h"
```

`tinted.h` also provides `tinted_schemes`, an array of pointers to every
scheme, along with a `TINTED_COUNT` constant, to allow iterating through all
of the available schemes:

``` c
#include <stdio.h>

#define TINTED_IMPLEMENTATION
#include "tinted.h"

int main() {
    int i;
    for (i = 0; i < TINTED_COUNT; i++) {
        const tinted_scheme* scheme = tinted_schemes[i];
        printf("%s\n", scheme->name);
    }

    return 0;
}
```

### Using only specific schemes

Scheme data is only compiled for the headers you actually include, so to keep
binary size down, skip `tinted.h` and include just the schemes you want.
`TINTED_IMPLEMENTATION` then only adds the implementation for those schemes —
this compiles the color data for Dracula and Nord, and nothing else:

``` c
#define TINTED_IMPLEMENTATION
#include "base24-dracula.h"
#include "base16-nord.h"
```

In a project with multiple compilation units, define `TINTED_IMPLEMENTATION`
before the includes in exactly one `.c` file; every other file includes the
same headers without it and links against that one copy of the data.

## Tinted8

[Tinted8] is a newer scheme system from Tinted Theming, built around eight
terminal colors, each with `normal`, `bright` and `dim` variants (plus derived
`orange`, `gray` and `brown` groups). Every Tinted8 scheme provides a
`tinted8_scheme` structure with named `tinted8_color_group` fields:

``` c
#include <stdio.h>

#define TINTED_IMPLEMENTATION
#include "tinted8-gruvbox-dark.h"

int main() {
    printf("Scheme: %s\n", tinted8_gruvbox_dark.name);
    printf("  R: %d\n", tinted8_gruvbox_dark.red.bright.r);
    printf("  G: %d\n", tinted8_gruvbox_dark.red.bright.g);
    printf("  B: %d\n", tinted8_gruvbox_dark.red.bright.b);

    // Scheme: Gruvbox Dark
    //   R: 251
    //   G: 73
    //   B: 52

    return 0;
}
```

The aggregate [`include/tinted8.h`](include/tinted8.h) header includes every
Tinted8 scheme, along with a `tinted8_schemes` array and a `TINTED8_COUNT`
constant, mirroring `tinted.h`. Note that only a handful of Tinted8 schemes
exist upstream so far.

## Contributing

See [`CONTRIBUTING.md`], which contains building and contribution
instructions.

[base16]: https://github.com/tinted-theming/home
[base24]: https://github.com/tinted-theming/base24/
[tinted8]: https://github.com/tinted-theming/schemes/tree/spec-0.11/tinted8
[xfce4-terminal]: https://docs.xfce.org/apps/terminal/start
[`CONTRIBUTING.md`]: CONTRIBUTING.md
