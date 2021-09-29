#include <iostream>
#include <algorithm>
using namespace std;

// int deleteElement(int *arr, int firstIndex, int secondIndex, int n){
    
//     for(int j = firstIndex;j<n;j++){
//         arr[j] = arr[j+1];
//     }
//     n--;
//     for(int j = secondIndex-1;j<n;j++){
//         arr[j] = arr[j+1];
//     }
//     n--;
//     return n;
// }
// int removeDuplicate(int *arr,int n){
//     int sum;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                sum+=arr[i];
//                break;
//             }
//         }
//     }
//     return sum;
// }

int findUnique(int *arr, int n){
    // for(int i=0;i<n;i++){
    //     int num = arr[i];
    //     for(int j = i+1;j<n;j++){
    //         if(arr[j] == -1){
    //             continue;
    //         }
    //         if(arr[j]==num){
    //             arr[i]= -1;
    //             arr[j]= -1;
    //             break;
    //         }
    //     }
    //     if(arr[i] != -1){
    //         return arr[i];
    //     }
    // }
    // return 0;
    /* method 2 */
    // int num;
    // while(n>1){
    //     cout<<endl;
    //     for(int i=0;i<n;i++){
    //         cout<<arr[i]<<" ";
    //     }
    //     cout<<endl;
    //     for(int i=0;i<n;i++){
    //         num = arr[i];
    //         for(int j=i+1;j<n;j++){
    //             if(arr[j] == num){
    //                 n = deleteElement(arr, i, j , n);
    //             }
    //         }
    //     }
    // }
    // return arr[0];
    /* method 3*/
    // int sum =0;
    // for(int i=0;i<n;i++){
    //     sum = sum+arr[i];
    // }
    // int sumM = removeDuplicate(arr,n);
    // return sum-2*sumM;
    /*method 4*/
    sort(arr,arr+n);
    for(int i=0;i<n;i=i+2){
        if(arr[i] != arr[i+1]){
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;

    }
    

    return 0;
}