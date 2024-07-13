#include <iostream>

using namespace std;

class electronic
{
    public:
    char name[30];
    int price;

    public:

    void setdata();

    int total(electronic c1,electronic c2)
    {
        int ans;
        ans=c1.price+c2.price;

        if(ans>20000)
        {
            int ans1 =(ans*5/100);
            ans-=ans1;
            return ans;
        }
        else {
            return ans;
        }
    }

    electronic display(int price1)
    {
        int ch;
        electronic c4;
        cout<<"\n1.online \n2.cash\n";
        cout<<"\n enter your choice:";
        cin>>ch;

        if(ch==1)
        {
            int discount=(price1*10)/100;
            c4.price=price1-discount;
        }
        else{
            c4.price=price1;
        }
        
        return c4;
    }
};

void electronic::setdata()
{
    cout<<"\n enter a item name:";
    cin>>name;
    cout<<"\n enter a item price:";
    cin>>price;
}

int main()
{
    int ans,ans2;
    electronic c1,c2;
    c1.setdata();
    c2.setdata();
    ans=c1.total(c1,c2);
    c1=c1.display(ans);

    cout<<"\n item name:"<<c1.name;
    cout<<"\n item name:"<<c2.name;
    cout<<"\n item price:"<<c1.price;
    return 0;
}