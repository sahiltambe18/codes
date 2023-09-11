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
    int i = size;
    while (i > 1)
    {
      int parent = i / 2;
      if (arr[parent] < arr[i])
      {
        int temp = arr[parent];
        arr[parent] = arr[i];
        arr[i] = temp;
        i = parent;
      }
      else
      {
        return;
      }
    }
  }

  int delroot()
  {
    int root = arr[1];
    arr[1] = arr[size];
    size--;
    int index = 1;
    while (index < size)
    {
      int l = index * 2;
      int r = index * 2 + 1;
      if (r < size)
      {
        if (arr[l] > arr[r])
        {
          if (arr[index] < arr[l])
          {
            swap(arr[l], arr[index]);
            index = l;
          }
        }
        if (arr[l] < arr[r])
        {
          if (arr[index] < arr[r])
          {
            swap(arr[r], arr[index]);
            index = r;
          }
        }
      }
      else
      {
        return root;
      }
    }
    return root;
  }
};

void heapsort(int arr[] , int n){
    int i;
    heap h;
    for (i = 0; i < n; i++)
    {
      h.insert(arr[i]);
    }i--;
    while (i >= 0)
    {
      cout<< h.delroot();
      i--;
    }
}

int main()
{

  int arr[5] = {5, 9, 7, 3, 4};
  heapsort(arr,5);
  // for (int i = 0; i < 5; i++)
  // {
  //   cout<<arr[i]<<" ";
  // }
  
  cout << "hello world\n";

  return 0;
}