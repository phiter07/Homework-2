/****
* PSEUDOCODE:
* 1. MinWordLength function, use a for and if loop.
* 2. MaxWordLength function, use a for and if loop. 
* 3. WordLengthRange function, return the range by taking MaxWordLength and subtract *   it with MinWordLength to find the range
* 4. AverageWordLength function, use a for loop to find the average word.
* 5. MostCommonWordLength function, use a for loop to count the words.
*    Use another for loop and inside that loop is if statements.
*/
#include <iostream>
#include <iomanip>
#include <sstream>
#include "dictionary.h"
#include <string>
using namespace std;

int MinWordLength(string words[], int length) {
    // TODO implement this function
    int minWord = words[0].length();
    int list;

    for(int i = 1; i < length; i++){
      list = words[i].length();
      if( list < minWord ){
        minWord = words[i].length();
        minWord = list;
      }
 
    }
    return minWord;
}

int MaxWordLength(string words[], int length) {
    // TODO implement this function
    int maxWord = words[0].length();
    int list;

    for(int i = 1; i < length; i++){
      list = words[i].length();
      if( list > maxWord ){
        maxWord = words[i].length();
        maxWord = list;
      }

    }
    return maxWord;
}

int WordLengthRange(string words[], int length) {
    // TODO implement this function
    return MaxWordLength(words, length) - MinWordLength(words, length);
}

int AverageWordLength(string words[], int length) {
    // TODO implement this function
    int total = 0;
    for(int i = 0; i < length; i++){
      total +=words[i].length();
    }
    int average = total/length;
    return average;  
}

int MostCommonWordLength(string words[], int length) {
    // TODO implement this function
    int counts[length];
    int maxCount = 0;
    int commonWord = 0;
    int counter; 

    for(int i = 0; i <length; i++){
         counts[i] = words[i].length();
    }

    for(int i = 0; i < length; i++){
        counter = 1;
        for (int j = i+1; j < length ; j++) {
          if(counts[i] == counts[j]){
            counter++;
          }
      }
          if(maxCount < counter){
              maxCount = counter;
               commonWord = counts[i];
          }
    }
    return commonWord;  
}
