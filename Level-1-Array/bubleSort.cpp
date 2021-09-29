#include<iostream>
using namespace std;

void bubleSort(int *arr,int size){
    int temp;
    for(int j=0;j<size-1;j++){
    
        for(int i=0;i<size-j-1;i++){
    
            if(arr[i]>arr[i+1]){
    
                temp = arr[i];
    
                arr[i] = arr[i+1];
    
                arr[i+1] = temp;
    
            }
    
        }
    }
    return;
}
int main(){
    int size;
    cin>>size;
    int *arr = new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    bubleSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}