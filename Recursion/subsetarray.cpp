#include<iostream>
using namespace std;
// int subset(int input[], int n, int output[][20]) {
//     if(n==0){
//         output[0][0] = 0;
//         return 1;
//     }
//     int size = subset(input+1,n-1,output);
//     int nextIndex = size;
//     for(int i=0;i<size;i++){
//         if(i>n){
//             break;
//         }
//         for(int j=0;j<=i;j++){
            
//             output[nextIndex][j] = input[j]; 
//             // nextIndex++;
//         }  
//         nextIndex++; 
//     }
//     return nextIndex;
// }
int subset(int input[], int n, int output[][20]){
 if(n==0) {
      output[0][0]=0;
      return 1;
  }
  int smallOutput = subset(input+1,n-1,output);
  for(int i=0;i<smallOutput;i++) {
      int num_of_col = output[i][0] +1;
      cout<<endl;
      cout<<"num_of_col = "<<num_of_col<<endl;
      
     output[i+smallOutput][0] = num_of_col;
       output[i+smallOutput][1] = input[0];
      for(int j=2; j<num_of_col+1;j++) {
        output[i+smallOutput][j] = output[i][j-1];
      }
  }
  return 2*smallOutput;
}
int main() {
  int input[20],length, output[50][20];
  cin >> length;
  for(int i=0; i < length; i++){
    cin >> input[i];
  }
  int size = subset(input, length, output);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
