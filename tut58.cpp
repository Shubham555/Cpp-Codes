/************************  Abstract Base Class & Pure Virtual Functions in C++ ***********************/
#include<bits/stdc++.h>
using namespace std;

class CWH{
  protected:
  string title;
  float rating;
  
  public:
   CWH(string s,float r){
     title = s;
     rating = r;
  }
   virtual void display()=0;  //do nothing function ---> pure virtual function.
};    //  "Pure virtual function" mtlb aisa function jo Khud ko override kare he karde.. Khud ki zero/empty karle
  /*  "Abstract base class" usee banaya he jata hai ki usse dusre class derive krne hai
     means usase dusre/naye class derive karne he karne wale hai ye phle he fix hota hai,
     ki abstract base class mtlb dusra class karne wale hai iss base class ko use krke and class having at least one pure
   virtual function ,at least one virtual fuction jo khud ko override ktta hai. to ise kahte hai abstract base class :) */

class CWHvideo :public CWH{
    float videolength;
    public:
    CWHvideo(string s,float r,float vl): CWH(s,r){
    videolength = vl;
    }
    void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videolength<<" minutes"<<endl;
        }
};

class CWHtext : public CWH{
    int words;
    public:
    CWHtext(string s,float r,int wc): CWH(s,r){
        words =wc;
    }
    void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         } 
};

int main(){
   string title;
   float videolength,rating;
   int words;  
   
   //for CWHvideo tutorial
   title="Django tutorial";
   videolength = 4.56;
   rating=4.69;  
   CWHvideo djvideo(title,rating,videolength);   
   //  djvideo.display();
 
  //for CWHtext tutorial
   title="Django tutorial";
   words =433;
   rating=4.19; 
   CWHtext djtext(title,rating,words);   
  // djtext.display();


  ///making pointers of base class :
  CWH* tuts[2];
  tuts[0]=&djvideo;
  tuts[1]=&djtext;

  tuts[0]->display();
  tuts[1]->display();
 return 0;
}
/*

1.Rules for virtual functions
2.They cannot be static
3.They are accessed by object pointers
4.Virtual functions can be a friend of another class
5.A virtual function in the base class might not be used.
6.If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class

*/