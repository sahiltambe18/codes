#include <iostream>
using namespace std;
 // forward declaration
 class complex ;

class add{
     public:
     int sum(int a ,int b){
         return (a+b);
     }
     int real(complex o1 , complex o2);
     int image(complex o1 , complex o2);

};


class complex
{

    int a, b;
    friend int add ::real(complex o1 ,complex o2);
    friend int add ::image(complex o1 ,complex o2);

public:
    void set(int x1, int x2)
    {
        a = x1;
        b = x2;
    }
    
    void print()
    {
        cout << "the number is " << a << " + " << b << "i" << endl;
    }
};

   int add :: real(complex o1 , complex o2){
         return (o1.a+o2.a);
     }
int add :: image(complex o1 , complex o2){
         return (o1.b+o2.b);
     }

int main()
{

    complex c1 , c2 ;
    c1.set(5,6);
    c1.print();

    c2.set(9 ,5);
    c2.print();

    add c3 ;
    int s = c3.real(c1 , c2);
    cout<<"the sum of real a is "<<s<<endl;

      int r = c3.image(c1 ,c2);
      cout<<"the sum of image part is "<<r<<"i"<<endl;


    return 0;
}