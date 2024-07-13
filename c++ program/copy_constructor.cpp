#include <iostream>

using namespace std;

class number
{
    int a;

    public:
    number(){
        a=0;
    }

    number(int number)
    {
        a=number;
    }

    void display()
    {
        cout<<"\n number is :"<<a;
    }

};

int main()
{
    number x,y,z(45);
    x.display();
    y.display();
    z.display();

    number z1(z);
    z1.display();
    return 0;
}