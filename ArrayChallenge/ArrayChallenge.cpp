//
//  main.cpp
//  FindStats
//
//  Created by Anand Venkataraman on 2/8/17.
//  Copyright © 2017 Anand Venkataraman. All rights reserved.
//

#include <iostream>

using namespace std;
const int ARRAY_SIZE = 1000000;

// The following methods are stubs, meaning incomplete functions.
// You need to complete them and adjust their code to return the 
// correct values. Hopefully the function names are self-explanatory.
// If in doubt, ask in the forum.
//
int getArrayMin(int array[], int size) {

   int min = array[0];
   for (int i = 0; i < size; i++)
      if (array[i] < min)
         min = array[i];
   return min;
}

int getArrayMax(int array[], int size) {

   int max = array[0];
   for (int i = 0; i < size; i++)
      if (array[i] > max)
         max = array[i];
   return max;
}

int getArrayMean(int array[], int size) {

   double dSize = (double)size;
   double counter = (double)array[0] / dSize;
   for (int i = 1; i < size; i++)
      counter += (double)array[i] / dSize;
   return counter;
}

int getCountOfTargetInArray(int array[], int size, int target) {

   int count = 0;
   for (int i = 0; i < size; i++)
      if (array[i] == target)
         count++;
   return count;
}

int main(int argc, const char * argv[]) {
   // 1. Create an array of 1MM integers
   int* myArray = new int[ARRAY_SIZE];
   
   // 2. Stuff a million random ints into this array
   for (int i = 0; i < ARRAY_SIZE; i++) {
      myArray[i] = rand();
   }

   // 3. Call each of the above methods on this array and print
   //    the result.
   cout << "Min: " << getArrayMin(myArray, ARRAY_SIZE) << endl;
   cout << "Max: " << getArrayMax(myArray, ARRAY_SIZE) << endl;
   cout << "Mean: " << getArrayMean(myArray, ARRAY_SIZE) << endl;

   // 4. Pick some random target number and find the number of
   //    occurrences of this target in the array
   int randomInt = rand();
   cout << "Occurrences of " << randomInt << ": " << getCountOfTargetInArray(myArray, ARRAY_SIZE, randomInt) << endl;

   // 5. Histogram it. (Harder challenge) Use a smaller range to stuff
   //    the array, e.g. 0-100 Count the frequencies of each of these numbers
   //    in the array. e.g. 1 occurs X times, 2 occurs Y times, etc.


   delete myArray;
   return 0;
}
