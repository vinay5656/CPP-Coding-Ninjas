#include<iostream>
using namespace std;

void merge(int input[], int const start,int const mid,int const end){
    int const arrayOneSize = mid-start+1;
    int const arraytwoSize = end - mid;
    int *firstArray = new int[arrayOneSize];
    int *secondArray = new int[arraytwoSize];
    for(int i=0;i<arrayOneSize;i++){
        firstArray[i] = input[i+start];
    }
    for(int i=0;i<arraytwoSize;i++){
        secondArray[i] = input[i+mid+1];
    }
    int firstArrayIndex = 0;
    int secondArrayIndex = 0;
    int inputArrayIndex = start;
    while(firstArrayIndex<arrayOneSize && secondArrayIndex<arraytwoSize){
        if(firstArray[firstArrayIndex]<=secondArray[secondArrayIndex]){
            input[inputArrayIndex] = firstArray[firstArrayIndex];
            firstArrayIndex++;
        }else{
            input[inputArrayIndex] = secondArray[secondArrayIndex];
            secondArrayIndex++;
        }
        inputArrayIndex++;
    }
    while(firstArrayIndex<arrayOneSize){
        input[inputArrayIndex]=firstArray[firstArrayIndex];
        firstArrayIndex++;
        inputArrayIndex++;
    }
    while(secondArrayIndex<arraytwoSize){
        input[inputArrayIndex]=secondArray[secondArrayIndex];
        secondArrayIndex++;
        inputArrayIndex++;
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