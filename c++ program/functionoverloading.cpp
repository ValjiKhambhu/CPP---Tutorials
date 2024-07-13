#include <iostream>

using namespace std;

int calculatesalary(int salary)
{
    return salary;
}

int calculatesalary(int salary,int hra)
{
    int total_hra=salary*hra/100;
    cout<<"\n total hra:"<<total_hra;
    cout<<"\n calculate hra after total salary:"<<salary+total_hra;
}

int calculatesalary(double salary,double hra,int ta)
{
    int total_hra=salary*hra/100;
    int total_ta=salary*ta/100;
    cout<<"\n ta:"<<total_ta;
    cout<<"\n calculate hra and ta after total salary:"<<salary+total_hra+total_ta;
}

int calculatesalary(int salary,int hra,int ta,int da)
{
    int total_hra=salary*hra/100;
    int total_ta=salary*ta/100;
    int total_da=salary*da/100;

    cout<<"\n da:"<<total_da;
    cout<<"\n calculate hra ta da after total salary:"<<salary+total_hra+total_ta+total_da;
}

void calculatesalary(float salary=10000,float hra=25,float ta=10,float da=15)
{
    int total_hra=salary*hra/100;
    int total_ta=salary*ta/100;
    int total_da=salary*da/100;
    cout<<"\n default values after total salary:"<<salary+total_hra+total_ta+total_da;
}

int main()
{
    int salary,a,hra,ta,da;
    cout<<"\n enter a salary:";
    cin>>salary;

    cout<<"\n enter a hra:";
    cin>>hra;

    cout<<"\n enter a ta:";
    cin>>ta;

    cout<<"\n enter a da:";
    cin>>da;

    a=calculatesalary(salary);
    cout<<"\n salary:"<<a;

    calculatesalary(salary,hra);

    calculatesalary(salary,hra,ta);

    calculatesalary(salary,hra,ta,da);

    calculatesalary();
    return 0;
}