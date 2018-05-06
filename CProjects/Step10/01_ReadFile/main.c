#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "sonnet.txt"

int readin(char *filename)
{
	long file_size;
	char *buffer;
	int linecount = 0;
	int i;

    // size_t is a long unsigned int
    size_t items_read;

    // open file read only in binary mode
	FILE *file_pointer = fopen(filename, "rb");

    // If file does not exists or does not have right permissions
	if (file_pointer == 0) {
		printf("Cannot open '%s'\n", filename);

        return 0;
	}

    // It will 'seek' to the end of file, moving the cursor to last character of last line.
    fseek(file_pointer, 0, SEEK_END);

    // It will "tell" the current position (now at the end of the file)
    file_size = ftell(file_pointer);

    // It will move the 'seek' pointer to the start of file.
    rewind(file_pointer);

    // It will alloc memory for buffer with the same file size.
    buffer = (char*) malloc(file_size);

    // Reads the data from file_pointer and puts it into the buffer.
    items_read = fread(buffer, 1, file_size, file_pointer);

    // Close the file.
    fclose(file_pointer);

    for (i = 0; i < file_size; i++) {
        // If it is a new line, increment lines.
        if (buffer[i] == '\n') {
            linecount++;
        }
    }

    printf("Number of lines was %d with %d chars (%d items read).\n", linecount, i, (int) items_read);

    // Release allocated memory for pointer 'buffer'.
    free(buffer);

    return 1;
}

int main(int argc, char **argv)
{
	readin(FILE_NAME);

	return 0;
}
