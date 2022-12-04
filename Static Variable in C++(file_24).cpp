//Static Variable
#include <iostream>
using namespace std;
class employee{
    int id;
    /**** Static Variable   ***/
    static int count;
    
    public:
    void setdata(void){
         cout<<"enter the id"<<endl;
         cin>>id;
         count++;
    }
    void getdata(void){
        cout<<"the id of this employee is "<<id<<" and this is employee number " <<count<<endl;
    }
    /************** static functions *****************/
    static void getcount(void){
        // cout<<id; throws an error ,bcoz they have access of only other 'static varible' or 'static functions'
        
        cout<<"the value the count is "<<count<<endl;
    }
};

// Count is the "static data member" of class Employee
int employee::count; //default value of count is to 0 (bcoz it is static varible)

int main(){
    employee harry,shubham,om;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private
    harry.setdata();
    harry.getdata();
    employee::getcount();
    
    shubham.setdata();
    shubham.getdata();
    employee::getcount();
    
    om.setdata();
    om.getdata();
    employee::getcount();
    return 0;
}


