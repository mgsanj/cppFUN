/*
Write a program that continuously reads a character from the keyboard. The program then prints the character 
and the ASCII code for that character. If the input character is a 'Q' or 'q', the program terminates. For 
simplicity, the program can assume the characters are always terminated with a 'Q' or 'q'. Since the extraction 
operator will skip white spaces, it'll be easier to get one character from cin using the get member function of 
cin. For example,

    char input;
    cin.get(input);  // or input = cin.get();
    
For the following input,

   @ABCDEFG 12345Q
   
The output should look as follows.

   ASCII Code Finder

   You entered '@' and the ASCII code for that is 64.
   You entered 'A' and the ASCII code for that is 65.
   You entered 'B' and the ASCII code for that is 66.
   You entered 'C' and the ASCII code for that is 67.
   You entered 'D' and the ASCII code for that is 68.
   You entered 'E' and the ASCII code for that is 69.
   You entered 'F' and the ASCII code for that is 70.
   You entered 'G' and the ASCII code for that is 71.
   You entered ' ' and the ASCII code for that is 32.
   You entered '1' and the ASCII code for that is 49.
   You entered '2' and the ASCII code for that is 50.
   You entered '3' and the ASCII code for that is 51.
   You entered '4' and the ASCII code for that is 52.
   You entered '5' and the ASCII code for that is 53.
   You entered 'Q' and the ASCII code for that is 81.
*/


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
