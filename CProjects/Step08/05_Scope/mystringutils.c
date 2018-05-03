#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mystring.h"

/**
 * This is a 'private' function, because of the 'static' keyword.
 * So this function can be only used inside this file.
 *
 * As a 'private' function it CANNOR be declared inside a HEADER file.
 *
 * Returns index (0-based) of first char of searchstring in sourcestring or -1 if searchstring is not found
 *
 * @brief
 * @param searchstr
 * @param sourcestr
 * @return
 */
static int searchstring(char searchstr[], char sourcestr[])
{
	char *ptrtostr;
	int foundat;

	foundat = -1;
	ptrtostr = strstr( sourcestr, searchstr );

	if (ptrtostr != NULL) {
		foundat = (int)((ptrtostr - sourcestr));
	}

	return foundat;
}

char * findsubstring(char searchstr[], char sourcestr[])
{
	char *s;
	int stringpos;

	s = malloc(MAXSTRLEN);
	s[0] = 0; // need this to initialize the buffer created by malloc

	stringpos = searchstring( searchstr, sourcestr );

	if (stringpos > -1) {
		sprintf( s, "'%s' found in '%s' at index #%d\n", searchstr, sourcestr, stringpos);
	} else {
		sprintf( s, "'%s' not found in '%s'\n", searchstr, sourcestr);
	}

	return s;
}
