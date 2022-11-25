
#include <iostream>
using namespace std;

int main(){
   /* int a=34;
    cout<<"the value of a is "<<a<<endl;
    a=45;
    cout<<"the value of a is "<<a;*/
    
   //**************constants in C++ *****************
   
   // const int a=34;        //declared woith'const' keyword then value of a cant be changed it ramins constant
  //cout<<"the value of a is "<<a<<endl;
  //  a=45;     // <--- throughs "error" bcoz a is constant
 //cout<<"the value of a is "<<a;
 
 //***************Manipulators in c++ ****************
 /* int a=3, b=32,c=1234;
 
 cout<<"the value of a is "<<a<<endl;
 cout<<"the value of b is "<<b<<endl;
 cout<<"the value of c is "<<c<<endl;
 
 cout<<"the value of a is "<<setw(4)<<a<<endl;
 cout<<"the value of b is "<<setw(4)<<b<<endl;  //complier hasnt known setw() the manipulator so gives "error"
 cout<<"the value of c is "<<setw(4)<<c<<endl; */

 //setw(4) will print the above integers like 
 //_ _ _ 3
 //_ _ 3 2
 //1 2 3 4
 
 //******************operator precedence *******************
 //****Associativity from left to right & right to left aslo***(when precedence Equal)
  
  int a=3, b=5;
 // int c = (a*5)+b; // dont forgot sometime to declare new vairable like here 'c'
  int c = ((((a*5)+b)-45)+87); 
  cout<<c;
    return 0;
}




