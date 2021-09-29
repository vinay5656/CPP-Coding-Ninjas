#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{
    //Write your code here
   
    int arr[n],size=0;
    for(int i=0;i<n;i++){
        size++;
        arr[i]=input[i];
        if(input[i]==d){
            break;
        }
    }
    for(int i=0;i<n;i++){
        input[i] = input[i+size];
    }
    for(int i=n-size,k=0;i<n&&k<size;i++,k++){
        input[i] = arr[k];
    }

}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}