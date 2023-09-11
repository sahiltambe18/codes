#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void adds(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
    }

    node *temp = head;
    n->next = head;
    head = n;
}

void addend(node *&head, int val)
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
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void odd_1st(node* &head){
    node* odd = head;
    node* even = head->next;
    node* evenhead = even;
    while (odd->next!=NULL && even->next!=NULL)
    {
        odd->next = even->next;
        odd= odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenhead;
    if (odd->next!=NULL)
    {
        even->next = NULL;
    }
    
}

int main()
{
    node *head = NULL;
    addend(head, 1);
    addend(head, 2);
    addend(head, 3);
    addend(head, 4);
    addend(head, 5);
    addend(head, 6);
    display(head);
    odd_1st(head);
    display(head);

    return 0;
}