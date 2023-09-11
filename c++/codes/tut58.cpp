#include <iostream>
#include <cstring>
using namespace std;

class cwh
{ // abstract base class
protected:
    string title;
    float rating;

public:
    cwh();
    cwh(string t, float r)
    {
        title = t;
        rating = r;
    }
    virtual void display() = 0; // do nothing function  / pure virtual func
};
class video : public cwh
{
    int len;

public:
    video(string t, float r, int l) : cwh(t, r)
    {
        len = l;
    }
    void display()
    {
        cout << "this is video tutorial : " << title << endl;
        cout << "rating is " << rating << " out of 5 stars" << endl;
        cout << "length of video is " << len << endl;
    }
};

class text : public cwh
{
    int words;

public:
    text(string t, float r, int w) : cwh(t, r)
    {
        words = w;
    }
    void display()
    {
        cout << "this is wikipedia blog : " << title << endl;
        cout << "rating is " << rating << " out of 5 stars" << endl;
        cout << " numbers of words in the blog : " << words << endl;
    }
};

int main()
{
    video v(" c++ toutorial for beginers", 4.5, 15);
    //   v.display();
    text t("engineering mathematics", 4.2, 500);
    //   t.display();

    cwh *ptr[2];
    ptr[0] = &v;
    ptr[1] = &t;

    ptr[0]->display();
    ptr[1]->display();

    return 0;
}