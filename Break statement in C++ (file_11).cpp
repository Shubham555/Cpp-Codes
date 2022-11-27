 
#include <iostream>
using namespace std;

int main(){
    // use of break 
   /* for(int i=0;i<40;i++){
        if(i==2){
            break;
        }  
        cout<<i<<endl;
        
    }       */
    
    
    //use of continue
    for(int i=0;i<40;i++){
        
        if(i==2){
            continue; //--> skips the ittration that runs and wil print 2
        } 
        cout<<i<<endl;
    }  
    return 0;
}



