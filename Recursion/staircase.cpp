#include<iostream>
using namespace std;

// int countWays(int n,int ways,int smallStep,int midiumStep,int bigStep){
//     if(n==0){
//         ways++;
//         return ways;
//     }
//     int count = countWays(n,ways,)
//     return count;

// }
int stairCase(int n){
    if(n<0){
        return -1;
    }
    if(n==0 || n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }

    int count = stairCase(n-1)+stairCase(n-2)+stairCase(n-3);
    return count;
}
int main() {
    int n, output;
    cin >> n;
    output=stairCase(n);
    cout<< output <<endl;
}
