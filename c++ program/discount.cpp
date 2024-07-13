#include <iostream>

using namespace std;

class discount
{
    char pro_name[3],category[3];
    float price,dis,t_price;

    public:
    void getdata()
    {
        cout<<"\n enter a product name:";
        cin>>pro_name;
        cout<<"\n enter a category:";
        cin>>category;
        cout<<"\n enter a price:";
        cin>>price;
    }

    void display()
    {
        cout<<"\n product name:"<<pro_name;
        cout<<"\n cetegory:"<<category;
        cout<<"\n price:"<<price;
    }

    void discou(int d)
    {
        dis=price*d/100;
        cout<<"\n\n discount is:"<<dis;
    }

    void to_price()
    {
        t_price=price-dis;
        cout<<"\n \n after discount price is:"<<t_price;
    }

    void add()
    {
        float cgst=5,sgst=12;
        float gst1,gst2;
        gst1=t_price*cgst/100;
        cout<<"\n cgst:"<<gst1;

        gst2=t_price*sgst/100;
        cout<<"\n sgst:"<<gst2;

        cout<<"\n\n after gst add total price is:"<<t_price+gst1+gst2;
    }
};

int main()
{
    discount d1;
    d1.getdata();
    d1.display();
    int d;
    cout<<"\n enter a discount:";
    cin>>d;
    d1.discou(d);
    d1.to_price();
    d1.add();
    return 0;
}