#include <stdio.h>
#include <stdlib.h>
#include "pointers.h"

int main(int argc, char **argv)
{
    int i;

    printf("\n\nTesting scripts");
    printf("\n\nArgument quantity %d\n\n", argc);

    for (i = 0; i < argc; i++) {
        printf("    - Argument %i = %s\n", i, argv[i]);
    }

    printf("\n\n");

    test_pointers(argc, argv);

    printf("\n\n");

    return 0;
}
