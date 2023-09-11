#include <iostream>
using namespace std;

class node
{
public:
    node *next;
    int data;
    node(int val)
    {
        next = NULL;
        data = val;
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
        cout << temp->data << "->"; // 1->2->3->4->5->6->7->8->9->NULL
        temp = temp->next;          // H                /
    }                               //          4-> 5->6->
    cout << "NULL" << endl;
}
int length(node *&head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

node *merge(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummy = new node(-1);
    node *p3 = dummy;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    p3->next = NULL;
    return dummy->next;
}

node *recursive_merge(node *&head1, node *&head2)
{
    node *result;
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    if (head1->data < head2->data)
    {
        result = head1;
        result->next = recursive_merge(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = recursive_merge(head1, head2->next);
    }
    return result;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    addend(head1, 1);
    addend(head1, 3);
    addend(head1, 4);
    addend(head1, 6);
    addend(head1, 8);
    addend(head2, 2);
    addend(head2, 5);
    addend(head2, 7);
    display(head1);
    display(head2);
    // node* newhead = merge(head1 , head2);
    node *newhead = recursive_merge(head1, head2);
    display(newhead);

    return 0;
}