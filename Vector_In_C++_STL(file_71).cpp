/**********************  Vector In C++ STL  ****************************/
/*   Vector ka main use hai ki wo aise array hai jo ki size change krta hai.
    "Vectors are sequence containers representing: arrays that can change in size."               */




#include <iostream>
#include <vector> 
using namespace std;

template <class T> //-----------------------------> sb vector ko chle ke liye general display "Function template" banadi.
void display(vector<T> &v){                       // aise he kisi bhi member function ki template bana skte.
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Ways to create vectors:

     vector<int> vec1; //zero length integer vector
    //display(vec1);

     int element,size;
     cout<<"Enter the size of your vector "<<endl;
     cin>>size;

     for(int i=0;i<size;i++){
         cout<<"Enter the element to be added in vector:";
         cin>>element;
         vec1.push_back(element);
     }
    //  vec1.pop_back();
    display(vec1);
    vector<int> :: iterator iter = vec1.end(); //itrator means pointer banarahe hai vector meke konse bhi element ko
                                                 //  point karke unke sath khelne ke liye
    vec1.insert(iter-1,5,566);
    display(vec1);  

 /*   vector<char> vec2(4); //4-element character vector
    //vec2.push_back('5');
    //display(vec2);
    vector<char> vec3(vec2); //4-element character vector from vec2
    //display(vec3);
    vector<int> vec4(6, 3); //6-element vector of 3s
    display(vec4);
    cout << vec4.size();   */

    return 0;
}
