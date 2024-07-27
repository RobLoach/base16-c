# base16-h

C Headers for [base16] color schemes.

## Usage

``` c
#include <stdio.h>

#define BASE16_IMPLEMENTATION
#include "base16-tomorrow.h"

int main() {
    printf("Base16 %s\n", base16_tomorrow.name);
    printf("  R: %d\n", base16_tomorrow.base[2].r);
    printf("  G: %d\n", base16_tomorrow.base[2].g);
    printf("  B: %d\n", base16_tomorrow.base[2].b);

    // Base16 Tomorrow
    //   R: 55
    //   R: 59
    //   R: 65

    return 0;
}
```

## Contributing

See [`CONTRIBUTING.md`], which contains building and contribution
instructions.

[base16]: https://github.com/tinted-theming/home
[xfce4-terminal]: https://docs.xfce.org/apps/terminal/start
[`CONTRIBUTING.md`]: CONTRIBUTING.md
