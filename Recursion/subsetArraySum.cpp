#include<iostream>
using namespace std;
int helper(int input[], int n, int output[][50], int k, int newout[][50]){
    if(n==0) {
     newout[0][0]=0;
     return 1;
    }
  int size = subsetSumToK(input+1,n-1,output,k,newout);
  int sum =0;
  for(int i=0;i<size;i++) {
      int num_of_col = newout[i][0] +1;
      // cout<<endl;
      // cout<<"num_of_col = "<<num_of_col<<endl;
      
     newout[i+size][0] = num_of_col;
     newout[i+size][1] = input[0];
      sum =sum+input[0];
      for(int j=2; j<num_of_col+1;j++) {
          newout[i+size][j] = newout[i][j-1];
          sum = sum+newout[i][j-1];
      }
      if(sum == k){
          
              for(j=1;j<num_of_col+1;j++){
                  output[i][j] = newout[i][j];
              }
          
      
       }
  }
  
  return 2*size;

}

int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here
   int newout[100][50];
   int size = helper(input,n,output,k,newout);
   return size;
}
int main() {
  int input[20],length, output[100][50], k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  cin >> k;
  
  int size = subsetSumToK(input, length, output, k);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}

