#include <iostream>

using namespace std;

class college
{
    char id[30],name[40];

    public:
    void getdata()
    {
        cout<<"\n enter a college id:";
        cin>>id;
        cout<<"\n enter a college name:";
        cin>>name;
    }

    void display()
    {
        cout<<"\n college id:"<<id;
        cout<<"\n college name:"<<name;
    }
};

class admin
{
    int fees;

    public:
    void getdetail()
    {
        cout<<"\n enter a feees:";
        cin>>fees;
    }

    void display()
    {
        cout<<"\n fees:"<<fees;
    }
};

int main()
{
    college student;
    student.getdata();
    student.display();

    admin student;
    student.getdetail();
    student.display();

    return 0;
}