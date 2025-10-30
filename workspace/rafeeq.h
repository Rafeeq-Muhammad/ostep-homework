#include <time.h>

static inline void Spin(double seconds) {
    const clock_t goal = clock() + (clock_t)(seconds * CLOCKS_PER_SEC);
    while (clock() < goal) {
        /* spin */
    }
}

