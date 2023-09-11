#include <iostream>
using namespace std;

class shop
{
private:
    int item[100];
    int price[100];
    int counter = 0;

public:
    // void initial(void) { counter = 0; }
    void itemid(void);
    void itemprice(void);
};

void shop ::itemid(void)
{

    cout << "how many items are there" << endl;
    int y;
    cin >> y;
    for (int x; x < y; x++)
    {
        cout << "enter id of item no " << counter + 1 << endl;
        cin >> item[counter];
        cout << "enter the price of item no " << counter + 1 << endl;
        cin >> price[counter];
        counter++;
    }
}

void shop ::itemprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of the item with id " << item[i] << " is " << price[i] << endl;
    }
}

int main()
{

    shop dk;
    // dk.initial();
    dk.itemid();
    dk.itemprice();

    return 0;
}