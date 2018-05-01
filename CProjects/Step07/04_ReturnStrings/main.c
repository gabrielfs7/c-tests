#include <stdio.h>
#include <string.h>
#include <stdlib.h> // To work on MacOSX instead of #include <malloc.h>

#define MAXSTRLEN 100

char greeting[MAXSTRLEN];

/**
 * This will store in the "HEAP" memory, which means, we need dynamic memory allocation.
 *
 * @brief
 * @param astring
 * @return
 */
char * string_function_dynamic(char *astring) {
	char *s;

    /**
     * "malloc()" will alocatem memory in the 'HEAP', which means that memory
     * will continue existing even after exiting the function.
     */
	s = (char*)malloc(MAXSTRLEN); // The cast (char*) may be needed by some compilers

    /**
     * Need this to initialize the buffer created by malloc in order to have an empty string
     */
    s[0] = 0;

    /**
     * Concatenate the string
     */
	strcat(s, "hello ");
	strcat(s, astring);
	strcat(s, "\n");

	return s;
}

/**
 * This will store in the "STACK" memory, because it is static memory storing.
 *
 * @brief
 * @param astring
 * @return
 */
char * string_function(char astring[]) {
    /**
     * Concatenate the string
     */
	strcat(greeting, "hello ");
	strcat(greeting, astring);
	strcat(greeting, "\n");

	return greeting;
}

int main(int argc, char **argv) {
	printf(string_function("Fred"));
	printf(string_function_dynamic("Mary"));

	return 0;
}
