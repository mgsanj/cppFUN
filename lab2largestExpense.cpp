/*
In this lab, you'll write code to read weekly expenses from cin and make a report of the expenses. 
In addition to displaying total and average, also display the largest of the expenses programmatically. 
That is, you will write the code that “finds” out the largest expense. Do not use arrays, functions or 
anything we have not covered yet.

For the following weekly expenses from cin,

45.25 49.38 12.75 123.5 8.25 19.95 145.7

Output should be exactly as follows:

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
//  expense2.cpp
//  labs22A
//
//  Write your name and date of coding below.
//
//  Created by Sanjana Gadaginmath on 07/07/2021.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Define variables and initialize them
    
    double expense1; //weekly expenses
    double expense2;
    double expense3;
    double expense4;
    double expense5;
    double expense6;
    double expense7;
    
    string weekDay1 = "Sunday"; // day strings
    string weekDay2 = "Monday";
    string weekDay3 = "Tuesday";
    string weekDay4 = "Wednesday";
    string weekDay5 = "Thursday";
    string weekDay6 = "Friday";
    string weekDay7 = "Saturday";
    
    double sumExpenses; 
    double avgExpense;
    double largestExpense;
    
    // Get weekly expenses from cin
    
    cin >> expense1 >> expense2 >> expense3 >> expense4 >> expense5 >> expense6 >> expense7;
    
    // Analyze data: find total, average and largest
    
    sumExpenses = expense1 + expense2 + expense3 + expense4 + expense5 + expense6 + expense7;
    avgExpense = (sumExpenses) / 7;
    
    if ((expense1 > expense2) && (expense1 > expense3) && (expense1 > expense4) 
    && (expense1 > expense5) && (expense1 > expense6) && (expense1 > expense7)) {
       largestExpense = expense1;
    }
    else if ((expense2 > expense1) && (expense2 > expense3) && (expense2 > expense4) 
    && (expense2 > expense5) && (expense2 > expense6) && (expense2 > expense7)) {
       largestExpense = expense2;
    }
   else if ((expense3 > expense2) && (expense3 > expense1) && (expense3 > expense4)
    && (expense3 > expense5) && (expense3 > expense6) && (expense3 > expense7)) {
       largestExpense = expense3;
    }
    else if ((expense4 > expense2) && (expense4 > expense3) && (expense4 > expense1)
    && (expense4 > expense5) && (expense4 > expense6) && (expense4 > expense7)) {
       largestExpense = expense4;
    }
    else if ((expense5 > expense2) && (expense5 > expense3) && (expense5 > expense4)
    && (expense5 > expense1) && (expense5 > expense6) && (expense5 > expense7)) {
       largestExpense = expense5;
    }
    else if ((expense6 > expense2) && (expense6 > expense3) && (expense6 > expense4)
    && (expense6 > expense5) && (expense6 > expense1) && (expense6 > expense7)) {
       largestExpense = expense6;
    }
    else {
       largestExpense = expense7;
    }
    
    // Report
    
    cout << setw(39) << right << "My Weekly Expense Report" << endl; 
    cout << setw(39) << right << "------------------------" << endl;
    
    cout << setfill(' ') << setw(21) << weekDay1;
    cout << setfill(' ') << setw(19) << fixed << setprecision(2) << expense1 << endl;
    
    cout << setfill(' ') << setw(21) << weekDay2;
    cout << setfill(' ') << setw(19) << fixed << setprecision(2) << expense2 << endl;
    
    cout << setfill(' ') << setw(22) << weekDay3;
    cout << setfill(' ') << setw(18) << fixed << setprecision(2) << expense3 << endl;
    
    cout << setfill(' ') << setw(24) << weekDay4;
    cout << setfill(' ') << setw(16) << fixed << setprecision(2) << expense4 << endl; // setprecision = make sure 0 is displayed at the end of the decimal
    
    cout << setfill(' ') << setw(23) << weekDay5;
    cout << setfill(' ') << setw(17) << fixed << setprecision(2) << expense5 << endl;
    
    cout << setfill(' ') << setw(21) << weekDay6;
    cout << setfill(' ') << setw(19) << fixed << setprecision(2) << expense6 << endl;
    
    cout << setfill(' ') << setw(23) << weekDay7;
    cout << setfill(' ') << setw(17) << fixed << setprecision(2) << expense7 << endl;
    
    cout << "Total of expenses:";
    cout << setfill (' ') << setw(22) << fixed << setprecision(2) << sumExpenses << endl;
    cout << "Average of expenses:";
    cout << setfill(' ') << setw(20) << fixed << setprecision(2) << avgExpense << endl;
    cout << "Largest of expenses:";
    cout << setfill (' ') << setw(20) << fixed << setprecision(2) << largestExpense << endl;   
    
    return 0;
}
