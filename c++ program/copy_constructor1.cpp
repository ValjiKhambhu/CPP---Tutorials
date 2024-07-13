#include <iostream>
#include <string.h>

using namespace std;

class employee
{
    int id;
    char name[30];
    int salary;

    public:

    employee(){}

    employee(int a)
    {
        cout<<"\n enter a employee id:";
        cin>>id;
        cout<<"\n enter a employee name:";
        cin>>name;
        cout<<"\n enter a employee salary:";
        cin>>salary;
    }

    employee(employee & a)
    {
        cout<<"\n copy constructor is called:";
        id=a.id;
        strcpy(name,a.name);
        salary=a.salary;
    }

    void display()
    {
        cout<<"\n employee id:"<<id;
        cout<<"\n employee name:"<<name;
        cout<<"\n employee salary:"<<salary;
    }
};

int main()
{
    int v;
    employee a(1),b(1),c;
    a.display();
    b.display();

    c=a;
    c.display();

    employee d=a;
    d.display();

    employee e(c);
    e.display();

    return 0;
}