#include<iostream>
using namespace std;

int main(){
    // int a = 10;
    // int *p = &a;
    // int **q = &p;
    // int b = 20;
    // *q = &b;
    // (*p)++;
    // cout << a << " " << b << endl;
   
    // int a = 100;
    // int *p = &a;
    // int **q = &p;
    // int b = (**q)++ + 4;
    // cout << a << " " << b << endl;


    int arr[] = {4, 5, 6, 7};
      
    int *p = (arr + 1);
    cout << *arr + 9;
    return 0;
    
     
  
    
}