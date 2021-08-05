/*
Steps

    1. Define and Initialize Variables
        Define seven string variables and initialize them with the days of a week. Define one variable per line. Use meaningful names for the variables. For example, string day1 = "Sunday"; for the first day of the week.

        Define seven double variables and initialize them with the expenses of the week. Define one variable per line. Use meaningful names for the variables. For example, double day1Exp = 45.25; for the expense of the first day. Use 49.38, 12.75, 123.5, 8.25, 19.95, 145.7 for the rest of the days.

    2. Create a Data File
        Define a named string constant for the file name, “expenses.txt”. Use a meaningful name for the variable. The name must be in uppercase.

        Define an ofstream variable. Use a meaningful name for the variable. For example, outFile.

        Use the ofstream variable to open the file using the named string constant defined above.

        Use the insertion operator << to insert the variable for the first day, followed by a space and then the variable for the expense of the first day in that order.

        Do the same thing for the other six days and expenses.

    3. Close The File
        Use the ofstream variable to close the file.

    4. Report
        Inform the user that the file expenses.txt has been created.

        Use cout to inform the user that the file expenses.txt has been created. You must use the named constant for the file name in the cout statement. That is, the following statement will not be accepted.

        cout << "File expenses.txt has been created." << endl;

        Run and Check The File

        Test your code and see if the output file, expenses.txt, and the program output are exactly the same as the expected.

*/

//
//  main.cpp
//  labs
//
//  Created by Sanjana Gadaginmath on 12/18/04.
//  Copyright © 2021 De Anza College. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main() {
    // Define and Initialize Variables
    
    // Define seven string variables and
    // initialize them with the days of a week.
    // Define one variable per line.
    // Use meaningful names for the variables.
    // For example, string day1 = "Sunday"; for the first day of the week.
    string day1 = "Sunday";
    string day2 = "Monday";
    string day3 = "Tuesday";
    string day4 = "Wednesday";
    string day5 = "Thursday";
    string day6 = "Friday";
    string day7 = "Saturday";
    
    
    // Define seven double variables and
    // initialize them with the expenses of the week.
    // Define one variable per line. Use meaningful names
    // for the variables. For example, double day1Exp = 45.25;
    // for the expense of the first day.
    // Use 49.38, 12.75, 123.5, 8.25, 19.95, 145.7 for the rest of the days.
    double day1Exp = 45.25;
    double day2Exp = 49.38;
    double day3Exp = 12.75;
    double day4Exp = 123.5;
    double day5Exp = 8.25;
    double day6Exp = 19.95;
    double day7Exp = 145.7;
    
                
    // Create a Data File
            
    // Define a named string constant for the file name, "expenses.txt".
    // Use a meaningful name for the variable. The name must be in uppercase.
    string EXPENSES_FILE = "expenses.txt";
    
                
    // Define an ofstream variable. Use a meaningful name for the variable.
    // For example, outFile.
    ofstream outFile;
                    
    // Use the ofstream variable to open the file using the named
    // string constant defined above.
    outFile.open(EXPENSES_FILE);
                    
    // Use the insertion operator << to insert the variable
    // for the first day and then the variable for the expense of
    // the first day in that order.
   // Do the same thing for the other six days and expenses.

    outFile << day1 << " " << day1Exp << endl;
    outFile << day2 << " " << day2Exp << endl;
    outFile << day3 << " " << day3Exp << endl;
    outFile << day4 << " " << day4Exp << endl;
    outFile << day5 << " " << day5Exp << endl;
    outFile << day6 << " " << day6Exp << endl;
    outFile << day7 << " " << day7Exp << endl;   
                            
    // Close The File                            
    // Use the ofstream variable to close the file.
    outFile.close();
   
                            
    // Report
                            
    // Inform the user that the file expenses.txt has been created.
                            
    // Use cout to inform the user that the file expenses.txt
    // has been created. You must use the named constant for the file name
    // in the cout statement. That is, the following statement
    // will not be accepted.
                                
    // cout << "File expenses.txt has been created." << endl;
    cout << "File " << EXPENSES_FILE << " has been created." << endl;
    return 0;
    
   
    
    return 0;
}
