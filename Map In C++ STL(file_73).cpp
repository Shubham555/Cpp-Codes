/*************************** Map In C++ STL   *******************************/
#include <iostream>
#include <map>
#include <string>
using namespace std;
  
  //Map is an Assosiative array/container
int main(){
   map <string,int> marksmap;
   marksmap["Harry"]=98;
   marksmap["Shubham"]=98;
   marksmap["somu"]=5;
   marksmap.insert({{"kouzem",599},{"kou",675}});
   map <string,int> :: iterator iter;
   for (iter=marksmap.begin();iter!=marksmap.end();iter++){
       cout<<(*iter).first<<" "<<(*iter).second<<"\n";
       }
       
    cout<<"the size of map is "<<marksmap.size()<<endl;
    cout<<"the max size of map is "<<marksmap.max_size()<<endl;
    cout<<"the  empty's return value is "<<marksmap.empty()<<endl;
   
 return 0;
}
