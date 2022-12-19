/************  C++ Function Templates & Function Templates with Parameters   **************/

#include<iostream>
using namespace std;

/*
float fuction_avg(int a, int b){
    float avg;
    avg=(a+b)/2.0;
    return avg;
}

float fuction_avg2(int a, float b){
    float avg;
    avg=(a+b)/2.0;
    return avg;
}
*/

// C++ Function Templates & Function Templates with Parameters //
template<class T1,class T2>
float fuction_avg(T1 a,T2 b){
    float avg;
    avg=(a+b)/2.0;
    return avg;
}
template <class T>   // ab sb ek hee tarh ke data type lene wale ho to ek hee T declare kr skte naa.
void swapp(T &a, T &b){
   T temp =a;
   a=b;
   b=temp;
}


int main(){
  float a;
  a = fuction_avg(5,2.4);   //  a = fuction_avg(int=5,float=2);  a = fuction_avg(float=5.0,float=2.4);
                         // aisee kuch bhi data type ke variables pass kr skte.
  cout<<"the average of these numbers is "<<a<<endl;


  int x= 5, y= 7;
  cout<<"the value of x and y before swapp is "<<x<<","<<y<<endl;
  swapp(x,y);
  cout<<"the value of x and y after swapp is "<<x<<","<<y<<endl;
    return 0;
}
