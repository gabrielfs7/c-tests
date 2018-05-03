#include <stdio.h>
#include <string.h>

#define NUMBER_OF_CDS 4

typedef char Str50[50];

struct cd {
	Str50 name;
	Str50 artist;
	int trackcount;
	int rating;
};

struct cd cd_collection[NUMBER_OF_CDS];

void add_cd(
    int index,
    struct cd cd_collection[],
    char name[],
    char artist[],
    int trackcount,
    int rating
) {
    strcpy(cd_collection[index].name, name);
	strcpy(cd_collection[index].artist, artist);
	cd_collection[index].trackcount = trackcount;
	cd_collection[index].rating = rating;
}

void create_cdcollection()
{
    add_cd(0, cd_collection, "Great Hits", "Polly Darton", 20, 10);
    add_cd(1, cd_collection, "Mega Songs", "Lady Googoo", 18, 7);
    add_cd(2, cd_collection, "The Best Ones", "The Warthogs", 24, 4);
    add_cd(3, cd_collection, "Songs From The Shows", "The Singing Swingers", 22, 9);
}

void display_cdcollection()
{
	int i;
	struct cd this_cd;

	for (i = 0; i < NUMBER_OF_CDS; i++) {
		this_cd = cd_collection[i];

		printf(
            "CD #%d: '%s' by %s has %d tracks. My rating = %d\n",
            i,
            this_cd.name,
            this_cd.artist,
            this_cd.trackcount,
            this_cd.rating
        );
	}
}

int main(int argc, char **argv)
{
	create_cdcollection();
	display_cdcollection();

	return 0;
}
