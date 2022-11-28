
#include <iostream>
using namespace std;

int main(){
    
     int marks[]={23,45,56,89};
     
     int mathmarks[4];
     mathmarks[0]=6789;
     mathmarks[1]=678;
     mathmarks[2]=456;
     mathmarks[3]=345;
     
     cout<<"these are mathmarks "<<endl;
     
     cout<<mathmarks[0]<<endl;
     cout<<mathmarks[1]<<endl;
     cout<<mathmarks[2]<<endl;
     cout<<mathmarks[3]<<endl;
     
     cout<<"these are marks "<<endl;
     //you can change the value of an array
     marks[2]=555;
     cout<<marks[0]<<endl;
     cout<<marks[1]<<endl;
     cout<<marks[2]<<endl;
     cout<<marks[3]<<endl;
     
     for(int i=0;i<4;i++){
        cout<<"the value of marks"<<i<<" is "<<marks[i]<<endl;
     }
     // Quick quiz: do the same using while and do-while loops?
    
    /* int i=0;
     while(i<4){
        cout<<"the value of marks"<<i<<"is "<<marks[i]<<endl; 
        i++;
     }*/
     
     /*int i=0;
     do{
        cout<<"the value of marks"<<i<<" is "<<marks[i]<<endl;
        i++;
     }while(i<4);*/
     
     // pointers and arrays
     cout<<"pointers and arrays"<<endl;
     
     int* p = marks;     //--> means address of marks[0] i.e. '&'marks[0]:
           // here 'p' stores address'&'of marks[0] not value AND *p means gives/shows value of marks[0] ok! ;
    
      cout<<*(p++)<<endl; //it gives the value in 1st i.e. marks[0]
      cout<<*(++p)<<endl; //it gives the value in 3rd i.e. marks[2]
     
   /*  cout<<"the value of marks[o] i.e. *p is "<<*p<<endl;
     cout<<"the value of marks[1] i.e. *(p+1) is "<<*(p+1)<<endl;
     cout<<"the value of marks[2] i.e. *(p+2) is "<<*(p+2)<<endl;
     cout<<"the value of marks[3] i.e. *(p+3) is "<<*(p+3)<<endl;   */
     
     
     
     return 0;
}




