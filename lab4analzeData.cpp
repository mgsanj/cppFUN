/*
Follow the steps described here to complete the program.

Collecting Data From The keyboard input (cin).

Define a named constant for the size of the arrays. For example, const int NUM_DAYS {7};

Define an array of strings for the days and an array of doubles for the expenses using the named constant 
as the array size. Initialize the array of doubles with 0.0, not 0. Each day in the array of days corresponds 
to the expense in the same position in the array of expenses.

Check. The arrays have been defined using meaningful identifiers.

Check. The arrays have been defined using the named constant as the array size.

Check. The array of doubles have been initialized with 0.0.

Read the data from the keyboard into the arrays. The code for reading the expense records should not assume there 
are exactly seven records in the file. Use a counter variable to keep track of the number of records received from
the keyboard. Other than reading and counting the number of expense records, don't do any data processing and reporting 
at this step.

Check. The number 7 is not used in any form in the process of getting data from cin.

Check. No calculation for total, average, and largest at this step.

Check. No reporting at this step.

Process Data

Process the data in the arrays. Calculate the total, average, and largest expense.

Create Report

For keyboard input.

 Sunday 45.25
 Monday 49.38
 Tuesday 12.75
 Wednesday 123.5
 Thursday 8.25
 Friday 19.95
 Saturday 145.7
 End
 
Generate the expenses report as shown below.

               My Weekly Expense Report
               ------------------------
               Sunday              45.25
               Monday              49.38
               Tuesday             12.75
               Wednesday          123.50
               Thursday             8.25
               Friday              19.95
               Saturday           145.70
Total of expenses:                404.78
Average of expenses:               57.83
Largest of expenses:              145.70

*/

//
// expensearr.cpp
// labs22A
//
// Created by Sanjana Gadaginmath on 07/30/2021.
//
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
   const int NUM_DAYS {7};
   int counter = 1;
   string days[NUM_DAYS] {};
   double expenses[NUM_DAYS] {};
   double total, average, largest_exp;
   int i;
   string temp;
   
   
   // Collecting Data From The keyboard input (cin).
   for (i = 0; i < NUM_DAYS; ++i) {
      cin >> days[i] >> expenses[i];
   }
   
   // Counter
   for (i = 0; i < NUM_DAYS; ++i) {
      if (days[i] != "End") {
         ++counter;
      }
      else {
         break;
      }
   }
   
   // Average of expenses
   for (i = 0; i < counter-1; ++i) {
      total += expenses[i];
   }
   average = total / (counter-1);
   
   // Largest expense
   largest_exp = expenses[0];
   for (i = 1; i < counter -1; ++i) {
      if (largest_exp < expenses[i]) {
         largest_exp = expenses[i];
      }
   }
   cout << setw(39) << right << "My Weekly Expense Report" << endl;
   cout << setw(39) << right << "------------------------" << endl;
   cout << fixed << setprecision(2);
   for (i = 0; i < counter - 1; ++i) { 
      if (days[i] == "End") {
         break;
      }
      cout << "               ";
      cout << setw(10) << left << days[i]
           << setw(15) << right << expenses[i] << endl;
   }
   cout << setw(24) << left
        << "Total of expenses: " 
        << setw(16) << right
        << total << endl;
   cout << setw(24) << left
        << "Average of expenses: " 
        << setw(16) << right
        << average << endl;
   cout << setw(24) << left
        << "Largest of expenses: " 
        << setw(16) << right
        << largest_exp << endl;
   
   return 0;
}
/*
Test Data

 Sunday 45.25
 Monday 49.38
 Tuesday 12.75
 Wednesday 123.5
 Thursday 8.25
 Friday 19.95
 Saturday 145.7
 End
 
 */
