#include <iostream>
#include <fstream>
using namespace std;

struct student
{
    string name, address, roll, div;
    student()
    {
    }
    student(string n, string a, string r, string d)
    {
        this->roll = r;
        this->name = n;
        this->address = a;
        this->div = d;
    }
    void display()
    {
        cout << roll << "\t" << name << "\t" << div << "\t" << address << endl;
    }
};
class database
{
    student s[20];
    int count;

public:
    database()
    {
        count = 0;
    }
    void add()
    {
        string n, a, r, d;
        cout << "\nenter roll no of student : ";
        cin >> r;
        cout << "\nenter name of student : ";
        cin >> n;
        cout << "\nenter div of student : ";
        cin >> d;
        cout << "\nenter address of student : ";
        cin >> a;
        s[count] = student(n, a, r, d);
        count++;
    }

    void display()
    {
        cout << "Roll no  "
             << "name "
             << "\t"
             << "Divison "
             << "Address" << endl;
        for (int i = 0; i < count; i++)
        {
            s[i].display();
        }
    }

    void write()
    {
        ofstream writer;
        writer.open("output.txt", ios::app);
        for (int i = 0; i < count; i++)
        {
            writer << s[i].roll;
            writer << ",";
            writer << s[i].name;
            writer << ",";
            writer << s[i].div;
            writer << ",";
            writer << s[i].address;
            writer << '|';
            writer << "\n";
        }
        writer.close();
    }

    void read()
    {
        ifstream reader("output.txt");
        char temp1[200], temp2[200];
        string name, roll, div, address;
        int j = 0, flag = 0;
        while (reader >> temp1)
        {
            for (int i = 0; temp1[i] != '\0'; i++)
            {
                cout<<temp1;
                if (temp1[i] == '|' && flag == 3)
                {
                    address = temp2;
                    flag =0;
                    j =0;
                    s[count] = student(name ,address , roll , div);
                    count++;
                    break;
                }
                else if (temp1[i] == ',')
                {
                    if (flag == 0)
                    {
                        roll = temp2;
                        j = 0;
                        flag++;
                        break;
                    }
                    else if (flag == 1)
                    {
                        name = temp2;
                        flag++;
                        j = 0;
                        break;
                    }
                    else if (flag == 2)
                    {
                        div = temp2;
                        flag++;
                        j = 0;
                        break;
                    }
                }
                else
                {
                    temp2[j] = temp1[i];
                    j++;
                }
            }
        }
    }
};

int main()
{
    database d;
    d.read();
    // d.add();
    // d.add();
    d.add();
    d.display();
    d.write();

    return 0;
}