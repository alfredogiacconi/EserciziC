#include "quiz.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b;
    if (argc != 3) {
        printf("Utilizzo: test_driver <int_a> <int_b>\n");
        exit(-1);
    }
    a = atoi(argv[1]);
    if (a == 0) {
        printf("Il primo argomento deve essere un intero\n");
        exit(-2);
    }
    b = atoi(argv[1]);
    if (b == 0) {
        printf("Il secondo argomento deve essere un intero\n");
        exit(-3);
    }
    printf("quiz(%i, %i) = %i\n", a, b, quiz(a, b));
    return 0;
}