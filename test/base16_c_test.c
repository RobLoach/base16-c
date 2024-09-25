#include <assert.h>
#include <stdio.h>

#define BASE16_IMPLEMENTATION
#include "base16-tomorrow.h"
#include "base24-dracula.h"

int main() {
    printf("Name: %s\n", base16_tomorrow.name);
    assert(base16_tomorrow.base[0].r == 255);
    assert(base16_tomorrow.base[0].g == 255);
    assert(base16_tomorrow.base[0].b == 255);
    assert(base16_tomorrow.base[1].r == 224);
    assert(base16_tomorrow.base[1].g == 224);
    assert(base16_tomorrow.base[1].b == 224);

    printf("Name: %s\n", base24_dracula.name);
    assert(base24_dracula.base[0].r == 40);
    assert(base24_dracula.base[0].g == 42);
    assert(base24_dracula.base[0].b == 54);
    assert(base24_dracula.base[1].r == 54);
    assert(base24_dracula.base[1].g == 52);
    assert(base24_dracula.base[1].b == 71);

    return 0;
}
