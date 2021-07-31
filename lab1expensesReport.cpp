/*

Use an IDE to create the program in the following order.

Define variables
Define variables to hold the following expenses: 45.25, 49.38, 12.75, 123.50, 8.25, 19.95, and 145.70.

(Don't use arrays or vectors as we have not covered those!)

Define variables to hold the days for the expenses. For example, define a variable named weekDay1 for holding "Sunday". Define a variable to be used for holding the sum of the expenses. Define a variable to be used for holding the average of the expenses.

Analyze the information
Compute the total of these expenses using the variables holding the expenses and store the result in the variable for holding the sum of the expenses.

Compute the average of these expenses using the variables holding the expenses and store the result in the variable for holding the average of the expenses.

Create a report
Display the contents of the variables holding the expense information to the screen one expense per line. You must use those variables holding the expense days for the reporting code.

You must use meaningful names for the variables. For example, use weekDay1 for storing the expense day information “Sunday.”

In the output, all numbers must display properly. The decimal points of the expense amounts, the total, and the average are aligned vertically. To accomplish this, you need to use manipulators: left, right, setw, fixed, showpoint and setprecision. For information on these manipulators, you can read 6.2 of Zybooks. The output should look exactly as follows.

*/

#include <iostream>
using namespace std;

void PrintNums(int a = 4, int b = 1, int c = 5) {
   cout << a << ", " << b << ", " << c << endl;
}

int main() {
   PrintNums();
   PrintNums(9, 7);
   PrintNums(6);

   return 0;
}
