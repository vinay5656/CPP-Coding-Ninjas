#include<iostream>
using namespace std;

int linnerSearch(int *arr,int size,int element){
    for(int i=0;i<size;i++){
        if(element == arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int element;
    cin>>element;
    int size;
    cin>>size;
    int *arr = new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int index = linnerSearch(arr,size,element);
    cout<<"index = "<<index<<endl;
    cout<<"element = "<<arr[index]<<endl;
    return 0;
}