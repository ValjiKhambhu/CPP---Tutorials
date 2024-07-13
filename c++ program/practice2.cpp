#include <iostream>

using namespace std;

class model
{
    int eno;
    char brand[50],model[30]; 
    char city[30];
    int price,dis,dis1,totalprice,c,extra;

    public:
    void getdata()
    {
        cout<<"\n enter a car model:";
        cin>>model;
        cout<<"\n enter a car brand:";
        cin>>brand;
        cout<<"\n enyter a engine number:";
        cin>>eno;
        cout<<"\n enter a city:";
        cin>>city;
        cout<<"\n enter a price:";
        cin>>price;
    }

    void car(int e=10)
    {
        cout<<"\n1.if you can choose mahindra then extra 10 % discount \n2.other brand choose then no extra discount\n";
        cout<<"\n enter a your choice:";
        cin>>c;

        if(c==1)
        {
            extra=price*e/100;
            cout<<"\n extra discount :"<<extra;
        }
        else 
        {  
            extra=0;
            cout<<"\n no discount";
        }
    }

    void display(float d)
    {
        car();
        dis=price*d/100;
        totalprice=price-dis;
        //dis1=price*e/100;
        cout<<"\n model:"<<model;
        cout<<"\n brand:"<<brand;
        cout<<"\n engine number:"<<eno;
        cout<<"\n city:"<<city;
        cout<<"\n totalprice:"<<totalprice-extra;
    }

    void display(int d,char state[50])
    {
        car();
        dis=price*d/100;
        totalprice=price-dis;
        cout<<"\n model:"<<model;
        cout<<"\n engine number:"<<eno;
        cout<<"\n brand:"<<brand;
        cout<<"\n city:"<<city;
        cout<<"\n state:"<<state;
        cout<<"\n totalprice:"<<totalprice-extra;
    }

};

int main()
{
    int i,a,b;
    char state[50];
    model m[3];

    for(i=0;i<1;i++)
    {

    m[i].getdata();

    cout<<"\n1.if you can choose gujrat then discount is 20 % \n2.choose other then discount is 10% \n";
    cout<<"\n enter a your choice:";
    cin>>a;

    //cout<<"\n 1.if you can buy mahindra then 10% extra discount \n2.other company";
    //cout<<"\n enter a your choice:";
    //cin>>b;

    if(a==1)
    {
        m[i].display(20);
    }

    else //if(b==1)

    {
        cout<<"\n enter a state:";
        cin>>state;
        m[i].display(10,state);
    }
    }
    return 0;
}