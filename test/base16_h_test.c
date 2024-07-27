#include <assert.h>
#include <stdio.h>

#define BASE16_IMPLEMENTATION
#include "base16-tomorrow.h"

int main() {
    printf("Name: %s\n", base16_tomorrow.name);
    assert(base16_tomorrow.base[0].r == 255);
    assert(base16_tomorrow.base[0].g == 255);
    assert(base16_tomorrow.base[0].b == 255);
    assert(base16_tomorrow.base[1].r == 224);
    assert(base16_tomorrow.base[1].g == 224);
    assert(base16_tomorrow.base[1].b == 224);

    return 0;
}