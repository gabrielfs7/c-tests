#include <stdio.h>

#define MAXSTRLEN 200
#define FILENAME "sonnet.txt"
#define EMPTYFILENAME "empty.txt"
#define INVALIDFILENAME "not_here.txt"

int linecount(char *file_path)
{
	int numlines = 0;
	char line[MAXSTRLEN];
	FILE *file_pointer = fopen (file_path, "r");

    // If files does not exists or has no reading permissions
	if (file_pointer == 0) {
        printf("File %s cannot be opened!\n", file_path);

        return 0;
    }

    // While file has lines
    while (fgets(line, sizeof(line), file_pointer) != 0) {
        numlines++;
    }

    // Close the file
    fclose(file_pointer);

    printf("%s contains %d lines of text.\n", file_path, numlines);

    return 1;
}

int main(int argc, char **argv)
{
	linecount(FILENAME);
	linecount(EMPTYFILENAME);
	linecount(INVALIDFILENAME);

	return 0;
}
