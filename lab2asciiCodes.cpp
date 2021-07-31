//
//  codefinder.cpp
//  labs22A
//
//  Created by Sanjana Gadaginmath on 07/17/2021
//

#include <iostream>
using namespace std;

int main() {
   string input;
   long unsigned int i;
   
   getline(cin, input);
   cout << "ASCII Code Finder" << endl;
   cout << endl;
   for (i = 0; i < input.length(); ++i) {
      cout << "You entered '" << input[i]
           << "' and the ASCII code for that is " << int(input[i]) << "." << endl;
      if (input[i] == 'Q' || input[i] == 'q') {
         break;
      }
   }
   
}
