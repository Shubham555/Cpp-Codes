
#include <iostream>
using namespace std;

/**************************** structure ************************************/
/*struct employee{
    int eId;
    char favChar;
    float salary;
};

int main(){ 
     struct employee harry;
     struct employee shubham;  //just example that many "more variables" can made 
     struct employee om;      //by using this data type "struct employee" 
     
     harry.eId=100;
     harry.favChar='g';
     harry.salary=120000;
     
     cout<<"the value is "<<harry.eId<<endl;
     cout<<"the value is "<<harry.favChar<<endl;
     cout<<"the value is "<<harry.salary<<endl;
    return 0;
}*/

//************************ using typedef ***********************************//
/*
typedef struct employee{
    int eId;
    char favChar;
    float salary;
}ep;

int main(){
     ep harry;
     ep shubham;  //just example that many "more variables" can made 
     ep om;      //by using this data type "struct employee" 
     
     harry.eId=100;
     harry.favChar='g';
     harry.salary=120000;
     
     cout<<"the value is "<<harry.eId<<endl;
     cout<<"the value is "<<harry.favChar<<endl;
     cout<<"the value is "<<harry.salary<<endl;  
    return 0;
}  */

/**************************** union ************************************/

// AND the profit of "union" is that memory is saved(less memory reaserved i.e. of only one max. varibles's bytes)
/*
union money{               //assume ki money ka exchange kr rahe hai rice se car se.....;
    int rice; //4 bytes
    char car; //1   
    float pounds; //4
};

int main(){
    union money m1;
    
    m1.rice = 76;
    m1.car= 'c';
    
    cout<<m1.rice<<endl; //----> this gives garbage value bcoz in "union" "memory is shared" in all 3" as 
    cout<<m1.car<<endl;   // maximum variable's bytes ex.= 4 bytes, so we can use only one term at one time.
                         
                         // AND the profit of "union" is that memory is saved(less memory reaserved)
    return 0;
}  */

/**************************** enum ************************************/

int main(){
     enum meal {breakfast,lunch,dinner};
     meal m1 = breakfast;
     cout<<m1;   //(m1==1) it gives '0' as false as m1 is= 0 for breakfast
            //(m1==0) it gives '1' as true as m1 is= "0 for breakfast" ,similarly "1  for lunch" and "2 for dinner"
  
   /* cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl; */
    
    return 0;
}




