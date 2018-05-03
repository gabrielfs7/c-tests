#include <stdio.h>
#include <string.h>

#define NUMBER_OF_CDS 5

typedef enum score {
    Terrible = 10,
    Bad = 20,
    Average = 30,
    Good = 40,
    Excellent = 50
} CdScore;

typedef char Str50[50];

typedef struct cd {
	Str50 name;
	Str50 artist;
	int trackcount;
	CdScore rating;
} CD;

CD cd_collection[NUMBER_OF_CDS];

/**
 * It is good Use "enum" and "structs" to define types and use them as parameters.
 *
 * @brief
 * @param index
 * @param cd_collection
 * @param name
 * @param artist
 * @param trackcount
 * @param rating
 */
void add_cd(
    int index,
    CD cd_collection[],
    Str50 name,
    Str50 artist,
    int trackcount,
    CdScore rating
) {
    strcpy(cd_collection[index].name, name);
	strcpy(cd_collection[index].artist, artist);
	cd_collection[index].trackcount = trackcount;
	cd_collection[index].rating = rating;
}

void create_cdcollection()
{
    add_cd(0, cd_collection, "Great Hits", "Polly Darton", 20, Terrible);
    add_cd(1, cd_collection, "Mega Songs", "Lady Googoo", 18, Bad);
    add_cd(2, cd_collection, "The Best Ones", "The Warthogs", 24, Average);
    add_cd(3, cd_collection, "Songs From The Shows", "The Singing Swingers", 22, Good);
    add_cd(4, cd_collection, "Songs For Love", "The Lovers", 30, Excellent);
}


void display_cdcollection() {
	int i;
	CD thiscd;

	for (i = 0; i < NUMBER_OF_CDS; i++) {
		thiscd = cd_collection[i];
		printf("CD #%d: '%s' by %s has %d tracks. My rating = %d\n", i, thiscd.name, thiscd.artist, thiscd.trackcount, thiscd.rating);
	}
}

int main(int argc, char **argv) {
	create_cdcollection();
	display_cdcollection();

	return 0;
}
