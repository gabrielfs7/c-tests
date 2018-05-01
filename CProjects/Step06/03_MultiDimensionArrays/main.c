#include <stdio.h>

int grid [3][5] = {
	{1,   2,   3,   4,   5 },
	{6,   7,   8,   'asdsad',   10},
	{11,  12,  13,  14,  15}
};

int main(int argc, char **argv) {
	int row;
	int column;

	for (row = 0; row < 3; row++) {
        printf("\nrow[%d]: \n", row);

        for( column = 0; column < 5; column++ ) {
			printf("\trow[%d], column[%d], value=%d\n", row, column, grid[row][column]);
            // Will break the inner loop for matrix[1][2]
			if (column == 2 && row == 1) {
				break;
			}
		}
	}

	return 0;
}
