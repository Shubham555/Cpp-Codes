

/******************** array of objects *********************/
#include <iostream>
using namespace std;

class employee{
    int id;
    int salary;
    
    public:
    void setId(void){
        salary=122;
        cout<<"enter the id of employee"<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"the id of this employee is "<<id<<endl;
    }
};

int main(){
  // employee harry,shubham,om,krishna;
  // harry.setId();
  // harry.getId();
  
  employee fb[4];        /*** here simple "array of objects" ***/
  for (int i=0;i<4;i++){
      fb[i].setId();
      fb[i].getId();
  }
    return 0;
}




