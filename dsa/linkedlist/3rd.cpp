#include<iostream>
using namespace std;

class node{
    public:
    int data ;
    node* next ;
    node(int val){
        data = val ;
        next = NULL ;
    }
};

void adds( node* &head , int val){
    node* temp = new node(val);
    temp->next = head ;
    head = temp ;
}

void addlast( node* &head , int val){

    node* n = new node(val);
    if (head== NULL)
    {
        head = n ;
        return ;
    }
    node* temp = head ;
    while (temp != NULL)
    {
        temp = temp->next ;
    }
    temp->next = n;
    
}

void display( node* head){
    node* temp = head ;
    while (temp->next != NULL)
    {
        cout<< temp->data<<endl ;
        temp = temp->next ;
    }
    cout<<"null";
    
}

int main( )
  {
    node *head = NULL ;
    adds( head , 1);
    addlast(head , 2);
    addlast(head , 3);
    addlast(head , 4);
    addlast(head , 5);
    display(head);
return 0 ;
}