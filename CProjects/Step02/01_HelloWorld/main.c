#include <stdio.h>

int main(int argc, char **argv) {
    int i = 0;

	printf("hello world with %d arguments \n", argc);

    for (i = 0; i < argc; i++) {
        printf("Argument %d = %s\n", i, argv[i]);
    }

    return 0;
}
