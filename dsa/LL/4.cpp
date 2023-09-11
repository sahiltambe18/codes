#include<iostream>
using namespace std;

class node{
    public:
    node* next ;
    int data ;
    node(int val){
        next = NULL ;
        data = val ;
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
        cout << temp->data << "->";            // 1->2->3->4->5->6->7->8->9->NULL
        temp = temp->next;                     // H
    }
    cout << "NULL" << endl;
}
int length(node* &head){
    node* temp = head ;
    int count = 0;
    while (temp!=NULL)
    {
        temp= temp->next;
        count++;
    }
    return count ;
    
}

node* kappend(node* &head , int k){
    int l = length(head);
    node* newhead ;
    node* newtail ;
    node* tail = head ;
    int count = 1;
    while (tail->next!=NULL)
    {
        if (count== l-k)
        {
             newtail = tail ;
             newhead = tail->next ;
        }
        
        tail = tail->next ;
        count++;
    }
    tail->next = head;
    newtail->next = NULL;
    return newhead ;
}

int main( )
  {
    node *head = NULL;
    addend(head, 1);
    addend(head, 2);
    addend(head, 3);
    addend(head, 4);
    addend(head, 5);
    addend(head, 6);
    addend(head, 7);
    addend(head, 8);
    addend(head, 9);
    // adds(head, 0);
    display(head);
    node* newhead = kappend(head , 3);
    display(newhead);

return 0 ;
}