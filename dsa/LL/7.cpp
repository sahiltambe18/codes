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

void insertathead(node* &head , int val){
    node* n = new node(val);
    if (head==NULL)
    {
        n->next = n;
        head = n;
        return ;
    }
    
    node* temp = head;
    while (temp->next!=head)
    {
        temp= temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
    
}

void display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    }while (temp != head);
    cout << "NULL" << endl;
}

void adde(node* &head , int val){
    if (head==NULL)
    {
        insertathead(head,val);
        return;
    }
    
    node* temp = head;
    node* n = new node(val);
    while(temp->next!=head)
    {
        temp = temp->next ;
    }
    temp->next = n;
    n->next = head;
}

void del_head(node* &head){
    node* temp = head;
    node* todelete = head;
    while (temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = head->next;
    head = head->next;
    delete todelete;
    
}

void deletion(node* &head , int pos ){
    node* temp = head;
    if (pos==1)
    {
        del_head(head);
        return;
    }
    
    int count = 1 ;
    while(count!=pos-1)
    {
        temp = temp->next;
        count++;
    }
    node* del = temp->next;
    temp->next = temp->next->next;
    delete del ;
}

int main()
{
    node *head = NULL;
    adde(head , 3);
    adde(head , 4);
    adde(head , 5);
    adde(head , 6);
    adde(head , 7);
    adde(head , 8);
    adde(head , 9);
    insertathead(head ,2);
    insertathead(head ,1);
    display(head);
    deletion(head,1);
    display(head);


    return 0;
}