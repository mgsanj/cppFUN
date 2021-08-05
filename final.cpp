// Program name: final
//
// Description: Write a program to read test scores contained in a file.
//              Process the scores so that it prints out the highest scores of the first 20 and the second 25. 
//
// Author: Sanjana Gadaginmath
//
// Date: 08/04/2021
//

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

// Prototypes - do not delete or modify
int findHighestScore(int scores[], int size);

int main () {
    //Declare all necessary variables
    string fileName;
    int count {0};
    int score1;
    int score2;
    
    // Read from the standard input the input file name. Open the input file.
    ifstream instream;
    cin >> fileName;
    instream.open(fileName);
    
    // Once opened, declare arrays and sizes
    const int ARRAY_SIZE1 {20};
    const int ARRAY_SIZE2 {25};
    int testScores1[ARRAY_SIZE1];
    int testScores2[ARRAY_SIZE2];
    
    // If open is successful, stream data into array
    if (instream) {
       
      //first batch of 20 scores
       while (count < ARRAY_SIZE1 && instream >> testScores1[count]) {
          ++count;
       }
       score1 = findHighestScore(testScores1, ARRAY_SIZE1);
       cout << "The highest score of the first group of 20 scores is: " << score1 << endl;
       
       
       //second batch of 25 scores
       while (count < (ARRAY_SIZE2 + ARRAY_SIZE1) && instream >> testScores2[count - ARRAY_SIZE1]) {
          ++count;
       }
       score2 = findHighestScore(testScores2, ARRAY_SIZE2);
       cout << "The highest score of the second group of 25 scores is: " << score2 << endl;
       
    }
    // if open is not successful, print the file can't be opened
    else {
       cout << "File " << fileName << " cannot be opened." << endl;
    }

    return 0;
}

// Write the definition of findHighestScore
int findHighestScore(int scores[], int size) {
   
   //check if size is positive
   if (size > 0) {
      int max {scores[0]}; // initialize to first value in array
      
      for (int index = 1; index < size; index++) {
         //check if each consecutive value is greater than the previous and reassign if true
         if (scores[index] > max) {
            max = scores[index];
         }
      }
      return max;
   }
   // if size isn't positive
   else {
      return -1;
   }
}


/*
For input,
scores.txt
The output should be as follows,
The highest score of the first group of 20 scores is: 96
The highest score of the second group of 25 scores is: 92
 */
