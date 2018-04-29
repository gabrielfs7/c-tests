#include <stdio.h>

/**
 * It will clean remainig chacters in the input buffer
 *
 * This is better handled in the '04_Readln' project.
 *
 * @brief
 */
void flush_input() {
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF);
}

/**
 * 'gets' is not safe and causes segmentation fault if user inputs more than 5 characters.
 *
 * @brief
 */
void getinput_with_gets() {
	char firstname[5];
	char lastname[5];
	printf("Enter your first name:");
	gets(firstname);
	printf("Enter your last name:");
	gets(lastname);
	printf("Hello, %s, %s\n", firstname, lastname);
}

/**
 * Using 'fgets' is recomended, cause it will truncate in case of input exceeds the variable size.
 *
 * @brief
 */
void getinput_with_fgets() {
	char firstname[5];
	char lastname[5];
	printf("Enter your first name:");
    /**
     * Let's take as example user typed 'abcdefg' as firstname.
     * We will truncate the 'buffer' for the first 5 chars.
     * So the buffer will still have 'fg' chars.
     *
     * That is why we need to CLEAR THE BUFFER!!!
     *
     * That is why we need to call 'flush_input'.
     *
     * This is better handled in the '04_Readln' project.
     **/
	fgets(firstname, 5, stdin);
	printf("Enter your last name:");
	// fflush(stdin);	// This function may not (invariably) work with input!
	flush_input();
	fgets(lastname, 5, stdin);
	flush_input();
	printf("Hello, %s, %s\n", firstname, lastname);
}

int main(int argc, char **argv) {
	// getinput_with_gets();
	getinput_with_fgets();
	return 0;
}
