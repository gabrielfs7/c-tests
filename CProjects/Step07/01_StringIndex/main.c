#include <stdio.h>

char str1[] = "Hello";
/**
 * The legth of the string will be considered 7, because it
 * will count until the \0 (which means NULL) character.
 *
 * So the " world" will not be considered.
 */
char str2[] = "Goodbye\0 world";

void showstring( char *str ) {
	int i;
	int len = strlen( str );

	printf( "Length of %s is %d.\n", str, len);

	for( i = 0; i <= len; i++ ) {
		if (str[i] == '\0') {
			printf("\tchar[%d] = NULL\n", i);
		} else {
			printf("\tchar[%d] = %c\n", i, str[i]);
		}
	}
}

int main(int argc, char **argv) {
    printf( "String %s.\n", str1);
	showstring( str1 );

    printf( "String %s.\n", str2);
	showstring( str2 );

	return 0;
}
