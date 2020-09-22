// Example program
#include <iostream>
#include <vector>

using namespace std;


 int main() 
 {
     vector <int> vec1{10,20,30};
     vector <int> vec2{7,8,9};
     
     /*vec1.push_back(10);
     vec1.push_back(20);
     
     cout<<vec1.at(0)<<endl;
     cout<<vec1.at(1)<<endl;
     cout<<"thi is "<<vec1.size()  <<"size of vector"<<endl;*/
     
     vector<vector<int>> vecd2;
     vecd2.push_back(vec1);
     vecd2.push_back(vec2);
     
     cout<<vecd2.at(0).at(0)<<"   "<<vecd2.at(0).at(1)<<"    "<<vecd2.at(0).at(2)<<endl;
     cout<<vecd2.at(1).at(0)<<"   "<<vecd2.at(1).at(1)<<"   "<<vecd2.at(1).at(2)<<endl;
     
     
     
     
     
   return 0;
}

// Example program
#include <iostream>
#include <vector>

using namespace std;


 int main() 
 {
     double us_can=1.5;
     cout<< "enter the canadian dollars to convert"<<endl;
     
     double can=0.0;
      double us=0.0;
     cin >>can;
     
    
     us=can*us_can;
     
     cout<<"the cnadaian dollar to US="<<us<<endl;
     
     
     
     
     
   return 0;
}
// Example program
#include <iostream>
#include <vector>

using namespace std;


 int main() 
 {
     double us_can=1.5;
     double can_us=0.75;
     int userinput;
      double canconversion=0.0;
      double usconversion=0.0;
      double usconvertedvalue=0.0;
      double canconvertedvalue=0.0;
     
     cout<< "What you want to convert?"<<endl;
    cout<< "1. US dollar to Canada"<<endl;
    cout<< "2. Canda to US"<<endl;
    
    cin >>userinput;
    
    if (userinput==1)
    {
         cout<< "Enter the amount: "<<endl;
         cin >>canconversion;
     
     usconvertedvalue=canconversion*us_can;
     
     cout<<"the US to Canadian="<<usconvertedvalue<<endl;
        
    }
    else if (userinput==2)
    {
         cout<< "Enter the amount: "<<endl;
         cin >>usconversion;
     
         cout<< "Enter the amount: "<<endl;
         canconvertedvalue=usconversion*can_us;
     
     cout<<"the cnadaian dollar to US="<<canconvertedvalue<<endl;
        
    }
    else
    {
       cout<<"You choose wrong option"<<endl; 
    
    }
         switch (userinput) 
   { 
       case 1: 
        cout<< "Enter the amount: "<<endl;
         cin >>canconversion;
     
     usconvertedvalue=canconversion*us_can;
     
     cout<<"the US to Canadian="<<usconvertedvalue<<endl;
               break; 
       case 2: 
                cout<< "Enter the amount: "<<endl;
         cin >>usconversion;
     
         canconvertedvalue=usconversion*can_us;
     
     cout<<"the cnadaian dollar to US="<<canconvertedvalue<<endl;
     break;
      
       default: cout<<"Choice option 1 and 2 only"<<endl; 
                break; 

     
    
    
     
     
     
     
     
   return 0;
}
