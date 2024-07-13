#include <iostream>

using namespace std;

class student
{
    char name[30];
    int rollno,is_practical;

public:
    void getdata()
    {
        cout<<"\n enter a name of student:";
        cin>>name;
        cout<<"\n enter a rollno of student:";
        cin>>rollno;
        cout<<"\n on is practical(1,0)?";
        cin>>is_practical;
    }

    void display()
    {
        cout<<"\n name:"<<name;
        cout<<"\n rollno:"<<rollno;
        cout<<"\n is practical:"<<is_practical;
    }

    int getispractical()
    {
        return is_practical;
    }
};

class marks:public student
{
    int sub1,sub2,sub3;
public:
    void getmarks(int d)
    {
        cout<<"\n enter a subject 1 marks:";
        cin>>sub1;
        cout<<"\n enter a subject 2 marks:";
        cin>>sub2;

        if(d == 1)
        {
            cout<<"\n enter a subject 3 marks:";
            cin>>sub3;
        }
        else{
            sub3=0;
        }
    }

    void displaymarks()
    {
        cout<<"\n subject 1 marks:"<<sub1;
        cout<<"\n subject 2 marks:"<<sub2;
        cout<<"\n subject 3 marks:"<<sub3;
    }
        
};

int main()
{
    int d;
    marks m1;
    m1.getdata();
    d=m1.getispractical();
    m1.getmarks(d);

    m1.display();
    m1.displaymarks();
    return 0;
}
