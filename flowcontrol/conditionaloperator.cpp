// Example program
#include <iostream>
using namespace std;


int main()
{
    
  int num1,num2;
  cout <<"enter the numbers seprated with space to comaprison";
  cin>>num1>>num2;
  
  if(num1!=num2)
  {
    cout<<"largest"<< ((num1>num2) ? num1:num2)<<endl;
    
    cout<<"smallest"<<( (num1<num2) ? num1:num2)<<endl;
    
  }
  else
  
 cout<<"both are same";
 return 0;
}

