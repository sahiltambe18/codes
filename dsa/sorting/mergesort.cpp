#include <iostream>
using namespace std;

void merge(int arr[], int s, int mid, int l)
{

  int n1 = mid - s + 1; // [5 , 6 , 9 , 8 , 3 , 4]
  int n2 = l - mid;
  int a[n1];
  int b[n2];

  for (int i = 0; i < n1; i++)
  {
    a[i] = arr[s + i];
  }
  for (int i = 0; i < n2; i++)
  {
    b[i] = arr[mid + 1 + i];
  }
  int j = 0;
  int i = 0;
  int k = s;
  while (i < n1 && j < n2)
  {
    if (a[i] < b[j])
    {
      arr[k] = a[i];
      k++;
      i++;
    }
    else
    {
      arr[k] = b[j];
      k++;
      j++;
    }
  }
  while (i < n1)
  {
    arr[k] = a[i];
    k++;
    i++;
  }
  while (j < n2)
  {
    arr[k] = b[j];
    k++;
    j++;
  }
}

void mergesort(int arr[], int s, int l)
{
  int mid = (s + l) / 2;
  if (s < l)
  {
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, l);
    merge(arr, s, mid, l);
  }
}

int main()
{
  int arr[6];
  cout << "enter values in array" << endl;
  for (int i = 0; i < 6; i++)
  {
    cin >> arr[i];
  }
  mergesort(arr, 0, 5);
  for (int i = 0; i < 6; i++)
  {
    cout << arr[i];
  }

  return 0;
}