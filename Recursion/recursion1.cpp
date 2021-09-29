#include<iostream>
using namespace std;

int power(int x, int n){
    if(n==1){
        return x;
    }
    int smalloutput = power(x, n-1);
    int output = x*smalloutput;
    return output;
}
int main(){
    int x, n;
    cin>>x>>n;
    cout << power(x, n) << endl;
}