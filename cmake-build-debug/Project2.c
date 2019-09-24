/*
   This program will predict the outcome of football games by inputting various ratings about given teams from a
   textfile, then it will compute the likelihood of a win or a loss and other statistics about the game.

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

    FILE *fp1; // Create file pointer to hold input textfile
    fp1 = fopen("football1.txt", 'r'); // Open file
}

