#include <iostream>
using namespace std;

class student
{
protected:
    int roll;

public:
    void setroll(void)
    {
        cout << "enter the roll no " << endl;
        cin >> roll;
    }
    void printroll(void)
    {
        cout << "the roll number is " << roll << endl;
    }
};
class subjects : public student
{
protected:
    int phy, math;

public:
    void marks(void)
    {
        cout << "enter marks obtained in math" << endl;
        cin >> math;
        cout << "enter marks obtained in physics" << endl;
        cin >> phy;
    }
    void printmarks(void)
    {
        cout << "marks obtained in maths are" << math << endl;
        cout << "marks obtained in physics are" << phy << endl;
    }
};
class result : public subjects
{
protected:
    float percentage;

public:
    void calculate(void)
    {
        setroll();
        marks();
        percentage = (math + phy) / 2;
        printroll();
        printmarks();
        cout << "the roll number " << roll << " got " << percentage << "%" << endl;
    }
};

int main()
{
    result sem1;
    sem1.calculate();

    return 0;
}