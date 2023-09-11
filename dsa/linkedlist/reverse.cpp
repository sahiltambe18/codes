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
void add1st(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void addlast(node *&head, int val)
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
    cout << endl;
}

void deletehead(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}

void deletion(node *head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deletehead(head);
        return;
    }

    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
node *reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *nex;
    while (curr != NULL)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    return prev;
}
node *recursive_reverse(node *&head)
{
    if (head == NULL)
    {
        return head;
    }
    if (head->next == NULL)
    {
        return head;
    }

    node *newhead = recursive_reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

int main()
{
    node *head = NULL;
    add1st(head, 5);
    add1st(head, 4);
    add1st(head, 3);
    add1st(head, 2);
    add1st(head, 1);
    addlast(head, 6);
    display(head);
    node *newhead = reverse(head);
    display(newhead);
    node *latest = recursive_reverse(newhead);
    display(latest);

    return 0;
}