/*
 * This file contains all of the functions I need to input data from a text file, and output the results of
 * the game prediction.
 */

#include "proj2head.h"

// Create function for getting line-by-line input and saving it to variables
void getLine(FILE *fp1, char *home, int *hto, int *htd, int *hts, int *hth, int *htc, char *away, int *vto, int *vtd, int *vts, int *vtr) {
    fscanf(fp1, "%s %d %d %d %d %d %s %d %d %d %d", home, hto, htd, hts, hth, htc, away, vto, vtd, vts, vtr);
}

// Create output function to print result of prediction
void output(char home[], char away[], int score) {
    // If there's a tie, home team wins by 1 point
    if (score == 0) {
        printf("%s beat %s by 1\n", home, away);
    // Else if home team won, output proper string
    } else if (score > 0) {
        printf("%s beat %s by %d\n", home, away, abs(score));
    // Else if away team won, output proper string
    } else {
        printf("%s beat %s by %d\n", away, home, abs(score));
    }
}

// Create summary function to output the total number of games predicted, and the percentage of home team wins
void summary(int numGames, int homeTeamWins) {
    // Calculate percent of home team game wins, store in a double variable
    double percentWon = ((double) homeTeamWins / (double) numGames) * 100;
    // Output result with proper formatting
    printf("Of %i games, %.1f%% were won by the home team", numGames, percentWon);
}
