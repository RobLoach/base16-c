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

## Contributing

See [`CONTRIBUTING.md`], which contains building and contribution
instructions.

[base16]: https://github.com/tinted-theming/home
[base24]: https://github.com/tinted-theming/base24/
[xfce4-terminal]: https://docs.xfce.org/apps/terminal/start
[`CONTRIBUTING.md`]: CONTRIBUTING.md
