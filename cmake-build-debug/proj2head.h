/*
 * This header file includes all function prototypes, include statements for C libraries, and all constants.
 *
 * Spencer Peace
 * 9/24/19
 * Dr. Richard Fox
 * Project 2
 */

#define _CRT_SECURE_NO_WARNINGS

// Include necessary headers
#include <stdio.h> //Include basic I/O functions to be used in fileIO.h
#include "computation.h" // Include header file with computation functions
#include "fileIO.h" // Include header file with fileIO functions

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
//void getLine(FILE *, char *, int *, int *, int *, int *, int *, char *, int *, int *, int *, int *);


// I don't believe the following code is necessary, but CLion included it so I will keep it until I can verify my program works.

#ifndef UNTITLED_PROJ2HEAD_H
#define UNTITLED_PROJ2HEAD_H

#endif //UNTITLED_PROJ2HEAD_H
