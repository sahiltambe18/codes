#include <iostream>
using namespace std;
#define n 20

class Queue
{
    int *arr;
    int front;
    int back;

public:
    Queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x)
    {
        if (back == n - 1 )
        {
            cout << "queue is full" << endl;
            return;
        }
        back++;
        arr[back] = x;
        if (front == -1)
        {
            front++;
        }
    }

    void pop(){
        if (front>back || front==-1)
        {
            cout<<"Queue is empty"<<endl;
            return ;
        }
        front++;
    }
    int peek(){
        if (front>back || front==-1)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if (front>back || front==-1)
        {
            // cout<<"Queue is empty"<<endl;
            return true;
        }
        return false;
    }
};

int main()
{
    Queue q;
    for (int i = 1; i < 4; i++)
    {
        q.push(i);
    }
    cout<< q.peek()<<endl;
    q.pop();
    cout<< q.peek()<<endl;
    cout<< q.empty()<<endl;
    q.pop();
    cout<< q.peek()<<endl;
    q.pop();
    cout<< q.peek()<<endl;
    q.pop();
    cout<< q.empty()<<endl;
    
    
    
    return 0;
}