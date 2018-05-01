#include <stdio.h>

int main(int argc, char **argv) {
    /**
     * This is the 'actual' memory location where "Hello" is stored.
     */
	char str1[] = "Hello";

    /**
     * The pointer str2 is a number that represent memory location of the address where "Goodbye" is stored.
     */
	char *str2 = "Goodbye";

	// str2 = &str1;
	// str2 = str1;

    /**
     * The variable was declared without a pointer (*), so the natural pointer occupy
     * the same memory address.
     */
    printf("\n\nValue = %s.\n", str1);
    printf("Pointer to letter 'H' = %d.\n", &str1);
    printf("Memory address for letter 'H' = %d.\n\n", &str1, str1, str1);

    /**
     * The variable was declared with a pointer (*), so the pointer occupy
     * the different memory adress.
     */
    printf("Value = %s.\n", str2);
    printf("Pointer to letter 'G' = %d.\n", &str2);
    printf("Memory address for letter 'G' = %d.\n\n", str2);

    /**
     * It is possible to increment pointers, to move to the next memory address
     */
    int i;
    int str2_len;

    str2_len = strlen(str2);

    for (i = 0; i < str2_len; i++) {
        printf("- %s\n", str2);

        str2++; // moving the pointer forward...
    }

    for (i = str2_len; i > 0; i--) {
        str2--; // moving the pointer backward...

        printf("- %s\n", str2);
    }

    /**
     * Here you can see how pointers refer to same memory address
     */
    printf("\n%d %d %d %d %d %d %d\n", &str2[0], &str2[1], &str2[2], &str2[3], &str2[4], &str2[5], &str2[6]);
    printf("\n%d %d %d %d %d %d %d\n", str2, str2 + 1, str2 + 2, str2 + 3, str2 + 4, str2 + 5, str2 + 6);

	return 0;
}
