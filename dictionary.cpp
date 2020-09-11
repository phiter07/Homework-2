/****
* PSEUDOCODE:
* 1. MinWordLength function, use a for and if loop.
*    - Declare minWord to 1st element
*    - Declare list
*    - for loop when i is less than length
*    - if true then set minWord to words[i].length
*    - return minWord
* 2. MaxWordLength function, use a for and if loop. 
*    - Declare maxWord to 1st element
*    - Declare list
*    - for loop when i is greater than length
*    - if true then set maxWord to words[i].length
*    - return maxWord
* 3. WordLengthRange function, return the range by taking MaxWordLength and subtract *    it with MinWordLength to find the range
* 4. AverageWordLength function, use a for loop to find the average word.
*    - Declare total to 0
*    - for when i is less than length sum is sum equal to words[i].length
*    - declare average to the total/length
*    - return average
* 5. MostCommonWordLength function, use a for loop to count the words.
*    Use another for loop and inside that loop is if statements.
*    - Declare counts[length], maxCount to 0, commonword to 0, and counter
*    - for loop to keep track of count
*    - for loop to keep track of count and increase if true
*    - return commonWord
*/
#include <iostream>
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
      if(list > maxWord){
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
