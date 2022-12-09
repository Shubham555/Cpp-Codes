
#include <iostream>
using namespace std;

class point{
  int x,y;
  
  public:
  point(int a, int b){
      x= a;
      y= b;
  }
  void display(){
    cout<<"the point is ("<<x<<","<<y<<")"<<endl;
  }
};

int main(){
   point p(3,4);
   p.display();
   point q(5,8);
   q.display();
    return 0;
}

