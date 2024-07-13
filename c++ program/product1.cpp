#include <iostream>
#include <string.h>

using namespace std;

class product
{
    int pro_id;
    char seller_name[30];
    int price,dis1,dis2,dis3;
    char seller_city[20],buyer_city[10];
    public:

    void getdata()
    {
        cout<<"\n enter a product id:";
        cin>>pro_id;
        cout<<"\n enter a seller name:";
        cin>>seller_name;
        cout<<"\n enter a product price:";
        cin>>price;
    }

    void discount()
    {
        if(price>=400 && price<1000)
        {
            dis1=price*10/100;
            dis2=0;
        }
        else if(price>=1000)
        {
            dis2=price*20/100;
            dis1=0;
        }
        else{
            dis1=0,dis2=0;
        }
    }

    void discount1(char seller_city1[30],char buyer_city1[40],int dis)
    {
        dis3=price*dis/100;
        strcpy(seller_city,seller_city1);
        strcpy(buyer_city,buyer_city1);
    }

    void discount1(char seller_city1[30],char buyer_city1[40])
    {
        dis3=0;
        strcpy(seller_city,seller_city1);
        strcpy(buyer_city,buyer_city1);
    }

    void display()
    {
        cout<<"\n product id:"<<pro_id;
        cout<<"\n seller name:"<<seller_name;
        cout<<"\n price:"<<price;
        cout<<"\n seller city:"<<seller_city;
        cout<<"\n buyer city:"<<buyer_city;
        cout<<"\n total price:"<<price-dis1-dis2-dis3;
    }
};

int main()
{
    char a[20],b[20];
    product p;
    int ch;
    p.getdata();

    cout<<"\n enter seller city:";
    cin>>a;
    cout<<"\n enter a buyer city:";
    cin>>b;
    p.discount();

    cout<<"\n1.enter 1 if city is same \n2.city is not same";
    cout<<"\n enter your chice:";
    cin>>ch;
    if(ch==1)
    {
        cout<<"\n city is not same";
         p.discount1(a,b,5);
    }
    else{
        cout<<"\n city is same";
         p.discount1(a,b);
    }

    p.display();
    return 0;
}