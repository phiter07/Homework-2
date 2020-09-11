#include <iostream>
#include <string>
#include "search.h"
#include "dictionary.h"
#include "dictionary.cpp"
#include <iomanip>

using namespace std;

int main() {
  int list[] = {1,2,4,5,6,7,8,9};
  string words[] = { "Kobe", "Bryant","Tyranneasaurus", "Lakers", "Mamba", "NBA", "Purple", "Gold" };

  int array_length = 8;
  int number = 5;


  int n = 3;

  cout << "Linear Search: " << LinearSearch(list,array_length,number) <<  endl;

  cout << "Binar Search: " << BinarySearch(list,array_length,number) <<  endl;

  cout << " ***------------DICTIONARY SEARCH------------***" << endl;

  cout << "Min Word Length: " << MinWordLength(words, array_length) << endl;

  cout << "Max Word Length: " << MaxWordLength(words, array_length) << endl;

  cout << "Range of Words: " <<  WordLengthRange(words, array_length) << endl;

  cout << "Average Word Length: " << AverageWordLength(words, array_length) << endl;

  cout << "Most Common Word Length: " <<  MostCommonWordLength(words, array_length) << endl;

  cout << " ***------------NTH ROOT FINDER------------***" << endl;
}