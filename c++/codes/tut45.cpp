#include<iostream>
using namespace std;

class student{
    protected:
    int roll;
    public:
    void set_roll(int r){
        roll = r;
    }
    void printr(){
        cout<<"roll no is "<<roll<<endl;
    }
};

class test : virtual public student {
    protected:
      float physics ;
      float maths ;
    public:
    void setm(float p , float m){
        physics = p ;
        maths = m;
    }
    void printm(){
        cout<<"marks in physics :"<<physics<<endl;
        cout<<"marks in maths :"<<maths<<endl;
    }
};

class sports: virtual public student {
    protected:
    int cricket;
    public:
    void score(int c){
        cricket = c ;
    }
    void printc(){
        cout<<"score of cricket :"<<cricket<<endl;
    }

};

class result : public test , public sports {
    private:
    float total ;
    public:
    void sum(){

        total = physics + maths + cricket ;
        printr();
        printm();
        printc();
        cout<<"total is "<<total<<endl;
    }
};


int main( )
  {
      result w ;
      w.set_roll(59);
      w.setm(89 ,90);
      w.score( 100);
      w.sum();




return 0 ;
}