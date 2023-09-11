#include <iostream>
using namespace std;
#define max 5
class queue
{
    int arr[max];
    int front, rear;

public:
    queue()
    {
        front = rear = -1;
    }
    void enque(int val){
        if (front == -1)
        {
            front++;
            rear++;
            arr[front]=val;
            return;
        }
        if (rear== max-1)
        {
            rear = (rear+1)%max;
        }
        
        rear++;
        arr[rear] = val;
    }

    int deque(){
        int x = arr[front];
        front++;
        return x;
    }
    void display(){
        for (int i = front; i <= rear; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }

};
int main()
{
    queue q;
    int ch = 1;
    while (ch!=0)
    {
        cout<<"enter the choice "<<endl;
        cout<<"1. enque \n 2.deque \n 3.display \n enter 0 for exit"<<endl;
        
        cin>>ch;
        switch (ch)
        {
        case 1:{
            int val ;
            cout<<"\nenter value ";
            cin>>val;
            q.enque( val);
            break;
        }
        case 2:{
            q.deque();
            break;
        }
        case 3:{
            q.display();
            break;
        }
        
        default:
            break;
        }
    }
    

    return 0;
}