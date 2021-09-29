#include<iostream>
using namespace std;
// bool check(int *arr,int n,int element,int start){
//     for(int i=start;i<n;i++){
//         if(arr[i]==element){
//             return true;
//         }
//     }
//     return false;
// }
int tripletSum(int *arr, int n, int num)
{
	// //Write your code here
    // int count=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         int element= num-(arr[i]+arr[j]);
    //         bool isParsent = check(arr,n,element,j+1);
    //         if(isParsent){
    //             count++;
    //         }
    //     }
    // }
    // return count++;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int element = num-(arr[i]+arr[j]);
            // bool isParsent = check(arr,n,element,j+1);
            // if(isParsent){
            //     count++;
            // }
            for(int k=j+1;k<n;k++){
                if(element==arr[k]){
                    count++;
                }
            }
        }
    }
    return count++;
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}