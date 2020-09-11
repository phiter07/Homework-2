/****
* PSEUDOCODE:
* LinearSearch function, use for and if loop. If it's true return i. If false return 
* -1
* BinarySearch function, use a while and if loop.
*/

int LinearSearch(int numbers[], int length, int n) {
    // TODO implement this function
    for (int i = 0; i < length; i++){
      if (numbers[i] == n){
         return i;
      }
    }
   return -1;
}

int BinarySearch(int numbers[], int length, int n) {
    // TODO implement this function
    int first = 0;
    int middle;
    int last = length - 1;

    while (first <= last) {
      int middle = (first + last)/2; 
  
      if (numbers[middle] == n) {
        return middle;
      }
      if (numbers[middle] < n){
        first = middle + 1;
      }
      else {
        last = middle - 1;
      }
    }
    return -1;
}
