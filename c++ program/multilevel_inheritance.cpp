#include <iostream>

using namespace std;

class product 
{
    char name[30];
    int price;
    char type[40];
public:
    void getproductdata()
    {
        cout<<"\n enter a name of product:";
        cin>>name;
        cout<<"\n enter a price of product:";
        cin>>price;
        cout<<"\n enter a type of product:";
        cin>>type;

    }

    void displayproduct()
    {
        cout<<"\n name:"<<name;
        cout<<"\n price:"<<price;
        cout<<"\n type:"<<type;
    }

    int getprice()
    {
        return price;
    }

};

class discription:public product
{
    char discription[30];

public:
    void getdiscriptiondata()
    {
        cout<<"\n enter a discription of product:";
        cin>>discription;
    }

    void displaydiscriptiondata()
    {
        cout<<"\n discription is:"<<discription;
    }
};

class discount:public discription
{
    float dis,discountamount,netamount;
public:
    void getdiscountdata(int p)
    {
        cout<<"\n enter a discount of product:";
        cin>>dis;
        discountamount=(p*dis)/100;
        netamount=p-discountamount;
    }

    void displaydiscountdata()
    {
        cout<<"\n discount:"<<dis;
        cout<<"\n discount amount:"<<discountamount;
        cout<<"\n netamount:"<<netamount;
    }

     int getamount()
    {
        return netamount;
    }
};

class bank:public discount
{
    int offer;
    int voiceamount;
public:
    void displaybankdata()
    {
        voiceamount=getamount()-(getamount()*10)/100;
        cout<<"\n invoice amount is:"<<voiceamount;
    }
};

int main()
{
    int a;
    bank p;
    p.getproductdata();
    p.getdiscriptiondata();
    a=p.getprice();
    p.getdiscountdata(a);

    p.displayproduct();
    p.displaydiscriptiondata();
    p.displaydiscountdata();
    p.displaybankdata();

    return 0;
}