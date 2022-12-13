/***************** Multilevel Inheritance *******************/
#include <iostream>
using namespace std;

class student{
  protected:
  int roll_number;
  public:
  void set_roll_number(int );
  void get_roll_number();
};
void student :: set_roll_number(int r){
    roll_number= r;
}
void student :: get_roll_number(){
    cout<<"your roll number is "<<roll_number<<endl;
}
class exam :public student{
    protected:
    int math_marks;
    int physics_marks;
    public:
    void set_marks(int ,int );
    void get_marks();
};
void exam:: set_marks(int m1,int m2){
    math_marks=m1;
    physics_marks=m2;
}
void exam:: get_marks(){
    cout<<"your math_marks are "<<math_marks<<endl;
    cout<<"your physics_marks are "<<physics_marks<<endl;
}
class result : public exam{
   float percentage;
   public :
   void display_result(){
       get_roll_number();
       get_marks();
       cout<<"your result is "<<(math_marks+physics_marks)/2<<"%"<<endl;
   }
};

int main(){
    result harry;
    harry.set_roll_number(4578);
    harry.set_marks(94,90);
    harry.display_result();
    /*
    Note:
     if we are inheriting B from A and C from B:[A-->B-->C]
     1.A is base class for B and B is base class for C 
     2.A-->B-->C is called inheritance path
     
   */
    return 0;
}


