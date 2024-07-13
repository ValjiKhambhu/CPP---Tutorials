#include <iostream>

using namespace std;

class record;

class insurance
{
    int no_of_years;
    int premium_amount;

public:
    void getdata()
    {
        cout<<"\n enter no of years:";
        cin>>no_of_years;
        cout<<"\n enter a premium amount:";
        cin>>premium_amount;
    }

    void display()
    {
        cout<<" no of years:"<<no_of_years<<endl;
        cout<<" premium amount:"<<premium_amount<<endl;
    }

    friend void share(insurance &a,record &b);
};

class record
{
    char client_name[30];
    int years;

public:
    void getdata1()
        {
            cout<<"enter a client name:"<<endl;
            cin>>client_name;
            cout<<"enter a years:";
            cin>>years;
        }

        void display1()
        {
            cout<<"client name:"<<client_name<<endl;
            cout<<"years:"<<years<<endl;
        }

         friend void share(insurance &a,record &b);
};

void share(insurance &a,record &b)
{
    cout<<endl<<endl;
    cout<<"no of years:"<<a.no_of_years<<endl;
    cout<<"premium amount:"<<a.premium_amount<<endl;
    cout<<"client name:"<<b.client_name<<endl;
    cout<<"years:"<<b.years;
}

int main()
{
    insurance a;
    a.getdata();
    a.display();

    //a.getdata1();

    record b;
    b.getdata1();
    b.display1();

    share(a,b);

    return 0;
}