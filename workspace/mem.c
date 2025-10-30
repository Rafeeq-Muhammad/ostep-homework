#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static inline void Spin(double seconds) {
    const clock_t goal = clock() + (clock_t)(seconds * CLOCKS_PER_SEC);
    while (clock() < goal) {
        /* spin */
    }
}

int main(int argc, char* argv[]) {
    int* p = malloc(sizeof(int));
    assert(p != NULL);
    printf("%p\n", p);
    free(p);
    return 0;
}
