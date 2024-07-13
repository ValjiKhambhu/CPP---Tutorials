#include <iostream>

using namespace std;
class y;
class x
{
    int a;
    friend void swap(x &,y &);

    public:
    void setdata(int num)
    {
        a=num;
    }

    void display()
    {
        cout<<a;
    }
};

class y
{
    int b;
    friend void swap(x &,y &);

    public:
    void setdata(int num)
    {
        b=num;
    } 

    void display()
    {
        cout<<b;
    }
};

void swap(x &o1,y &o2)
{
    int temp=o1.a;
    o1.a=o2.b;
    o2.b=temp;

}

int main()
{
    x p;
    p.setdata(50);
    //p.display();

    y q;
    q.setdata(25);
    //q.display();

    swap(p,q);

    cout<<"\n after swapping a:";
    p.display();
    cout<<"\n after swapping b:";
    q.display();

    return 0;
}