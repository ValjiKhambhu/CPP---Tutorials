#include <iostream>

using namespace std;

class product
{
    char name[30];
    int code,price,discount,totalprice;

    public:

    void getdata()
    {
        cout<<"\n enter a product name:";
        cin>>name;
        cout<<"\n enter a product code:";
        cin>>code;
        cout<<"\n enter a product price:";
        cin>>price;
    }

    void display(int discount,long int outside)
    {
        int calculatedis=(price*discount)/100;        
        cout<<"\n product name:"<<name;
        cout<<"\n product code:"<<code;
        cout<<"\n total product discount:"<<calculatedis;
        cout<<"\n your dilivery charges is 700 rs \n";
        totalprice=price-calculatedis;
        cout<<"\n total price:"<<totalprice+700;
    }

    void display(float discount)
    {
        int calculatedis=(price*discount)/100;
        cout<<"\n product name:"<<name;
        cout<<"\n product code:"<<code;
        cout<<"\n total product discount:"<<calculatedis;
        cout<<"\n your dilivery charges is 50 rs \n";
        totalprice=price-calculatedis;
        cout<<"\n total price:"<<totalprice+50;
    }


};

int main()
{
    product p[3];
    int i,d,h=20;

    for(i=0;i<3;i++)
    {
        p[i].getdata();

        cout<<"\n1.dilivey in inside in dia \n2.dilivery in outside india\n";
        cout<<"\n enter your choice:\n";
        cin>>d;

        if(d==1)
        {
            p[i].display(h);
        }

        else
        {
           p[i].display(h,345);
        }
    }
    return 0;
}