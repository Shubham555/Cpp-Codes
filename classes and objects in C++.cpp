
#include <iostream>
#include <cmath>

using namespace std;

class point{
  int x,y;
  friend int distance(point o1, point o2);
  public:
  point(int a, int b){
      x= a;
      y= b;
  }
  void display(){
    cout<<"the point is ("<<x<<","<<y<<")"<<endl;
  }
};

int distance(point o1, point o2){
    return  sqrt ( (o1.x- o2.x)*(o1.x- o2.x)+ (o1.y- o2.y)*(o1.y- o2.y) );
                // [ simply square like 3*3 + 4*4 :) :) ]
}


int main(){
   point p(1,0);
   p.display();
   point q(70,0);
   q.display();
   
   int dis = distance(p,q);
   cout<<"the distance between two points is "<<dis<<endl;

    return 0;
}





