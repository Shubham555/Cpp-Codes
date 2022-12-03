#include <iostream>
using namespace std;

class Animal{
    private:
    int legs;
   // char nickname[10];
   // char colour[10];
    
    public :
    int ears,hands;
    void giveproperties(int legs1); //,int nickname1, int colour1);
    void show(){
        cout<<"no. of legs are "<<legs<<endl;
       // cout<<"nice is "<<nickname<<endl;
      //  cout<<"colour is "<<colour<<endl;
        cout<<"no. of ears are "<<ears<<endl;
        cout<<"no. of hands are "<<hands<<endl;
    }
};
void Animal :: giveproperties( int legs1) //, int nickname1, int colour1)
{
  legs= legs1;
  // nickname= {"nickname1"};
   // colour= {"colour1"};
}
int main(){
   Animal dog;
   dog.ears=2;
   dog.hands=0;
   dog.giveproperties(4); //{4,"puppy","lal"};
   dog.show();
    return 0;
}

