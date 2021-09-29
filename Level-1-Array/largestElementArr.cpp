#include<iostream>
using namespace std;

int largest(int *arr,int size){
    int max = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int size;
    cin>>size;
    int *arr = new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int max = largest(arr,size);
    cout<<"max = "<<max<<endl;
    return 0;
}