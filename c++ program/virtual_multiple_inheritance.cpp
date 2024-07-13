#include <iostream>

using namespace std;

class student
{
    int id;
public:
    void getstudentdata()
    {
        cout<<"\n enter a id:";
        cin>>id;
    }

    void displaystudentdata()
    {
        cout<<"\n id:"<<id;
    }
};

class marksheet:virtual public student
{
    int sub1,sub2;
public:
    void getmarksdata()
    {
        cout<<"\n enter a sub1 marks:";
        cin>>sub1;
        cout<<"\n enter a sub2 marks:";
        cin>>sub2;
    }

    void displaymarksdata()
    {
        cout<<"\n sub1:"<<sub1;
        cout<<"\n sub2:"<<sub2;
    }
};

class fees:virtual public student
{
    int amount;
public:
    void getfeesdata()
    {
        cout<<"\n enter a fees:";
        cin>>amount;
    }
    
    void displayfeesdata()
    {
        cout<<"\n fees:"<<amount;
    }
};

class record:public marksheet,public fees
{
    int recordid;
public:
    void getrecorddata()
    {
        cout<<"\n enter a record id:";
        cin>>recordid;
    }

    void displayrecorddata()
    {
        cout<<"\n record id:"<<recordid;
    }
};

int main()
{
    //fees s1;
    //marksheet m1;
    record s1;
    s1.getrecorddata();
    s1.getstudentdata();
    s1.getmarksdata();
    s1.getfeesdata();

    s1.displayrecorddata();
    s1.displaystudentdata();
    s1.displaymarksdata();
    s1.displayfeesdata();

    return 0;
}