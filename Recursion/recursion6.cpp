#include<iostream>
using namespace std;

int sum(int input[], int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */ 
     int output=0;
     if(n==1 || n==0){
         return output+input[0];
     }
     output = sum(input+1,n-1);
     output = output+input[0];
     return output;
}

int main(){
    int input[] = {9,7,6,8};
    cout<<sum(input,4);
    return 0;
}