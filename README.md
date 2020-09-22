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
