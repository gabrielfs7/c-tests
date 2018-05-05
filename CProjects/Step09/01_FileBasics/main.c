#include <stdio.h>

#define MAXSTRLEN 200
#define FILENAME "test.txt"

void readlines()
{
    /**
     *
     * Open a file in READ mode.
     *
     */
	FILE *file_pointer = fopen(FILENAME, "r");

	char line[MAXSTRLEN];

	if (file_pointer != 0) {
        /***
         * While has lines, move line contents to "line" variable end then
         * output it to stdout
         */
		while (fgets (line, sizeof(line), file_pointer) != 0) {
			fputs (line, stdout);
		}

		fclose(file_pointer);
	} else {
		printf("File %s cannot be opened!", FILENAME);
	}
}

void writelines()
{
    /***
     * The w mode will erase file content.
     */
	FILE *file_pointer = fopen(FILENAME, "w");

    /***
     * Write content in file and move the cursos to the next line.
     */
	fputs("Hello world\n", file_pointer);
	fputs("Goodbye Mars\n", file_pointer);

	fclose(file_pointer);
}

void clearfile()
{
	FILE *file_pointer;

    /***
     * The "w" mode erease the file content and move the cursos to first line.
     */
	file_pointer = fopen(FILENAME, "w");

	fclose(file_pointer);
}

void deletefile()
{
	if (remove(FILENAME) == 0) {
		printf( "%s file deleted.\n", FILENAME );
	} else {
		printf("Unable to delete the file: %s.\n", FILENAME);
	}
}

int main( int argc, char **argv )
{
	deletefile();
	writelines();
	readlines();
    clearfile();

	return 0;
}
