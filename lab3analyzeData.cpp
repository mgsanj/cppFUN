//
//  dataanalysis.cpp
//  labs22A
//
//  Created by Sanjana Gadaginmath on 07/23/2021.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    /* This program is required to read integer data from cin and do some analysis. 
    At the end it prints a formatted summary of the analysis.
    The program reads whole numbers from cin and keeps track of 
    the count, total, largest, and smallest of the whole numbers, The whole numbers terminates with -1. 
    The program then does the average of the numbers. 
    At the end it prints a formatted summary of the analysis. */
    
    //Define and initialize variables
    int inputNum;
    int count = 0;
    double count2 = 0.0;
    int sum = 0;
    double average;
    int MAX;
    int MIN;
    int endingNum = -1;
    
    // Algorithm for finding max
    // 1. Get the input number.
    cin >> inputNum;
    // 2. Use the input number as the initial guess.
    MAX = inputNum;
    MIN = inputNum;
    // 3. While the input number is not the ending number
    while (inputNum != endingNum) {
       // 4. if the input number is larger than the guess
       if (inputNum > MAX) {
          // 5. then update the guess with the input number
          MAX = inputNum;
      }
      else if (inputNum < MIN) {
         MIN = inputNum;
      }
      ++count;
      ++count2;
      sum += inputNum;
      // 6. Get the input number
      cin >> inputNum;
      // 7. End of while
   }
   average = sum / count2;
   // 8. Announce the max number.
   
   // Report
   cout << "Summary of Data" << endl << "=======================" << endl;
   cout << setw(8) << left << "Count: " 
        << setw(13) << right << count << endl;
   cout << setw(8) << left << "Sum: "
        << setw(13) << right << sum << endl;
   cout << setw(8) << left << "Average: " 
        << setw(15) << right << fixed << setprecision(2) << average << endl;
   cout << setw(8) << left << "Max: " 
        << setw(13) << right << MAX << endl;
   cout << setw(8) << left << "Min: " 
        << setw(13) << right << MIN << endl;
    
    return 0;
}

/*
For input
42
468
335
501
170
725
479
359
963
465
706
146
282
828
962
492
996
943
828
437
392
605
903
154
293
383
422
717
719
896
448
727
772
539
870
913
668
300
36
895
704
812
323
334
674
665
142
712
254
869
548
645
663
758
38
860
724
742
530
779
317
36
191
843
289
107
41
943
265
649
447
806
891
730
371
351
7
102
394
549
630
624
85
955
757
841
967
377
932
309
945
440
627
324
538
539
119
83
930
542
834
116
640
659
705
931
978
307
674
387
22
746
925
73
271
830
778
574
98
513
987
291
162
637
356
768
656
575
32
53
351
151
942
725
967
431
108
192
8
338
458
288
754
384
946
910
210
759
222
589
423
947
507
31
414
169
901
592
763
656
411
360
625
538
549
484
596
42
603
351
292
837
375
21
597
22
349
200
669
485
282
735
54
1000
419
939
901
789
128
468
729
894
649
484
808
422
311
618
814
515
-1

Output format
 Summary of Random.txt
 =======================
 Count:           200
 Sum:          105527
 Average:         527.63
 Max:            1000
 Min:               7
 */
