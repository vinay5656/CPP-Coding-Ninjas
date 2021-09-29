#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> arr;
	arr.resize(5);
	
	for(int j=0;j<arr.size();j++){
		cin>>arr[j];
	}
	for(int j=0;j<arr.size();j++){
		cout<<arr[j];
		cout<<endl;
	}
    cout<<arr.at(1);
    arr.push_back(56);
    for(int j=0;j<arr.size();j++){
		cout<<arr[j];
		cout<<endl;
	}

	return 0;
}
