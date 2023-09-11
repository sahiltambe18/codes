#include <iostream>
using namespace std;

class heap
{
    int arr[100];
    int size;
public:
    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size++;
        arr[size] = val;
        int index = size;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[index] > arr[parent])
            {
                int temp = arr[index];
                arr[index] = arr[parent];
                arr[parent] = temp;
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
void delroot(){
    if (size == 0)
    {
        cout<<"heap is empty"<<endl;
        return;
    }
    arr[1] = arr[size];
    size--;
    int i = 1;
    while (i < size)
    {
        int left = i*2;
        int right = i*2 +1;
        if (left<size && arr[left]>arr[i])
        {
            swap(arr[i],arr[left]);
            i = left;
        }
        else if (right < size && arr[right]>arr[i])
        {
            swap(arr[i],arr[right]);
            i = right;
        }
        else{
            return;
        }
    }
    
    
}

    void display()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    int temp[] = {5,6,4,7,8,9,1,2,3};
    heap h;
    for (int i = 0; i < 9; i++)
    {
        h.insert(temp[i]);
    }
    h.display();
    cout<<endl;
    h.delroot();
    h.display();
    
// 9 7 8 5 6 4 1 2 3
    return 0;
}
/*
9 7 8 5 6 4 1 2 3 
7 5 8 3 6 4 1 2
*/