#include <iostream>
using namespace std;

int set(int num, int pos)
{ // 1001 | 0010 = 1011
  return (num | (1 << pos));
}

int get(int num, int pos)
{ /// 1010 & 0010 = 0010            // 16 = 10000
  return (num && (1 << pos)) != 0;  // 15 = 01111
}

int clear(int num, int pos)
{ // 1010 & 0010 = 1000
  int mask = ~(1 << pos);
  return (num & mask);
}
int update(int num, int pos, int value)
{                         // 1010 --> 1000
  int mask = ~(1 << pos); //     --> 1011
  num = num & mask;
  return (num | (value << pos));
}

int main()
{ // n = 2
  //  1<<n = 0100    0000
  // n= 3
  // 1<<n  = 1000
  // 1<<n used to convert in binary format

  //   cout<< set(5 , 1);
  // cout<< get(4,2);
  // cout<< clear(6 , 1);
  cout << update(5, 1, 1);
  return 0;
}