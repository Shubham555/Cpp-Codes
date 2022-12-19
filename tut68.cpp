/******** Member Function Templates & Overloading Functions Template in C++  *********/

#include <iostream>
using namespace std;

template <class T>
class Harry{
    public:
    T data;
    Harry(T a){
        data=a;
    }
    void display();
};

template<class T>      // Here's Member function template. (will work same as like, if we declared the member function inside the class, but here T ko bhi sathh leke chla na hai).
void Harry<T> :: display(){
    cout<<"the value of data is "<<data<<endl;
}


void func(int a){  // Here's Overloading of function Template.
    cout<<"i am first func "<<a<<endl;
}  
template <class T>
void func(T a){
    cout<<"i am templatised func "<<a<<endl;
}
template <class T>
void func1(T a){
    cout<<"i am templatised func1 "<<a<<endl;
}

int main(){
  // Harry<int> h(4);
  // Harry<char> h('C');
  // Harry<float> h(4.7);

  // cout<<h.data<<endl;
  // h.display();

 // func(4); //Exact match takes the highest prayority.
    func1(5);
    return 0;
}