#include <iostream>
using namespace std;

class shop
{
    int id, price;

public:
    void set(int i, int p)
    {
        id = i;
        price = p;
    }
    void print(void)
    {
        cout << "id of  this item " << id << endl;
        cout << "price  of this item " << price << endl;
    }
};

int main()
{
    int size = 3;
    int p, q;
    shop *ptr = new shop[size];
    shop *ptrtemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the id and price of item" << endl;
        cin >> p >> q;
        ptr->set(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "item number " << i + 1 << endl;
        ptrtemp->print();
        ptrtemp++;
    }

    return 0;
}