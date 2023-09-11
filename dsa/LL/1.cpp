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

void delkey(node *&head, int key)
{
    node *temp = head;
    while (temp->next->data != key)
    {
        temp = temp->next;
    }
    node *n = temp->next;
    temp->next = temp->next->next;
    delete n;
}
void delhead(node *&head)
{
    node *temp = head;
    node *n = head;
    head = temp->next;
    delete n;
}

node *rev(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *nxt;
    while (curr != NULL)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}
node *recurrev(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newhead = recurrev(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

node *reversek(node *&head, int k)
{
    int count = 0;
    node *prev = NULL;
    node *curr = head;
    node *nxt;
    while (curr->next != NULL && count < k)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
        count++;
    }
    if (nxt != NULL)
    {
        head->next = reversek(nxt, k);
    }
    return prev;
}

node *revknodes(node *&head, int k)
{
    node *prev = NULL;
    node *curr = head;
    node *nxt;
    int count = 0;
    while (curr != NULL && count < k)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
        count++;
    }
    if (nxt != NULL)
    {
        head->next = revknodes(nxt, k);
    }
    return prev;
}

void cycle(node *&head, int pos)
{
    node *temp = head;
    node *joint;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            joint = temp;
        }

        temp = temp->next;
        count++;
    }
    temp->next = joint;
}

bool detectcy(node *&head)
{
    node *fast = head;
    node *slow = head;
    while (fast->next != NULL && fast == NULL)
    {
        if (fast == slow)
        {
            return true;
        }

        fast = fast->next->next;
        slow = slow->next;
    }
    return false;
}
void removecy(node* &head){
    node *fast = head;
    node *slow = head;
    do
    {
        fast = fast->next->next;
        slow=slow->next;
    } while (fast==slow);
    fast = head ;
    while (fast->next != slow->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next = NULL;
    
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
    adds(head, 0);
    display(head);
    // delkey(head , 4) ;
    // delhead(head);
    // node *newhead = recurrev(head);
    // node *newhead = revknodes(head, 2);
    cycle(head , 3);
    cout << detectcy(head);
    // removecy(head);
    // cout << detectcy(head);

    // display(head);
    // cout << search(head, 4);

    return 0;
}