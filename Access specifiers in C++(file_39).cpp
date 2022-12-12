
/* protected: means inherite ho skta hai dusri class ko but uski 'self base class' 
 chodke baher se koi bhi class yaa function access/khel naii kar skta uske sath :)   */
#include <iostream>
using namespace std;
class base{
    protected:
      int a;
    private:
      int b;
};

class derived : protected base{
    
};
int main(){
   base b;
   derived d;
  // cout<<b.a; // Will not work since a is protected in both base as well as derived class
   
    return 0;
}


/* 

 	                     Public Derivation         Private Derivation   Protected Derivation
Private members          Not Inherited             Not Inherited        Not Inherited              
Protected members        Protected                 Private              Protected    
Public members           Public    	               Private              Protected

*/


