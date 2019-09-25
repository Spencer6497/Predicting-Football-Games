/*
 * This header file contains all of the functions I need to input data and output the results of the game prediction
 *
 * Spencer Peace
 * 9/24/19
 * Dr. Richard Fox
 * Project 2
 */

// Create function for getting line-by-line input and saving it to variables
void getLine(FILE *fp1, char *home, int *hto, int *htd, int *hts, int *hth, int *htc, char *away, int *vto, int *vtd, int *vts, int *vtr) {
    fscanf(fp1, "%s %d %d %d %d %d %s %d %d %d %d", home, hto, htd, hts, hth, htc, away, vto, vtd, vts, vtr);
}

// I don't believe the following code is necessary, but CLion included it so I will keep it until I can verify my program works.

#ifndef UNTITLED_FILEIO_H
#define UNTITLED_FILEIO_H

#endif //UNTITLED_FILEIO_H

