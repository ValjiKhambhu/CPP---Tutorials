#include <iostream>

using namespace std;

class distance
{
public:
    int feet,inch;

    distance(int f,int i)
    {
        feet = f;
        inch = i;
    }

    void operator -()
    {
        feet--;
        inch--;

        cout<<"\n feet and inch :" <<feet<<" "<<inch;
    }
};

int main()
{
    distance d1(8,9);
    //-d1;
    return 0;
}