#include <stdio.h>
#include <string.h>

#define FILENAME "sonnet.txt"
#define MAXSTRLEN 200

/**
 * Returns index (0-based) of first char of searchstring in sourcestring
 * or -1 if searchstring is not found.
 */
static int searchstring(char searchstr[], char sourcestr[])
{
	char *pointer_to_string = strstr(sourcestr, searchstr);

	if (pointer_to_string != 0) {
		return (int) (pointer_to_string - sourcestr);
	}

	return -1;
}

int findstrings(char *fileName, char *ss)
{
    // open file read only
	FILE *file_pointer = fopen(fileName, "r");
	int count;
	char line[MAXSTRLEN];

    // File does not exists or is not readable
	if (file_pointer == 0) {
		printf("Can't open the file: '%s'\n", FILENAME);

        return -1;
	}

    // initialize the count
    count = 0;

    while (fgets(line, MAXSTRLEN, file_pointer) != 0) {
        if (searchstring(ss, line) >= 0) {
            count++;
        }
    }

    printf ("'%s' was found in %d lines\n", ss, count);

    // Close file
    fclose(file_pointer);

}

int main(int argc, char **argv)
{
	findstrings(FILENAME, "line 1");
	findstrings(FILENAME, "line 2");
	findstrings(FILENAME, "line");

	return 0;
}
