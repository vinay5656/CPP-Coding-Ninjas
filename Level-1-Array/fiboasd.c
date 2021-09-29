#include <stdio.h>  
// using namespace std;  
int fibonacci(int number,int n1,int n2){
     int sum=0,n3; 
    sum = sum+n1+n2; 
    for(int i=2;i<number;++i) 
    { 
     
     n3=n1+n2;    
     sum = sum+n3; 

     n1=n2;    
     n2=n3;    
    }    
      
      return sum;

}
int main() {  
  int n1=0,n2=1,number;     
   scanf("%d",&number);    
   int sum = fibonacci(number,0,1);
   printf("%d",sum);
   return 0;
}  