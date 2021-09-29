#include<iostream>
using namespace std;
void merge(int array[], int const left, int const mid, int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
 
    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
 
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
 
    auto indexOfSubArrayOne = 0, // Initial index of first sub-array
        indexOfSubArrayTwo = 0; // Initial index of second sub-array
    int indexOfMergedArray = left; // Initial index of merged array
 
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}
 
void mergeSort(int input[], int start, int end, int size){
	if(size==0||size==1){
        return;
    }
    int mid = (start+end)/2;
    if(start>end){
        return;
    }
    if(size%2==0){
        mergeSort(input,start,mid,size/2);
        mergeSort(input,mid+1,end,size/2);
        merge(input, start, mid, end);
        
    }else{
        mergeSort(input,start,mid,(size/2)+1);
        mergeSort(input,mid+1,end,size/2);
        merge(input, start, mid, end);

    }
    return;
        
}
int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  int start = 0;
  int end = length-1;
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, start, end ,length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}