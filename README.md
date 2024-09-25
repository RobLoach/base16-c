# base16-c

C Headers for [Base16] and [Base24] color schemes, for use in [C](https://en.wikipedia.org/wiki/C_(programming_language)) or [C++](https://en.wikipedia.org/wiki/C%2B%2B).

## Usage

``` c
#include <stdio.h>

#define BASE16_IMPLEMENTATION
#include "base24-dracula.h"

int main() {
    printf("Scheme: %s\n", base24_dracula.name);
    printf("  R: %d\n", base24_dracula.base[2].r);
    printf("  G: %d\n", base24_dracula.base[2].g);
    printf("  B: %d\n", base24_dracula.base[2].b);

    // Scheme: Dracula
    //   R: 68
    //   G: 52
    //   R: 71

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
