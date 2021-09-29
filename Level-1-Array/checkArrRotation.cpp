#include<iostream>
#include<algorithm>
using namespace std;

int arrayRotateCheck(int *input, int size){
    int num = input[0];
    sort(input,input+size);
    for(int i=0;i<size;i++){
        if(input[i]==num){
            return i;
        }
    }
    return -1;
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}