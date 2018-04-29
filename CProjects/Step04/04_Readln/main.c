#include <stdio.h>

// Defines an identifier holding 5 for length of input string
#define STRLEN 5

/*
int readln(char s[], int maxlen) {
	int len_s;
	fgets(s, maxlen, stdin);
	len_s = strlen(s);
	if (s[len_s - 1] == '\n') {
		s[len_s - 1] = '\0';
		len_s -= 1;
	}
	rewind(stdin); // This flushes the keyboard buffer (on Windows anyway!)
	return len_s;
}
*/

/**
 * This function is a safer way instead of using fgets.
 *
 * It will eliminate any possible remaining chars in the input buffer.
 *
 * @brief
 * @param s
 * @param maxlen
 * @return
 */
int readln(char s[], int maxlen) {
	char ch;
	int i;
	int chars_remain;

	i = 0;
	chars_remain = 1;

	while (chars_remain) {
		ch = getchar(); // Read next single char from input stream stdin

        // If got end of line, which means, after user press 'enter' key, end the loop.
		if ((ch == '\n') || (ch == EOF) ) {
			chars_remain = 0;
        // While did not reach max length, keep incrementing the string.
		} else if (i < maxlen - 1) {
			s[i] = ch;
			i++;
		}
	}
	s[i] = '\0';
	return i;
}

int main(int argc, char **argv) {
	char firstname[STRLEN];
	char lastname[STRLEN];
    char ch;

    int len_firstname;
	int len_lastname;

    printf("Enter any word:");

    // While read input chars and input is not a new line or end of file...
    while ((ch = getchar()) && (ch != '\n' && ch != EOF)) {
        printf(" - You entered %c\n", ch);
    }

	printf("Enter your first name:");
	len_firstname = readln(firstname, STRLEN);

	printf("Enter your last name:");
	len_lastname = readln(lastname, STRLEN);

	printf("Hello, %s, %s\n", firstname, lastname);
	printf("Length of firstname = %d, lastname = %d", len_firstname, len_lastname);
}
