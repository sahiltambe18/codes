#include <iostream>
#include <stack>
using namespace std;
void insertatbotttom(stack<int> &s, int ele)
{
    if (s.empty())
    {
        s.push(ele);
        return;
    }

    int topele = s.top();
    s.pop();
    insertatbotttom(s, ele);
    s.push(topele);
}
void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int ele = s.top();
    s.pop();
    reverse(s);
    insertatbotttom(s, ele);
}
int main()
{
    stack<int> num ;
    num.push(0);
    num.push(1);
    num.push(2);
    num.push(3);
    num.push(4);
    num.push(5);
    num.push(6);
    reverse(num);
    cout<< num.top();
    return 0;
}