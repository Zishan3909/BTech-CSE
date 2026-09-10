//Write a c++ program for hybrid inheritnce.
#include <iostream>
using namespace std;
class Student{
   int roll;
   public:
   void get_roll (int x){
       roll = x;
   }
   void put_roll(){
       cout<<"Roll number: "<<roll<<endl;
   }
};
class test:public Student
{
    protected:
    float t1,t2;
    public:
    void get_marks(float x,float y){
        t1 = x;
        t2 = y;
    }
    void put_marks(){
        cout<<"Marks obtained: "<<endl;
        cout<<"Test 1: "<<t1<<endl;
        cout<<"Test 2: "<<t2<<endl;
    }
};
class sports{
    protected:
    float score;
    public:
    void get_score(float x){
        score = x;
    }
    void put_score(){
        cout<<"Sports score: "<<score<<endl;
    }
};
class result:public test,public sports{
    float total;
    public:
    void display(){
        total = t1+t2+score;
        put_roll();
        put_marks();
        put_score();
        cout<<"Total score: "<<total<<endl;
    }
};
int main(){
    result obj;
    obj.get_roll(101);
    obj.get_marks(85.5,90.0);
    obj.get_score(15.0);
    obj.display();
    return 0;
}