#include <iostream>

using namespace std;

class complex
{
    int a;

    public:

    void getdata()
    {
        cout<<"\n enter value of a:";
        cin>>a;
    }

    void display()
    {
        cout<<"\n value of a:"<<a;
    }

    complex addition(complex c1,complex c2,complex c3)
    {
        //complex c3;
        c3.a=c1.a+c2.a;
        return c3;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c1.display();
    c2.display();

    c3=c3.addition(c1,c2,c3);
    c3.display();
    return 0;
}