#include <iostream>
#include <cstdlib>
#define T_S 5
using namespace std;
enum EntryType
{
    Legi,
    Emp
};
struct HashTableEntry
{
    int e;
    enum EntryType info;
};
struct HashTable
{
    int s;
    HashTableEntry *t;
};
int HashFunc1(int k, int s)
{
    return k % s;
}
int HashFunc2(int k, int s)
{
    return (k * s - 1) % s;
}
HashTable *initiateTable(int s)
{
    HashTable *ht;
    if (s < T_S)
    {
        cout << "Table Size is Too Small" << endl;
        return NULL;
    }
    ht = new HashTable;
    if (ht == NULL)
    {
        cout << "Out of Space" << endl;
        return NULL;
    }
    ht->s = s;
    ht->t = new HashTableEntry[ht->s];
    if (ht->t == NULL)
    {
        cout << "Table Size is Too Small" << endl;
        return NULL;
    }
    for (int i = 0; i < ht->s; i++)
    {
        ht->t[i].info = Emp;
        ht->t[i].e = NULL;
    }
    return ht;
}
int SearchKey(int k, HashTable *ht)
{
    int hashVal = HashFunc1(k, ht->s);
    int stepSize = HashFunc2(k, ht->s);
    while (ht->t[hashVal].info != Emp &&
           ht->t[hashVal].e != k)
    {
        hashVal = hashVal + stepSize;
        hashVal = hashVal % ht->s;
    }
    return hashVal;
}
void Insert(int k, HashTable *ht)
{
    int pos = SearchKey(k, ht);
    if (ht->t[pos].info != Legi)
    {
        ht->t[pos].info = Legi;
        ht->t[pos].e = k;
    }
}
void display(HashTable *ht)
{
    for (int i = 0; i < ht->s; i++)
    {
        int v = ht->t[i].e;
        if (!v)
            cout << "Position: " << i + 1 << " Element: Null" << endl;
        else
            cout << "Position: " << i + 1 << " Element: " << v << endl;
    }
}
HashTable *Rehash(HashTable *ht)
{
    int s = ht->s;
    HashTableEntry *t = ht->t;
    ht = initiateTable(2 * s);
    for (int i = 0; i < s; i++)
    {
        if (t[i].info == Legi)
            Insert(t[i].e, ht);
    }
    free(t);
    return ht;
}
int main()
{
    int v, s, pos, i = 1;
    int c;
    HashTable *ht;
    while (1)
    {
        cout << "1.Initialize size of the table" << endl;
        cout << "2.Insert element into the table" << endl;
        cout << "3.Display Hash Table" << endl;
        cout << "4.Rehash Hash Table" << endl;
        cout << "5.Exit" << endl;
        cout << "Enter your choice: ";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter size of the Hash Table: ";
            cin >> s;
            ht = initiateTable(s);
            break;
        case 2:
            if (i > ht->s)
            {
                cout << "Table is Full, Rehash the table" << endl;
                continue;
            }
            cout << "Enter element to be inserted: ";
            cin >> v;
            Insert(v, ht);
            i++;
            break;
        case 3:
            display(ht);
            break;
        case 4:
            ht = Rehash(ht);
            break;
        case 5:
            exit(1);
        default:
            cout << "\nEnter correct option\n";
        }
    }
    return 0;
}

/*
OUTPUT

1.Initialize size of the table
2.Insert element into the table
3.Display Hash Table
4.Rehash Hash Table
5.Exit
Enter your choice: 1
Enter size of the Hash Table: 10
1.Initialize size of the table
2.Insert element into the table
3.Display Hash Table
4.Rehash Hash Table
5.Exit
Enter your choice: 2
Enter element to be inserted: 9
1.Initialize size of the table
2.Insert element into the table
3.Display Hash Table
4.Rehash Hash Table
5.Exit
Enter your choice: 2
Enter element to be inserted: 45
1.Initialize size of the table
2.Insert element into the table
3.Display Hash Table
4.Rehash Hash Table
5.Exit
Enter your choice: 2
Enter element to be inserted: 13
1.Initialize size of the table
2.Insert element into the table
3.Display Hash Table
4.Rehash Hash Table
5.Exit
Enter your choice: 2
Enter element to be inserted: 59
1.Initialize size of the table
2.Insert element into the table
3.Display Hash Table
4.Rehash Hash Table
5.Exit
Enter your choice: 2
Enter element to be inserted: 12
1.Initialize size of the table
2.Insert element into the table
3.Display Hash Table
4.Rehash Hash Table
5.Exit
Enter your choice: 2
Enter element to be inserted: 75
1.Initialize size of the table
2.Insert element into the table
3.Display Hash Table
4.Rehash Hash Table
5.Exit
Enter your choice: 2
Enter element to be inserted: 88
1.Initialize size of the table
2.Insert element into the table
3.Display Hash Table
4.Rehash Hash Table
5.Exit
Enter your choice: 3
Position: 1 Element: Null
Position: 2 Element: Null
Position: 3 Element: 12
Position: 4 Element: 13
Position: 5 Element: 75
Position: 6 Element: 45
Position: 7 Element: Null
Position: 8 Element: 88
Position: 9 Element: 59
Position: 10 Element: 9
1.Initialize size of the table
2.Insert element into the table
3.Display Hash Table
4.Rehash Hash Table
5.Exit
Enter your choice: 4
1.Initialize size of the table
2.Insert element into the table
3.Display Hash Table
4.Rehash Hash Table
5.Exit
Enter your choice: 3
Position: 1 Element: Null
Position: 2 Element: Null
Position: 3 Element: Null
Position: 4 Element: Null
Position: 5 Element: Null
Position: 6 Element: 45
Position: 7 Element: Null
Position: 8 Element: Null
Position: 9 Element: 88
Position: 10 Element: 9
Position: 11 Element: Null
Position: 12 Element: Null
Position: 13 Element: 12
Position: 14 Element: 13
Position: 15 Element: Null
Position: 16 Element: 75
Position: 17 Element: Null
Position: 18 Element: Null
Position: 19 Element: Null
Position: 20 Element: 59
1.Initialize size of the table
2.Insert element into the table
3.Display Hash Table
4.Rehash Hash Table
5.Exit
Enter your choice: 2
Enter element to be inserted: 11
1.Initialize size of the table
2.Insert element into the table
3.Display Hash Table
4.Rehash Hash Table
5.Exit
Enter your choice: 2
Enter element to be inserted: 105
1.Initialize size of the table
2.Insert element into the table
3.Display Hash Table
4.Rehash Hash Table
5.Exit
Enter your choice: 2
Enter element to be inserted: 46
1.Initialize size of the table
2.Insert element into the table
3.Display Hash Table
4.Rehash Hash Table
5.Exit
Enter your choice: 3
Position: 1 Element: Null
Position: 2 Element: Null
Position: 3 Element: Null
Position: 4 Element: Null
Position: 5 Element: 105
Position: 6 Element: 45
Position: 7 Element: 46
Position: 8 Element: Null
Position: 9 Element: 88
Position: 10 Element: 9
Position: 11 Element: Null
Position: 12 Element: 11
Position: 13 Element: 12
Position: 14 Element: 13
Position: 15 Element: Null
Position: 16 Element: 75
Position: 17 Element: Null
Position: 18 Element: Null
Position: 19 Element: Null
Position: 20 Element: 59
1.Initialize size of the table
2.Insert element into the table
3.Display Hash Table
4.Rehash Hash Table
5.Exit
Enter your choice: 5
*/