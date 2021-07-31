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
