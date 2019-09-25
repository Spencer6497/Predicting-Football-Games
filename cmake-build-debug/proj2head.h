/*
 * This header file includes all function prototypes, include statements for C libraries, and all constants.
 *
 * Spencer Peace
 * 9/25/19
 * Dr. Richard Fox
 * Project 2
 */

// Avoid warnings
#define _CRT_SECURE_NO_WARNINGS

// Include necessary c libraries
#include <stdio.h> // Include basic I/O functions to be used in fileIO.h
#include <math.h> // Include math functions for abs() function used in winning team prediction

// Define constants to be used in predictor calculations
#define OFFENSIVE_FACTOR 1.15
#define SPECIAL_TEAMS_FACTOR 1.22
#define HOME_FIELD_ADVANTAGE 1.2
#define OVERALL_FACTOR 1.15

// Define constants to be used in score calculations
#define OFFENSIVE_WORTH 0.30
#define DEFENSIVE_WORTH 0.24
#define SPECIAL_WORTH 0.17
#define HOME_WORTH 0.11
#define OVERALL_WORTH 0.13

// Function prototypes
// Input function prototype
void getLine(FILE *, char *, int *, int *, int *, int *, int *, char *, int *, int *, int *, int *);

// Compute function prototype
void computePredictors(int, int, int, int, int, int, int, int, int, double *, double *, double *, double *, double *);

// Score function prototype
int computeScore(double, double, double, double, double);

// Output function prototype
void output(char[], char[], int);

// Update function prototype
void update(int, int *, int *);

// Summary function prototype
void summary(int, int);