#include <iostream>
#include <cmath>
using namespace std;

class point
{
private:
  int x, y;
  friend float dist(point, point);

public:
  point(int a, int b)
  {
    x = a;
    y = b;
  }
  void display(void)
  {
    cout << "the point "
         << "is (" << x << "," << y << ")" << endl;
  }
};

float dist(point c1, point c2)
{
  int a = (c1.x - c2.x);
  int b = (c1.y - c2.y);

  float res = sqrt((a * a) + (b * b));
  cout << "the dist between points is" << res << endl;

  return res;
}

int main()
{
  point a(4, 3);
  a.display();
  point b(4, 3);
  b.display();

  dist(a, b);

  return 0;
}