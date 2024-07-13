#include <iostream>

using namespace std;

class employee
{
    char name[30],dept[30];
    int salary;
    int hra,ta,da,totals;

    public:

    void getdetail()
    {
        cout<<"\n enter a name:";
        cin>>name;
        cout<<"\n enter a department:";
        cin>>dept;
        cout<<"\n enter a salary:";
        cin>>salary;

    }

    void display();
    void calculate();
    void total();
};

void employee::display()
{
    cout<<"\n\n name:"<<name;
    cout<<"\n department:"<<dept;
    cout<<"\n salary:"<<salary;
}

void employee::calculate()
{
    hra=salary*15/100;
    cout<<"\n hra is 15% then total hra:"<<hra;

    ta=salary*10/100;
    cout<<"\n ta is 10% then total ta:"<<ta;

    da=salary*25/100;
    cout<<"\n da is 25% then total da:"<<da;
}

void employee::total()
{
    totals=salary+hra+ta+da;

    cout<<"\n\n calculate hra,da,ta after total salary is:"<<totals;
}

int main()
{
    employee e1;

    e1.getdetail();
    e1.display();
    e1.calculate();
    e1.total();

    return 0;
}