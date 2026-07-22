#include <assert.h>
#include <stdio.h>

#define BASE16_SCHEME_TOMORROW
#define BASE24_SCHEME_DRACULA
#define BASE16_IMPLEMENTATION
#include "base16.h"

int main(void) {
    printf("Name: %s\n", base16_tomorrow.name);
    assert(base16_tomorrow.system == 16);
    assert(base16_tomorrow.base[0].r == 255);
    assert(base16_tomorrow.base[0].g == 255);
    assert(base16_tomorrow.base[0].b == 255);
    assert(base16_tomorrow.base[1].r == 224);
    assert(base16_tomorrow.base[1].g == 224);
    assert(base16_tomorrow.base[1].b == 224);

    printf("Name: %s\n", base24_dracula.name);
    assert(base24_dracula.system == 24);
    assert(base24_dracula.base[0].r == 40);
    assert(base24_dracula.base[0].g == 42);
    assert(base24_dracula.base[0].b == 54);
    assert(base24_dracula.base[1].r == 54);
    assert(base24_dracula.base[1].g == 52);
    assert(base24_dracula.base[1].b == 71);

    return 0;
}
