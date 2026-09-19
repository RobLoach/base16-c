#include <assert.h>
#include <stdio.h>

#define TINTED_IMPLEMENTATION

/* Include an individual scheme directly. */
#include "base16-tomorrow.h"

/* The aggregate header includes every generated scheme. */
#include "tinted.h"

/* The aggregate Tinted8 header includes every generated Tinted8 scheme. */
#include "tinted8.h"

int main() {
    int i;

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
    assert(base24_dracula.base[1].r == 33);
    assert(base24_dracula.base[1].g == 34);
    assert(base24_dracula.base[1].b == 44);

    printf("Name: %s\n", base16_dracula.name);
    assert(base16_dracula.system == 16);
    assert(base24_dracula.system == 24);

    /* Iterate through every available scheme. */
    assert(TINTED_COUNT > 500);
    for (i = 0; i < TINTED_COUNT; i++) {
        assert(tinted_schemes[i] != NULL);
        assert(tinted_schemes[i]->name != NULL);
        assert(tinted_schemes[i]->system == 16 || tinted_schemes[i]->system == 24);
    }
    printf("Schemes: %d\n", TINTED_COUNT);

    /* Tinted8 */
    printf("Name: %s\n", tinted8_gruvbox_dark.name);
    assert(tinted8_gruvbox_dark.black.normal.r == 40); /* #282828 */
    assert(tinted8_gruvbox_dark.black.normal.g == 40);
    assert(tinted8_gruvbox_dark.black.normal.b == 40);
    assert(tinted8_gruvbox_dark.black.bright.r == 60); /* #3c3836 */
    assert(tinted8_gruvbox_dark.black.bright.g == 56);
    assert(tinted8_gruvbox_dark.black.bright.b == 54);
    assert(tinted8_gruvbox_dark.red.normal.r == 204); /* #cc241d */
    assert(tinted8_gruvbox_dark.red.normal.g == 36);
    assert(tinted8_gruvbox_dark.red.normal.b == 29);

    /* Iterate through every available Tinted8 scheme. */
    assert(TINTED8_COUNT >= 4);
    for (i = 0; i < TINTED8_COUNT; i++) {
        assert(tinted8_schemes[i] != NULL);
        assert(tinted8_schemes[i]->name != NULL);
        assert(tinted8_schemes[i]->slug != NULL);
        assert(tinted8_schemes[i]->variant != NULL);
    }
    printf("Tinted8 Schemes: %d\n", TINTED8_COUNT);

    return 0;
}
