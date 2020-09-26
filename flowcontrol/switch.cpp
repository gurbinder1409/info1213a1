 #include <iostream>
using namespace std;

int main()
  {
    char grade{};
    cout<<"enter your Grade";
     cin>>grade;
     
     switch(grade)
         {
         case'A':
         case'a':cout<<"you have to get more than 90 marks"<<endl;
          break;
          case'B':
         case'b':cout<<"you have to get more than 80 marks"<<endl;
          break;
          case'C':
         case'c':cout<<"you have to get more than 70 marks"<<endl;
          break;
          case'D':
         case'd':cout<<"you have to get more than 60 marks"<<endl;
          break;
          case'E':
         case'e':
         {
              char confirm{};
             cout<< "Are you sure! enter'y' or 'n'";
             cin>> confirm;
             
              if(confirm=='y'||confirm=='Y')
             cout<<"you should not stufy";
             
                else if(confirm =='n'||confirm  =='N')
             cout<<"you should  stufy";
              
              else
              cout<<"ilegal choice";
              
             
          break;
          
}
     
     default:cout<<"enter wrong choice";
    
    return 0;
}}
