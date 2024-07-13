#include <iostream>

using namespace std;

class mobile
{
    int productno,price,modelyear;
public:
    void getdata()
    {
        cout<<"\n enter a product number:";
        cin>>productno;
        cout<<"\n enter a price:";
        cin>>price;
        cout<<"\n enter a model year:";
        cin>>modelyear;
    }

    void display()
    {
        cout<<"\n product no:"<<productno;
        cout<<"\n price:"<<price;
        cout<<"\n modelyear:"<<modelyear;
    }
};

class charger:public mobile
{
    char chargertype[30];
    int price,mfyear;
public:
    void getdata()
    {
        cout<<"\n enter a charger type:";
        cin>>this->chargertype;
        cout<<"\n enter a charger price:";
        cin>>price;
        cout<<"\n enter a mf year:";
        cin>>mfyear;
    }

    void display()
    {
        cout<<"\n charger type:"<<chargertype;
        cout<<"\n charger price:"<<price;
        cout<<"\n mf year:"<<mfyear;
    }
};

int main()
{
    /* charger m1;

    m1.mobile::getdata();
    m1.mobile::display();

    m1.getdata();
    m1.display(); */

    charger a;
    charger *b;

    b=&a;

    b->getdata();

    b->mobile::getdata();

    return 0;
}