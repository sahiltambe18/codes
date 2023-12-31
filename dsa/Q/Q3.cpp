#include <iostream>
#include <stack>
using namespace std;
class queue
{
    stack<int> s1;

public:
    void push(int x)
    {
        s1.push(x);
    }
    int pop()
    {
        int x = s1.top();
        s1.pop();
        if (s1.empty())
        {
            return x;
        }
        int item = pop();
        s1.push(x);
        return item;
    }

    bool empty()
    {
        if (s1.empty())
        {
            return true;
        }
        return false;
    }
};
int main()
{
    queue q;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    cout<< q.pop()<<endl;
    cout<< q.pop()<<endl;

    return 0;
}