#include <iostream>
using namespace std;
struct student
{
  int roll = 0;
  // char name[20];
  float sgpa;
};

void swap(student &a, student &b)
{
  student temp = a;
  a = b;
  b = temp;
}

int split(student s[], int low, int high)
{
  int p = low, q = high - 1;
  student pivot = s[low];
  while (p < q)
  {
    while (pivot.sgpa >= s[p].sgpa)
    {
      p++;
    }
    while (pivot.sgpa < s[q].sgpa)
    {
      q--;
    }
    if (p < q)
    {
      swap(s[p], s[q]);
    }
  }
  swap(s[low], s[q]);
  return q;
}

void quicksort(student s[], int low, int high)
{
  if (low < high)
  {
    int pi = split(s, low, high);
    quicksort(s, low, pi - 1);
    quicksort(s, pi + 1, high);
  }
}
void display(student s[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << s[i].roll << "  "
         << "  " << s[i].sgpa << endl;
  }
}

int main()
{
  student s[50];
  int n;
  cout << "enter no of students : " << endl;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cout << "enter roll no of student : " << endl;
    cin >> s[i].roll;
    cout << "enter sgpa of student : " << endl;
    cin >> s[i].sgpa;
  }
  quicksort(s, 0, n);
  display(s, n);

  return 0;
}