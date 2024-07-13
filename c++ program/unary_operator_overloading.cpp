#include <iostream>

using namespace std;

class demo
{
    int a,b;
public:
    demo(int x,int y)
    {
        a=x;
        b=y;
    }

    void show()
    {
        cout<<"a:"<<a<<"\t"<<"b:"<<b<<endl;
    }

    void operator -()
    {
        a=-a;
        b=-b;
    }
};


int main()
{
    demo obj(-10,20);
    obj.show();
    -obj;
    obj.show();
    return 0;
}