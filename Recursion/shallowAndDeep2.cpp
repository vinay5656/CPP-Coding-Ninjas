#include<iostream>
#include<cstring>
using namespace std;
class  Student
{
private:
   int Roll_No;
   char *name;
    
public:
  Student(int Roll_No,char *name);
  void print(){
      cout<<Roll_No<<" "<<name<<endl;
  }
};
  Student::Student(int Roll_No,char *name)
{
    this->Roll_No = Roll_No;
    // shallow copy
    // this->name = name;
    // deep copy
    this->name = new char[strlen(name)+1];
    strcpy(this->name,name);
    
}
int main(){
    char name[10] = "abcde";
    Student s1(101803296,name);
    s1.print();
    name[2]='V';
    Student s2(101803296,name);
    s2.print();
    s1.print();
    return 0;
}
  