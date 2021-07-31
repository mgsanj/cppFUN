//  Sanjana Gadaginmath
//  Created by Sanjana Gadaginmath on 07/03/2021.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   // Define and init variables
   // Celsius whole numbers
   int CelsiusTemp1;
   int CelsiusTemp2;
   int CelsiusTemp3;
   int CelsiusTemp4;
   // Farenheit doubles
   double FarenheitTemp1;
   double FarenheitTemp2;
   double FarenheitTemp3;
   double FarenheitTemp4;
   
   const double const1 = 9.0 / 5;
   const int const2 = 32;
   
   cin >> CelsiusTemp1;
   cin >> CelsiusTemp2;
   cin >> CelsiusTemp3;
   cin >> CelsiusTemp4;
   
   // Convert temps
   FarenheitTemp1 = const1 * CelsiusTemp1 + const2;
   FarenheitTemp2 = const1 * CelsiusTemp2 + const2;
   FarenheitTemp3 = const1 * CelsiusTemp3 + const2;
   FarenheitTemp4 = const1 * CelsiusTemp4 + const2;
   
   // Report
   cout << "  Celcius     Fahrenheit" << endl;
   cout << "------------------------" << endl;
   // total - 24 , 12
   cout << setfill(' ') << setw(12) << CelsiusTemp1;
   cout << setfill(' ') << setw(12) << fixed << setprecision(1) << showpoint << FarenheitTemp1 << endl;
   
   cout << setfill(' ') << setw(12) << CelsiusTemp2;
   cout << setfill(' ') << setw(12) << fixed << setprecision(1) << showpoint << FarenheitTemp2 << endl;
   
   cout << setfill(' ') << setw(12) << CelsiusTemp3;
   cout << setfill(' ') << setw(12) << fixed << setprecision(1) << showpoint << FarenheitTemp3 << endl;
   
   cout << setfill(' ') << setw(12) << CelsiusTemp4;
   cout << setfill(' ') << setw(12) << fixed << setprecision(1) << showpoint << FarenheitTemp4 << endl;
   

   return 0;
}
