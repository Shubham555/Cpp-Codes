
#include <iostream>
using namespace std;
// Destructor never takes an argument nor does it return any value 
int count=0;

class num{
    public:
     num(){
        count++;
        cout<<"this is the time when Constructor is called for object number "<<count<<endl;
     }
     ~num(){
        cout<<"this is the time when Destructor tructor is called for object number "<<count<<endl;
        count--;
     }
};
int main(){
   cout<<"we are inside the main function"<<endl;
   cout<<"Creating the first object n1"<<endl;
   num n1;
   {
       cout<<"entering this block"<<endl;
       cout<<"Creating two more objects"<<endl;
       num n2,n3;
       cout<<"Exiciting this block"<<endl;
   }
   cout<<"back to main"<<endl;
    return 0;
}


