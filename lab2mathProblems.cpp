/*
The program reads pairs of whole numbers continuously from cin. For each pair, it checks to see both numbers are 
within the range between 100 and 999 inclusive. If the numbers are valid, the program displays the addition of the 
numbers in the format shown below. And the program continues to read next pair of whole numbers. If the numbers are 
not valid, the program terminates.

You need to use a loop statement to accomplish this.

With the following input,

101 101 202 203 198 891 345 426 0 0

The output should be exactly as follows.

  101
+ 101
-----
  202

  202
+ 203
-----
  405

  198
+ 891
-----
 1089

  345
+ 426
-----
  771
*/

//
//  mathtutor.cpp
//  labs22A
//
//  Created by Sanjana Gadaginmath on 07/17/2021.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Get two whole numbers between 100 and 999 from cin
    const int MIN_VAL {100};
    const int MAX_VAL {999};
    int add1, add2;
    
    
    cin >> add1;
    cin >> add2;
    while ((add1 >= MIN_VAL && add1 <= MAX_VAL) && (add2 >= MIN_VAL && add2 <= MAX_VAL)) {
       cout << setw(5) << right
            << add1 << endl
            << "+ " << add2 << endl
            << setw(5) << right
            << "-----" << endl
            << setw(5) << right
            << add1 + add2 << endl << endl;
       cin >> add1;
       cin >> add2;
    }

    
    return 0;
}
/*
 Test with the following data
 101 101 202 203 198 891 345 426 0 0
*/
