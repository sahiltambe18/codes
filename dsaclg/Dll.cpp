#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev; // previous pointer
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
class Dll
{
private:
    node *head;

public:
    Dll()
    {
        head = NULL;
    }
    void insert(int val)
    {
        node *n = new node(val);
        if (head == NULL)
        {
            head = n;
            return;
        }
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->prev = temp;
    }
    void deletion(int key)
    {
        if (head == NULL)
        {
            cout << "List is empty\n";
            return;
        }
        if (head->data == key) // delete head
        {
            head = head->next;
            return;
        }
        node *temp = head;
        while (temp != NULL && temp->data != key)
        {
            temp = temp->next;
        }
        node *todelete = temp;
        temp->prev->next = temp->next;
        if (temp->next != NULL)
        {
            temp->next->prev = temp->prev;
        }
        delete (todelete);
    }
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    void display_rev(){
        node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        cout<<"NULL";
        while (temp != NULL)
        {
            cout<<"<-"<<temp->data;
            temp = temp->prev;
        }
        cout<<endl;
    }
};

int main()
{
    Dll d;
    int ch = 1;
    while (ch!=0)
    {
        cout<<"1 . insert \n2 . delete node \n3 . display \n4 . Display reverse\nEnter choice\n";
        cout<<"0 for exit\n";
        cin>>ch;
        switch (ch)
        {
        case 1:
            int val;
            cout<<"enter value to insert\n";
            cin>>val;
            d.insert(val);
            break;

        case 2:
        int del;
        cout<<"enter node to delete\n";
        cin>>del;
        d.deletion(del);
        break;
        
        case 3:
        d.display();
        break;

        case 4:
        d.display_rev();
        break;
        
        default:
            break;
        }
    }
    

    return 0;
}