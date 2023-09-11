#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{

    char name[10];
    // ofstream out;
    //     out.open("sample.txt", ios::app);
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<"enter name\n";
    //     cin>>name;
    //     out<<name<<endl;
    // }
    // ifstream in ("sample.txt");
    // while (in)
    // {
    //     in>>name;
    //     cout<<"name is "<<name<<endl;
    // }
    // cout<<"name\n";
    // cin>>name;
    // out<<name;
    // for (auto i : name)
    // {
    //     cout<<i;
    // }
    // out.close();
    // cout<<endl;
    // ifstream in("sample.txt");

    // in>>name;
    // cout<<"name is "<<name;
    // in.close();

    // int ch = 1;
    // while (ch != 0)
    // {
    //     cout << "enter your choice\n1.create a file\n2.read it\n0 for exit\n";
    //     cin >> ch;
    //     switch (ch)
    //     {
    //     case 1:
    //     {
    //         ofstream out;
    //         out.open("sample.txt", ios::app);
    //         for (int i = 0; i < 3; i++)
    //         {
    //             cout << "enter name\n";
    //             cin >> name;
    //             out << name << endl;
    //         }
    //         out.close();
    //         break;
    //     }
    //     case 2:
    //     {
    //         ifstream in ("sample.txt");
    //         while (in)
    //         {
    //             in>>name;
    //             cout<<"name is "<<name<<endl;
    //         }
    //         in.close();
            
    //         break;
    //     }

    //     default:
    //         break;
    //     }
    // }

    char string[10];
    cout<<"String"<<endl;
    cin>>string;
    int len = strlen(string);
    fstream obj;
    obj.open("sample.txt" , ios::in | ios::out);
    for (int i = 0; i < len; i++)
    {
        obj.put(string[i]);
    }
    // obj.close();

    // ifstream in;
    // in.open("sample.txt");

    char ch;
    obj.seekg(0);
    for (int i = 0; i < len; i++)
    {
        obj.get(ch);
        cout<<ch<<endl;
    }
    obj.close();
    
    

/*
MODES
ios::app -> used to open file for write and append mode
ios::out -> used to open file for write mode only
ios::nocreate -> open fails if file does not exist
ios::noreplace -> open fails if file already exist

seekg() -> move get pointer to a specified loation
seekp() -> move put pointer to a specified location
tellg() -> give current location of get pointer
tellp -> give current location of put pointer
getline() -> for spaced strings
*/
    return 0;
}