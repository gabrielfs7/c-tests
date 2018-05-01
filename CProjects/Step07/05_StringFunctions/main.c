#include <stdio.h>
#include <string.h>

#define MAXSTRLEN 200

char mystring[] = 	"On the 2nd day of Christmas my true love gave to me, 2 turtle doves and a partridge in a pear tree.";
char tens[] =   	"         10        20        30        40        50";
char nums[] =   	"123456789012345678901234567890123456789012345678901234567890";
	// I will concat strings to msg1 and msg2 so I need to set aside enough memory (the array size)
	// to accomodate the additional characters...
char msg1[MAXSTRLEN] = "Result1: ";
char msg2[MAXSTRLEN] = "Result2: ";
char myotherstr[6];

/**
 * Just a helpful output to see string indexing.
 *
 * @brief
 */
void show_string() {
	printf("\n\nJust showing string legth and index numbers: \n\n\t%s\n\t%s\n\t%s", mystring, tens, nums);
}

void search_string(char search_string[]) {
	char *pointer_to_string;
	int found_at_position;

    /**
     * Will return the pointer for the searched string or NULL if not found.
     */
	pointer_to_string = strstr(mystring, search_string);

    /**
     * Get the position of the occurrency + 1 to remove NULL ending character.
     */
	found_at_position = (int)((pointer_to_string - mystring) + 1);

	if (pointer_to_string != NULL)
		printf("\n'%s' found at position %d\n", search_string, found_at_position);
	else
		printf("\n'%s' not found\n", search_string);
}

void copy_string() {
	// Many modern C11 compilers provide safer string functions ending with _s
	// This example shows strncpy_s but this is not yet supported by all compilers
	/*	strncpy_s(myotherstr, 6, "Easter", 4);
		printf("\nstrncpy_s: Copied this string: '%s'", myotherstr); */
	myotherstr[0] = 0;

    /**
     * Copy 4 bytes of 'Easter' to myotherstr.
     */
	strncpy(myotherstr, "Easter", 4);

	printf("\nCopied 4 bytes of 'Easter' to string: '%s'", myotherstr);
}

void concatenate_string() {
    /**
     * Avoid use 'strcat' cause it could cause buffer overrun, since it is not required
     * to provide number of bytes.
     */
	strcat(msg1, "Easter");

	printf("\n\nstrcat: '%s'", msg1);

    /**
     * Using 'strncat' is safier cause is needed to provide exactly
     * amount of bytes to copy. It can avoid buffer overrun.
     */
	strncat(msg2, "Easter", 4);

	printf("\nstrncat: '%s'\n", msg2);
}

int main(int argc, char **argv) {
	printf("Length of mystring = %d", strlen(mystring));
	printf("\nLength of 'Hello' = %d", strlen("Hello"));
	show_string();
	search_string("2nd");
	search_string("Christmas");
	search_string("Easter");
	copy_string();
	concatenate_string();
	return 0;
}
