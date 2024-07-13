#include <iostream>

using namespace std;

class mark;

class student
{
    char name[50];
    int id,is_practical;
public:
    void getdata()
    {
        cout<<"\n enter a name of student:";
        cin>>name;
        cout<<"\n enter a id of student:";
        cin>>id;
        cout<<"\n on practical marks is(yes-1,no-0)";
        cin>>is_practical;
    }

    void display()
    {
        cout<<"\n name:"<<name;
        cout<<"\n id:"<<id;
        cout<<"\n is practical marks:"<<is_practical;
    }

    friend void result(student &s1,mark &m1);
};

class mark
{
    int sub1,sub2,sub3;
public:
    void getmark()
    {
        cout<<"\n enter a subject 1 marks:";
        cin>>sub1;
        cout<<"\n enter a subject 2 marks:";
        cin>>sub2;
    }

    void displaymark()
    {
        cout<<"\n subject 1 marks:"<<sub1;
        cout<<"\n subject 2 marks:"<<sub2;
        cout<<"\n subject 3 marks:"<<sub3;
    }

     friend void result(student &s1,mark &m1);
};

void result(student &s1,mark &m1)
{
    if(s1.is_practical == 1)
    {
        cout<<"\n enter a subject 3 marks:";
        cin>>m1.sub3;
    }
    else{
        m1.sub3=0;
    }
}

int main()
{
    student s1;
    mark m1;

    s1.getdata();
    m1.getmark();

    result(s1,m1);

    s1.display();
    m1.displaymark();

    return 0;
}