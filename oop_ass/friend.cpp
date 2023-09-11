// #include <iostream>
// using namespace std;

// class meter_cm;
// class feet_inch
// {
//     int feet, inch;

// public:

//     feet_inch(int, int);
//     void display();
//     friend feet_inch add(feet_inch, meter_cm);
//     friend meter_cm add(meter_cm, feet_inch);
//     friend feet_inch sub(feet_inch, meter_cm);
//     friend meter_cm sub(meter_cm, feet_inch);
// };
// class meter_cm
// {
//     int meter, cm;

// public:
    
//     meter_cm(int, int);
//     void display();
//     friend feet_inch add(feet_inch, meter_cm);
//     friend meter_cm add(meter_cm, feet_inch);
//     friend feet_inch sub(feet_inch, meter_cm);
//     friend meter_cm sub(meter_cm, feet_inch);
// };

// feet_inch::feet_inch(int f, int i)
// {
//     feet = f;
//     inch = i;
// }

// meter_cm ::meter_cm(int m, int c)
// {
//     meter = m;
//     cm = c;
// }

// void feet_inch ::display()
// {
//     cout << feet << " ft   " << inch << "  inch" << endl;
// }

// void meter_cm ::display()
// {
//     cout << meter << " m    " << cm << "  cm" << endl;
// }

// feet_inch add(feet_inch x, meter_cm y)
// {
//     feet_inch temp(0, 0);
//     temp.feet = x.feet + y.meter * (3.37);
//     temp.inch = x.inch + y.cm * (0.393);

//     temp.feet += temp.inch / 12;
//     temp.inch = temp.inch % 12;

//     return temp;
// }
// feet_inch sub(feet_inch x, meter_cm y)
// {
//     feet_inch temp(0, 0);
//     temp.feet = abs(x.feet - y.meter * (3.37));
//     temp.inch = abs(x.inch - y.cm * (0.393));

//     temp.feet += temp.inch / 12;
//     temp.inch = temp.inch % 12;

//     return temp;
// }

// meter_cm add(meter_cm x, feet_inch y)
// {
//     meter_cm temp(0, 0);
//     temp.meter = (x.meter + y.feet * (0.305));
//     temp.cm = (x.cm + y.inch * (2.54));

//     temp.meter += temp.cm / 100;
//     temp.cm = temp.cm % 100;
//     return temp;
// }
// meter_cm sub(meter_cm x, feet_inch y)
// {
//     meter_cm temp(0, 0);
//     temp.meter = abs(x.meter - y.feet * (0.305));
//     temp.cm = abs(x.cm - y.inch * (2.54));

//     temp.meter += temp.cm / 100;
//     temp.cm = temp.cm % 100;
//     return temp;
// }

// int main()
// {
//     cout << "for object f1 and m1" << endl;
//     int meter, cm, feet, inch;
//     cout << "enter the meter and cm " << endl;
//     cin >> meter >> cm;
//     cout << "enter the feet and inch " << endl;
//     cin >> feet >> inch;
//     feet_inch f1(feet, inch);
//     meter_cm m1(meter, cm);


//     cout << "for object f1 and m1" << endl;
//     f1.display();
//     m1.display();

//     cout << "addition of m1 and f1" << endl;
//     feet_inch f2(0, 0);
//     f2 = add(f1, m1);
//     f2.display();
//     meter_cm m2(0, 0);
//     m2 = add(m1, f1);
//     m2.display();
    
//     cout << "substration of m1 and f1" << endl;
//     feet_inch f3(0, 0);
//     f3 = sub(f1, m1);
//     f3.display();
//     meter_cm m3(0, 0);
//     m3 = add(m1, f1);
//     m3.display();

//     return 0;
// }


#include<iostream>
using namespace std;

class feet_inch;
class m_cm{
    
    int meter,cm;
    public:
    m_cm(int m,int c){

        this->meter=m;
        this->cm=c;
    }
    void display(){
        cout<<m<<"  "<<c;
    }

    friend m_cm add(m_cm , feet_inch ); 
    friend m_cm sub(m_cm , feet_inch);
};

class feet_inch{
    int feet,inch;
    public:
    feet_inch(int f,int i){

        this->feet=f;
        this->inch=i;
    }
    void display(){
        cout<<feet<<"  "<<inch;
    }

    friend m_cm add(m_cm x,feet_inch y);
    friend m_cm sub(m_cm , feet_inch);

};

m_cm add(m_cm x, feet_inch y){
    m_cm temp(0,0);
    temp.meter = x.meter + y.feet*0.307;
    temp.cm=x.cm + y.inch*2.54;
    
    temp.meter += temp.cm/100;
    temp.cm= temp.cm%100;
    return temp;
}

m_cm sub(m_cm m1, feet_inch f1){
    m_cm temp(0,0);
    temp.meter = abs(m1.meter - f1.feet*(0.307));
    temp.cm = abs(m1.cm - f1.inch*2.54);

    temp.meter += temp.cm/100;
    temp.cm = temp.cm%100;
}


int main(int argc, char const *argv[])
{
    m_cm m(3,40);
    feet_inch f(6,5);
    m_cm m2 = add()
    return 0;
}
