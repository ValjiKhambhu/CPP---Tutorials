#include <iostream>

using namespace std;

class bank
{
    int accountno;
    char name[20];
    int balance=0;
    int withdraw1=0,deposit1=0,total=0;

    public:
    void getdata()
    {
        cout<<"\n enter a account number:";
        cin>>accountno;
        cout<<"\n enter a name:";
        cin>>name;
        cout<<"\n enter a balance:";
        cin>>balance;
    }

    void withdraw()
    {
        if(balance>500)
        {
            cout<<"\n enter a withdra balance:";
            cin>>withdraw1;

            total=balance-withdraw1;
            
        }
        else{
            total=balance;
            cout<<"you can not withdraw balance";
        }
    }

    void deposit()
    {
        cout<<"\n enter a deposit balance:";
        cin>>deposit1;

        total=total+deposit1;
    }

    void display()
    {
        cout<<"\n account number:"<<accountno;
        cout<<"\n name:"<<name;
        cout<<"\n withdraw:"<<withdraw1;
        cout<<"\n deposit:"<<deposit1;
        cout<<"\n total:"<<total;
    }
};

int main()
{
    bank b;
    b.getdata();
    b.withdraw();
    b.deposit();
    b.display();
    return 0;
}