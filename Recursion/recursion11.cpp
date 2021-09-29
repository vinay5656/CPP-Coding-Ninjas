#include<iostream>
using namespace std;

int multiplyNumbers(int M, int N){
    if(N==1){
        return m;
    }else if(M ==0 || N==0){
        return 0;
    }
    int result = multiplyNumbers(M,N-1);
    return M+result;
    
}
int main(){
    int M,N; 
    cin>>M>>N;
    cout<<multiplyNumbers(M, N);
}