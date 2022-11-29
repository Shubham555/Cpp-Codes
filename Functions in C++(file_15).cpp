
#include <iostream>
using namespace std;

// **** function prototype ****//
// type 'function-name'(arguments);

int sum(int a,int b); // -->acceptable + recommended
//int sum(int ,int ); --> acceptable
//int sum(int a, b); --> not acceptable

//void g(void); //--> Acceptable 
void g(); //--> Acceptable 
 
int main(){
    int num1,num2;
  cout<<"Enter the value of num1"<<endl;
  cin>>num1;
  cout<<"Enter the value of num2"<<endl;
  cin>>num2;
   // here: "num1 and num2" are Actual parameters ,bcoz they are passing actual values to Function  
  cout<<"the sum is "<<sum(num1,num2)<<endl;
  g();
    return 0;
}
// here: "a and b" are Formal Parameters, bcoz they are taking values from actual parameters num1 and num2.
int sum(int a, int b){
    int c=a+b;
    
    return c;
}

void g(){
    cout<<"hello good morning";
}

