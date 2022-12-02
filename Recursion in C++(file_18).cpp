#include <iostream>
using namespace std;
int fib(int n){
    if(n<2){
        return n;  // or return 1; very minar doubt depend on fibonacci sereis starts from index 0 or 1; 
    }
    return fib(n-2) + fib(n-1);
 }
 // fib(5)
// fib(4) + fib(3)
// fib(2) + fib(3) + fib(2) + fib(3)

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3); 
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;

int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    cout<<"the factorial of "<<n<<" is "<<factorial(n)<<endl;
    cout<<"the term in fibonacci sereis at position "<<n<<" is "<<fib(n)<<endl;
    return 0;
}


