/*
   This program will predict the outcome of football games by inputting various ratings about opposing teams from
   a text file, then it will compute the likelihood of a win or a loss for the home/away team and the score
   differential of said game, based on the input. Finally, it will output the predictions for each matchup and the total
   number of games predicted, as well as the percentage of home team victories predicted.
 */

#include "proj2head.h" // Include custom header file per the project requirements

int main() {
    char homeTeam[20], awayTeam[20]; // Create string variables to hold team names
    int hto, htd, hts, hth, htc, vto, vtd, vts, vtr; // Create integer variables to hold team data
    double predictor1, predictor2, predictor3, predictor4, predictor5; // Create doubles to store predictor values to be calculated
    int numGames = 0, homeTeamWins = 0; // Create integer variables to store number of games predicted and number of games where the home team is predicted to win (used in update function)

    FILE *fp1;
    fp1 = fopen("football2.txt", "r"); // Open file

    // Iterate through input file, line-by-line, until EOF is reached
    while (!feof(fp1)) {
        int score = 0; // create and initialize score variable to hold per-game score result
        // Get line of input from text file, save relevant data to variables
        getLine(fp1, &homeTeam, &hto, &htd, &hts, &hth, &htc, &awayTeam, &vto, &vtd, &vts, &vtr);
        // Compute predictor values, given input variables
        computePredictors(hto, htd, hts, hth, htc, vto, vtd, vts, vtr, &predictor1, &predictor2, &predictor3, &predictor4, &predictor5);
        // Compute score of a game, given predictor values, and store it in score varaible
        score = computeScore(predictor1, predictor2, predictor3, predictor4, predictor5);
        // Output result of prediction
        output(homeTeam, awayTeam, score);
        // Update running total of number of games and number of home team wins
        update(score, &numGames, &homeTeamWins);
    }
    // Close file pointer
    fclose(fp1);
    // Output total number of games predicted and percent of games won by the home team
    printf("\n");
    summary(numGames, homeTeamWins);
}

/* Output of running my program on football2.txt:

Miss_State beat Kansas_St by 14
West_Virginia beat NC_State by 15
Cincinnati beat Miami_OH by 21
Penn_St beat Pitt by 6
Ohio_St beat Indiana by 26
Alabama beat South_Carolina by 31
USC beat BYU by 3
UCF beat Stanford by 13
Iowa beat Iowa_St by 5
Michigan_St beat Arizona_St by 5
Kentucky beat Florida by 1
Clemson beat Syracuse by 13
Purdue beat TCU by 4
Oklahoma beat UCLA by 10

Of 14 games, 57.1% were won by the home team

*/
