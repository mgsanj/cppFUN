//
//  scores.cpp
//  labs22A
//
//  Created by Sanjana Gadaginmath on 07/30/2021.
//  Copyright © 2020 De Anza College. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

void getJudgeScores(double scores[], int num);
double getHighest(double scores[], int num);
double getLowest(double scores[], int num);
double getAverage(double scores[], int num);
string report(double scores[], int num);

int main() {
    const int NUM_SCORES {7};
    double scores[NUM_SCORES];
    string finalStr;
    srand(11);
    
    getJudgeScores(scores, NUM_SCORES);
  
    finalStr = report(scores, NUM_SCORES);
    cout << finalStr;
    
   
   
    return 0;
}

//***********************************************************************
//* Get scores from the judges. When this function is
//* called for a contestant, it receives an array to be filled with
//* the scores from the judges. The function simulates the
//* giving of scores using a random number generator. The scores must be
//* in the range 0.0 to 10.0. (Hint: This can be accomplished by
//* generating random integers between 0 and 100. )
//*
//* Parameters
//*   scores - Identify the scores array passed to the function.
//*   num - Identify the number of scores to be filled.
//*
//* Returns
//*   At the return, the array is filled with scores from the judges.
//***********************************************************************
void getJudgeScores(double scores[], int num) {
   int i;
   for (i = 0; i < num; ++i) {
      scores[i] = (rand() % 101) / 10.0; 
   }
}

//***********************************************************************
//* Get highest score from the judges. When this function is
//* called for a contestant, it receives an array that has been
//* filled with the scores from the judges.
//*
//* Parameters
//*   scores - Identify the scores array passed to the function.
//*   num - Identify the number of scores stored in the array.
//*
//* Returns
//*   The highest score stored in the array is returned.
//***********************************************************************
double getHighest(double scores[], int num) {
   double highest;
   int i;
   highest = scores[0];
   for (i = 1; i < num; ++i) {
      if (scores[i] > highest) {
         highest = scores[i];
      }
   }
   return highest;
}

//***********************************************************************
//* Get lowest score from the judges. When this function is
//* called for a contestant, it receives an array that has been
//* filled with the scores from the judges.
//*
//* Parameters
//*   scores - Identify the scores array passed to the function.
//*   num - Identify the number of scores stored in the array.
//*
//* Returns
//*   The lowest score stored in the array is returned.
//***********************************************************************
double getLowest(double scores[], int num) {
   double lowest;
   int i;
   lowest = scores[0];
   for (i = 1; i < num; ++i) {
      if (scores[i] < lowest) {
         lowest = scores[i];
      }
   }
   return lowest;
}

//***********************************************************************
//* Get the average score from the judges. When this function is
//* called for a contestant, it receives an array that has been
//* filled with the scores from the judges.
//*
//* Parameters
//*   scores - Identify the scores array passed to the function.
//*   num - Identify the number of scores stored in the array.
//*
//* Returns
//*   The average score stored in the array is returned.
//***********************************************************************
double getAverage(double scores[], int num) {
   int i;
   double total;
   double average;
   double num1 = num;
   for (i = 0; i < num; ++i) {
      total += scores[i];
   }
   average = total / num1;
   return average;
}

//***********************************************************************
//* Format the scores from the judges. When this function is
//* called for a contestant, it receives an array that has been
//* filled with the scores from the judges. The function creates a
//* string that includes the scores, the highest score, the lowest score,
//* and the average score given by the judges.
//* The to_string function is used to convert from double to string.
//*
//* Parameters
//*   scores - Identify the scores array passed to the function.
//*   num - Identify the number of scores stored in the array.
//*
//* Returns
//*   The formatted string is returned.
//***********************************************************************
string report(double scores[], int num) {
   int i;
   string highest, lowest, average;
   string finalStr {""};
   
   highest = to_string(getHighest(scores, num));
   lowest = to_string(getLowest(scores, num));
   average = to_string(getAverage(scores, num));
   
   for (i = 0; i < num; ++i) {
      finalStr += "Judge #" + to_string(i) + " " + to_string(scores[i]) + "\n";
   }
   

   finalStr += "Highest score: " + highest + "\n";
   finalStr += "Lowest score: " + lowest + "\n";
   
   finalStr += "Average score: " + average + "\n";
   
   return finalStr;
}
