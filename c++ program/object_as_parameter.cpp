#include <iostream>

using namespace std;

class complex
{
    int a,c,b;
    public:
    complex()
    {
        cout<<"\n enter a value if a:";
        cin>>a;
        cout<<"\n enter a value of b:";
        cin>>b;
        cout<<"\n enter a value of c:";
        cin>>c;
    }

    void display()
    {
        cout<<"\n the detail is here:";
        cout<<"\n value of a:"<<a;
        cout<<"\n value of b:"<<b;
        cout<<"\n value of c:"<<c;
    }

    complex addition(complex obj1,complex obj2,complex obj3)
    {
        obj3.a=obj1.a+obj2.a;
        obj3.b=obj1.b+obj2.b;
        obj3.c=obj1.c+obj2.c;

        /*a=obj1.a+obj2.a;
        b=obj1.b+obj2.b;
        c=obj1.c+obj2.c;*/

        return obj3;
    }
};
int main()
{
    complex obj1,obj2,obj3;
    obj1.display();
    obj2.display();
    obj3=obj3.addition(obj1,obj2,obj3);
    obj3.display();

    return 0;
}