#include <iostream>

using namespace std;

class car
{
    char brand1[20],brand2[20];
    int model1,model2,total1,total2;
    char availibility[30];

    public:

    void getdata()
    {
        cout<<"\n enter a car1 brand:";
        cin>>brand1;
        cout<<"\n enter a car1 model:";
        cin>>model1;

        rent1();

        cout<<"\n enter a car2 brand:";
        cin>>brand2;
        cout<<"\n enter a car2 model:";
        cin>>model2;
        rent2();
    }

    void rent1()
    {
        int ch;
        cout<<"\n 1.enter 1 then available car1 \n2.not available\n";
        cout<<"\n enter your choice:";
        cin>>ch;

        if(ch==1)
        {
            int rent=100,hour;
            cout<<"\n car1 is available \n";
            cout<<"\n per_km rent of car1 is:"<<rent;
            cout<<"\n enter how many hour car1 is rented:";
            cin>>hour;

            total1=rent*hour;
        }
        else{
            cout<<"\n car1 is not available";
            total1=0;
        }
    }

    void rent2()
    {
        int ch;
        cout<<"\n 1.enter 1 then available car2 \n2.not available\n";
        cout<<"\n enter your choice:";
        cin>>ch;

        if(ch==1)
        {
            int rent=100,hour;
            cout<<"\n\n car2 is available \n";
            cout<<"\n per_km rent of car2 is:"<<rent;
            cout<<"\n enter how many hour car2 is rented:";
            cin>>hour;

            total2=rent*hour;
        }
        else{
            cout<<"\n car2 is not available";
            total2=0;
        }
    }

    void display()
    {
        cout<<"\n car1 brand:"<<brand1;
        cout<<"\n car1 model:"<<model1;
        cout<<"\n your total car1 rent is:"<<total1;
        
        cout<<"\n car2 brand:"<<brand2;
        cout<<"\n car2 model:"<<model2;
        cout<<"\n your total car1 rent is:"<<total2;
    }
};

int main()
{
    car c;
    c.getdata();
    c.display();
    return 0;
}