#include <assert.h>
#include <stdio.h>

#define BASE16_ALL
#define BASE16_SCHEME_LIST
#define BASE16_IMPLEMENTATION
#include "base16.h"

int main(void) {
    size_t i;

    printf("Schemes: %lu\n", (unsigned long)base16_scheme_list_count);
    assert(base16_scheme_list_count > 0);
    assert(base16_scheme_list[base16_scheme_list_count] == NULL);

    for (i = 0; i < base16_scheme_list_count; i++) {
        assert(base16_scheme_list[i] != NULL);
        assert(base16_scheme_list[i]->name != NULL);
        assert(base16_scheme_list[i]->system == 16 || base16_scheme_list[i]->system == 24);
    }

    return 0;
}
