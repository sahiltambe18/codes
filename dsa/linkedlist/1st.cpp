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

void addtostart(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void addtoend(node *&head, int val)
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

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }

        temp = temp->next;
    }
    return false;
}

int main()
{
    node *head = NULL;
    // node n(1);
    addtoend(head, 2);
    addtoend(head, 3);
    addtoend(head, 4);
    addtostart(head, 1);
    display(head);
    cout << search(head, 10);

    return 0;
}