#include <stdio.h>
#include <string.h>
#include <stdlib.h> // To work on MacOSX instead of #include <malloc.h>

#define MAXSTRLEN 100

char greeting[MAXSTRLEN];

/**
 * This will store in the "HEAP" memory, which means, we need dynamic memory allocation.
 *
 * This is necessary because we want to return a variable created inside the function.
 *
 * For this we need to use "malloc", which will keep the variable in the memory after exiting the function.
 *
 * OBS:
 *
 * "So this is necessary for safety reasons and because C does not allow us to simple returning a new variable
 * without overring memory."
 *
 * Good content to read: http://net-informations.com/faq/net/stack-heap.htm
 *
 * @brief
 * @param astring
 * @return
 */
char * string_function_dynamic(char *astring) {
	char *s;

    /**
     * "malloc()" will alocatem memory in the 'HEAP', which means the variable "s"
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
