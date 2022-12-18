/*********************************** Virtual Functions Example *******************************************/
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
   virtual void display(){}
};

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
   CWHvideo djvideo(title,rating,videolength); // we can also directly pass like this :) CWHvideo djvideo("Django tutorial",4.69,4.56); 
   //  djvideo.display();
 
  //for CWHtext tutorial
   title="Django tutorial";
   words =433;
   rating=4.19; 
   CWHtext djtext(title,rating,words);  // we can also directly pass like this :) CWHvideo djvideo("Django tutorial",4.19,433); 
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
