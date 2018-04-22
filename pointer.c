
#include <stdio.h>

/**
 * This program objective is to show how pointers work in C.
 */
int main()
{
    /**
     * Int variable necessary for counting.
     */
    int i;
    
    /**
     * Create the char variable 'multiple' with exaclty 8 bytes.
     */
    char multiple[8] = "a string"; 
    
    /**
     * Create a pointer to 'multiple' variable. 
     */
    char *p = multiple;
    
    printf(
        "The word '%s' has size of %d bytes.\n\n", 
        multiple, 
        sizeof(multiple)
    );
    
    /**
     * This loop demonstrate that the pointer will 'point' to 
     * the 'same memory space' allocated for the char array.
     * 
     * This will output:
     * 
     * multiple[0] = a | *(p + 0) = a | &multiple[0] = 0x7fff84973d90 | p + 0 = 0x7fff84973d90                                 
     * multiple[1] =   | *(p + 1) =   | &multiple[1] = 0x7fff84973d91 | p + 1 = 0x7fff84973d91                                 
     * multiple[2] = s | *(p + 2) = s | &multiple[2] = 0x7fff84973d92 | p + 2 = 0x7fff84973d92                                 
     * multiple[3] = t | *(p + 3) = t | &multiple[3] = 0x7fff84973d93 | p + 3 = 0x7fff84973d93                                 
     * multiple[4] = r | *(p + 4) = r | &multiple[4] = 0x7fff84973d94 | p + 4 = 0x7fff84973d94                                 
     * multiple[5] = i | *(p + 5) = i | &multiple[5] = 0x7fff84973d95 | p + 5 = 0x7fff84973d95                                 
     * multiple[6] = n | *(p + 6) = n | &multiple[6] = 0x7fff84973d96 | p + 6 = 0x7fff84973d96                                 
     * multiple[7] = g | *(p + 7) = g | &multiple[7] = 0x7fff84973d97 | p + 7 = 0x7fff84973d97
     */
    for (i = 0; i < sizeof(multiple); ++i) {
        printf(
            "multiple[%d] = %c | *(p + %d) = %c | &multiple[%d] = %p | p + %d = %p \n", 
            i, 
            multiple[i],
            i,
            *(p + i),
            i,
            &multiple[i],
            i,
            p + i
        );
    }

    return 0;
}
