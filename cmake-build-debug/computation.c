/*
 * This file contains all of the functions I need to compute the predictor values, compute the score, and update the
 * running total of games and home team wins.
 *
 * Spencer Peace
 * 9/25/19
 * Dr. Richard Fox
 * Project 2
 */

#include "proj2head.h"

// Create function for computing predictor values
void computePredictors(int hto, int htd, int hts, int hth, int htc, int vto, int vtd, int vts, int vtr, double *predictor1, double *predictor2, double *predictor3, double *predictor4, double *predictor5) {
    *predictor1 = hto * OFFENSIVE_FACTOR - vtd;
    *predictor2 = htd + 2 - vto * OFFENSIVE_FACTOR;
    *predictor3 = hts * SPECIAL_TEAMS_FACTOR - vts;
    *predictor4 = hth + htc * HOME_FIELD_ADVANTAGE - vts;
    *predictor5 = hto * htd * hth * OVERALL_FACTOR - vto * vtd * vtr;
}

// Create score function to calculate who wins or loses the given game
int computeScore(double predictor1, double predictor2, double predictor3, double predictor4, double predictor5) {
    // Create difference variable to hold the resulting game points difference
    double difference = predictor1 * OFFENSIVE_WORTH + predictor2 * DEFENSIVE_WORTH + predictor3 * SPECIAL_WORTH + predictor4 * HOME_WORTH + predictor5 * OVERALL_WORTH;
    // Return difference as an int
    return (int) difference;
}

// Create update function to update number of games predicted, and number of home team wins predicted
void update(int score, int *numGames, int *homeTeamWins) {
    // Increment number of games predicted for every line
    *numGames += 1;
    // If the home team won (score is positive or zero), increment number of home team wins
    if (score > 0 || score == 0) {
        *homeTeamWins += 1;
    }
}