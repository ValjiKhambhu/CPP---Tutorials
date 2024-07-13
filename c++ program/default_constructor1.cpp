#include <iostream>

using namespace std;

class hotel
{
    char name[20];
    int ch,i=0;
    int pizza=500,pizza_price;
    int quantity,quantity1,pizza1,pizza2;
    int burger=400,burger_price=0;
    int dhosa=300,dhosa_price=0;
    int tax=0,discount=0;
    public:
    hotel()
    {
        cout<<"\n----- hotel menu ------";
        cout<<"\n1.pizza-500 \n2.burger-400 \n3.dhosa=300 \n";

        cout<<"\n enter your name:";
        cin>>name;

        while(i<3)
        {
            cout<<"\n enter your choice:";
            cin>>ch;
        if(ch==1)
        {
            cout<<"\n enter quantity of pizza:";
            cin>>quantity;

            if(quantity%2==0)
            {
                quantity1=quantity/2;
                pizza1=pizza*quantity;
                pizza2=pizza*quantity1;
                pizza_price=pizza1-pizza2;
            }
            else if(quantity%2==1)
            {
                quantity1=quantity/2;
                pizza1=pizza*quantity;
                pizza2=pizza*quantity1;
                pizza_price=pizza1-pizza2;
            }
        }

        else if(ch==2)
        {
            cout<<"\n enter a quantity of burger:";
            cin>>quantity;

            burger_price=burger*quantity;
        }

        else if(ch==3)
        {
            cout<<"\n enter quantity of dhosa:";
            cin>>quantity;

            dhosa_price=dhosa*quantity;
        }

        else if(ch==0)
        {
            break;
        }
        i++;
        }

        cout<<"\n name:"<<name;
        cout<<"\n total pizza price:"<<pizza_price;
        cout<<"\n total price of burger:"<<burger_price;
        cout<<"\n total price of dhosa:"<<dhosa_price;

        int total_price=pizza_price+burger_price+dhosa_price;

        if(total_price>1000)
        {
            tax=total_price*10/100;
            total_price+=tax;
            cout<<"\n tax is:"<<tax;
        }

        if(total_price>1500)
        {
            discount=total_price*15/100;
            total_price-=discount;
            cout<<"\n discount:"<<discount;
        }

        cout<<"\n total price is: "<<total_price;

    }
};

int main()
{
    hotel h;
    return 0;
}