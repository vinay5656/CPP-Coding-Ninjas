#include<iostream>
using namespace std;

int  fibo(int n){
    int smalloutput1;
    int smalloutput2;
    if(n==0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    smalloutput1 = fibo(n-1);
    smalloutput2 = fibo(n-2);
   
    return smalloutput1+smalloutput2;
}
int main(){ 
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;

}