//Constructor
#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to (set data to the objects) initialize the objects of its class. At the time of object creation.
    //It is automatically invoked whenever an object is created, bcoz of same name given from class.

    complex(int ,int); //Constructor declaration
    
    void printnumber(void){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex:: complex(int x, int y){ // ----> This is a "default constructor" as it takes no "parameters/arguments/values".
    a=x;  // this defult values.
    b=y;
  // cout<<"hello world";
}
int main(){
   complex c1(2,3),c2(4,5),c3(6,7);
   c1.printnumber();
   c2.printnumber();
   c3.printnumber();
    return 0;
}

/* charecterstics of Constructor

1. It shold be declared in the public section of the class.
2. they are autometically invoked whenever the object is created
3. they cannot return values and cannot have return types
4. it can have Arguments & also the defult arguments. like--> complex:: complex(int a=3, int b=5);
5. We cannot refer to their address

*/







