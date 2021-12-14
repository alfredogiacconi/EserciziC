#include "fatt.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    unsigned long int a;
    if (argc != 2) {
        printf("Utilizzo: test_driver <int_a>\n");
        exit(-1);
    }
    a = atol(argv[1]);
    if (a == 0) {
        printf("Il primo argomento deve essere un intero\n");
        exit(-2);
    }
    printf("fatt(%llu) = %llu\n", a, fatt(a));
    return 0;
}
