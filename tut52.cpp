/**************************** Array of Objects Using Pointers in C++ *****************/
#include <bits/stdc++.h>
using namespace std;

class ShopItem
{
    int Id;
    float Price;

public:
    void setdata(int a, float b)
    {
        Id = a;
        Price = b;
    }
    void getdata()
    {
        cout << "the Id of this item is " << Id << endl;
        cout << "the Price of this item is " << Price << endl;
    }
};
//  1  2  3
//        ^
//        |
//        |
//       ptr
//   ptrtemp

int main()
{
    int size = 3;
    //int* ptr= &size;
    //int* ptr= new int[3]

    // let 3 items be :
    //  gebneral store item
    //  vegitable
    //  hardware
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrtemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setdata(p,q);
        ptr->setdata(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "item number " << i + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    return 0;
}