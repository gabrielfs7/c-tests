// Enum to give 'score' to a 'CD'.
enum score {
    Terrible=1,
    Bad=2,
    Average=3,
    Good=4,
    Excellent=5
};

// Typedef do shortcut string declaration.
typedef char Str50[50];

// Struct for the CD
typedef struct cd {
	Str50 name;
	Str50 artist;
	int trackcount;
	int rating;
} CD;

// Global variables.
CD *cd_collection;
CD tempcd;
int cdarraylen;

// Function definitions.
void create_cdcollection();
void display_cdcollection();
int number_of_records_in_db(char*);
void save_cdcollection(char*);
void add_cd(char*);
void modify_cd(char*);
