 
#include <iostream>
using namespace std;
int c=45;  // --> global declare c;
int main(){
    
    /*************** built in data types ********************
    /*int a,b,c;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"the sum is "<<c<<endl;
    cout<<"the global value of c:"<<::c;    //use here'::'*/
    
    //*************** float, double ,long double literals ********************
    
    /*float d = 34.4f;    // use these 'f' & 'l' while passing the values for float & long double 
    long double e =34.4l;
    cout<<"the size of 34.4 is "<<sizeof(34.5)<<endl;
    cout<<"the size of 34.4f is "<<sizeof(34.5f)<<endl;
    cout<<"the size of 34.4F is "<<sizeof(34.5F)<<endl;
    cout<<"the size of 34.4l is "<<sizeof(34.5l)<<endl;
    cout<<"the size of 34.4L is "<<sizeof(34.5L)<<endl;
    
    cout<<"the value of d "<<d<<endl<<"the value of e is "<<e; */
    
    //*************** reference variables ********************
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    float x=455;
    float &y=x;
   // y=88;  -->here if we change the value of y then x ki value also changed
    cout<<x<<endl;
    cout<<y<<endl;
    
    //*************** typecasting ********************
    
    int a =45;
    float b=45.96;
    cout<<"the value of a is"<<(float)a<<endl;
    cout<<"the value of a is"<<float(a)<<endl;
    
    cout<<"the value of b is"<<(int)b<<endl;
    cout<<"the value of b is"<<int(b)<<endl;
    int c= int(b);
    
    cout<<"the expression is "<<a + b<<endl;
    cout<<"the expression is "<<a + (int)b<<endl; 
    cout<<"the expression is "<<a + int(b)<<endl;   
    return 0;
}


