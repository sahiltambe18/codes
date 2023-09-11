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

void intersect(node *&head1, node *&head2, int pos)
{
    node *temp1 = head1;
    node *temp2 = head2;
    int count = 1;
    while (count != pos)
    {
        temp1 = temp1->next;
        count++;
    }
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}

int detect_inter(node *&head1, node *&head2)
{
    node *temp1;
    node *temp2;
    int l1 = length(head1);
    int l2 = length(head2);
    int d;
    if (l1 > l2)
    {
        d = l1 - l2;
        temp1 = head1;
        temp2 = head2;
    }
    else
    {
        d = l2 - l1;
        temp1 = head2;
        temp2 = head1;
    }
    for (int i = 0; i < d; i++)
    {
        if (temp1->next == NULL)
        {
            return -1;
        }
        temp1 = temp1->next;
    }
    while (temp1 != NULL)
    {
        if (temp1 == temp2)
        {
            return temp1->data;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return -1;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    addend(head1, 1);
    addend(head1, 2);
    addend(head1, 3);
    addend(head1, 4);
    addend(head1, 5);
    addend(head1, 6);
    addend(head1, 7);
    addend(head1, 8);
    addend(head1, 9);
    addend(head2, 4);
    addend(head2, 5);
    // adds(head, 0);
    intersect(head1, head2, 6);
    display(head1);
    display(head2);
    cout << detect_inter(head1 , head2);

    return 0;
}