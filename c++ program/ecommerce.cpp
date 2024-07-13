#include <iostream>

using namespace std;
int cloth_status=0;
int shoe_status=0;
class customer
{
    char name[30];
    int cloth_price=100;
    int shoe_price=200;
    int shoe_count=0;
    int cloth_count=0;
    int ch,dis=0,total_c=0,total_s=0;

    public:
    void getdata()
    {
        cout<<"\n enter a name:";
        cin>>name;

        cout<<"\n1.cloth buy";
        cout<<"\n enter a your choice :";
        cin>>ch;
        if(ch==1)
        {
            cout<<"\n cloth buy";
            cloth_status++;
        }

        cout<<"\n1.shoe buy";
        cout<<"\n enter your choice:";
        cin>>ch;
        if(ch==1)
        {
            cout<<"\n shoes buy";
            shoe_status++;
        }
        
    }

    void calculate()
    {
        if(cloth_status>=5)
        {
            //cloth_count++;
            dis=cloth_price*10/100;
            total_c=cloth_price-dis;
        }
        else{
            total_c=100;
        }
        if(shoe_status>=5)
        {
            //cloth_count++;
            dis=shoe_price*10/100;
            total_s=shoe_price-dis;
        }
        else
        {
            total_s=200;
        }
    }

    void display()
    {
        cout<<"\n name:"<<name;
        cout<<"\ntotal cloth price:"<<total_c;
        cout<<"\ntotal shoes price:"<<total_s;

    }
};


int main()
{
    customer c[5];
    for(int i=0;i<5;i++)
    {
        c[i].getdata();
    }

    for(int i=0;i<5;i++)
    {
        c[i].calculate();
    }
    for(int i=0;i<5;i++)
    {
        c[i].display();
    }
    return 0;
}