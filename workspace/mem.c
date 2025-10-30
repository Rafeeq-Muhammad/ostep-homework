#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "rafeeq.h"

int main(int argc, char* argv[]) {
    int* p = malloc(sizeof(int));
    assert(p != NULL);
    printf("%p\n", p);
    free(p);
    return 0;
}
