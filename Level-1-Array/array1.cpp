#include<iostream>
#include<vector>
using namespace std;

int main(){
    // problem 1
    // int arr[] = {13,7,8,10,14,15};
    // int sum = 0;
    // for(int i=0;i<sizeof(arr)/4;i++){
    //     sum=sum+arr[i];
    // }
    // cout<<sum;

    // problem 2
    // int *arr = new int[10];
    // int sum=0;
    // for(int i=0;i<10;i++){
    //     arr[i] = i*10;
    // }
    // for(int i=0;i<10;i++){
    //     sum=sum+arr[i];
    // }
    

    //PROBLEM 3
     vector <int> arr[10];
    //  int *arr = new int[10];
     int sum=0;
     for(int i=0;i<arr.size();i++){
         arr[i] =i*10;
     }
     for(int i=0;i<arr.size();i++){
         sum=sum+arr[i];
     }
     cout<<sum;
    return 0;
}