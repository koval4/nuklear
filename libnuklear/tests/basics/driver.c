#define NK_IMPLEMENTATION
#define NK_INCLUDE_DEFAULT_ALLOCATOR
#include <nuklear/nuklear.h>

int main () {
    struct nk_context ctx;
    nk_init_default(&ctx, 0);
    nk_clear(&ctx);
    nk_free(&ctx);
    return 0;
}
