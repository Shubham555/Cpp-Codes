
/************** "Memory allocation in classes" using arrays ,(for objects of class in Advance) ***************/
#include <iostream>
using namespace std;
class shop{
    int itemId[100];
    int itemprice[100];
    int counter;
    public:
    void initcounter(void) {counter=0;}
    void setprice(void);
    void displayprice(void);
};
void shop::setprice(void){
    cout<<"enter the id of item no."<<counter +1<<endl;
    cin>>itemId[counter];
    cout<<"enter the price of item"<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop:: displayprice(void){
    for(int i=0;i<counter;i++){
        cout<<"the price of item having itemId "<<itemId[i]<<" is "<<itemprice[i]<<endl;
    }
}
int main(){
     shop dukaan;
     dukaan.initcounter();
     dukaan.setprice();
     dukaan.setprice();
     dukaan.setprice();
     dukaan.displayprice();
    return 0;
}


