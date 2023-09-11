#include <iostream>
using namespace std;

class heap
{
    int arr[20];
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
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else
            {
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
        cout << endl;
    }
    void del()
    {
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int left = i * 2;
            int right = i * 2 + 1;
            if (left < size && arr[i] < arr[left])
            {
                swap(arr[i], arr[left]);
                i = left;
            }
            else if (right < size && arr[i] < arr[right])
            {
                swap(arr[right], arr[i]);
                i = right;
            }
            else
            {
                return;
            }
        }
    }
};

void heapify(int arr[], int n, int l)
{
    int large = l;
    int left = l * 2 ;
    int right = l * 2 + 1;
    // if (l==0)
    // {
    //     left = 2;
    //     right = 3;
    // }
    
    if (left <= n && arr[left] > arr[large])
    {
        large = left;
    }
    if (right <= n && arr[right] > arr[large])
    {
        large = right;
    }
    if (large != l)
    {
        swap(arr[large] , arr[l]);
        heapify(arr, n, large);
    }
}

void heapsort(int arr[] , int n){
    int size = n;
    while (size>1)
    {
        swap(arr[size] , arr[1]);
        size--;
        heapify(arr , size ,1);
    }
    
}

int main()
{
    int arr[] = {-1,5,6,4,7,8,9,1,2,3};
    int n =9;
    // heap h;
    // for (auto i : arr)
    // {
    //     h.insert(i);
    // }
    // h.display();
    // h.del();
    // h.display();
    for (int i = n/2 ; i > 0; i--)
    {
        heapify(arr , n , i);
    }
    heapsort(arr , n);
    for (auto i : arr)
    {
        cout<<i<<" ";
    }

    
    return 0;
}