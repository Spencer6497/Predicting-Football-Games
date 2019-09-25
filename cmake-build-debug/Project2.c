/*
   This program will predict the outcome of football games by inputting various ratings about given opposing teams from
   a textfile, then it will compute the likelihood of a win or a loss and other statistics about the game, based on
   the input.

   Spencer Peace
   CSC 362-001
   Dr. Richard Fox
   9/24/19
   Project 1
 */

#include "proj2head.h" // Include custom header file per the project requirements

int main() {
    char homeTeam[20], awayTeam[20]; // Create variables to hold team names
    int hto, htd, hts, hth, htc, vto, vtd, vts, vtr; // Create variables to hold team data

    FILE *fp1;
    fp1 = fopen("football1.txt", "r"); // Open file

    // Hardcode file line-by-line iteration for test purposes
    // I'm going to have to change this to loop properly once I get the core functionality down
    int i;
    for (i = 0; i < 13; i++) {
        getLine(fp1, &homeTeam, &hto, &htd, &hts, &hth, &htc, &awayTeam, &vto, &vtd, &vts, &vtr);

    }
    fclose(fp1);
}

