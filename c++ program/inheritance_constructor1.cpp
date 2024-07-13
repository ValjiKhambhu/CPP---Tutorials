#include <iostream>

using namespace std;

class student
{
    char name[30];
    int rollno;
    int cls;
public:
     student(int c)
    {
        cout<<"\n enter a name:";
        cin>>name;
        cout<<"\n enter a rollno:";
        cin>>rollno;
        //cout<<"\n enter a class:";
        //cin>>cls;
        cls=c;
    }
    void display()
    {
        cout<<"\n name:"<<name;
        cout<<"\n rollno:"<<rollno;
        cout<<"\n class:"<<cls;
    }
};

class marks:public student
{
    int m1,m2,outof;
public:
     marks(int c,int of):student(c)
    {
        cout<<"\n enter a m1:";
        cin>>m1;
        cout<<"\n enter a m2:";
        cin>>m2;
        outof=of;
    }

    void displaymarks()
    {
        cout<<"\n out of:"<<outof;
        cout<<"\n marks1:"<<m1;
        cout<<"\n marks2:"<<m2;
    }
};

int main()
{
    marks m1(10,100);
    //m1.getdata();
    //m1.getmarks();

    m1.display();
    m1.displaymarks();

    return 0;
}