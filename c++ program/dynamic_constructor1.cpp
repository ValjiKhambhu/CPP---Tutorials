#include <iostream>

using namespace std;

class bank
{
    int principle_amo,year;
    float rate;
    float return_amount;

    public:
        bank(int p,int y,float r);
        bank(int p,int y,int r);
        void show();
};

bank::bank(int p,int y,float r)
{
    principle_amo=p;
    year=y;
    rate =r;
    return_amount=principle_amo;

    for(int i=0;i<year;i++)
    {
        return_amount=return_amount*(1+rate);
    }
}

bank::bank(int p,int y,int r)
{
    principle_amo=p;
    year=y;
    rate=float (r)/100;
    return_amount=principle_amo;

    for(int i=0;i<year;i++)
    {
        return_amount=return_amount*(1+rate);
    }
}

void bank::show()
{
    cout<<"\n principle amount is "<<principle_amo <<" and after "<<year<<" year return amount is "<<return_amount;
}

int main()
{
    //bank b1,b2;

    int p,y,R;
    float r;

    cout<<"\n enter a principle amount:";
    cin>>p;
    cout<<"\n enter a year of amount:";
    cin>>y;
    cout<<"\n enter a rate of amonut:";
    cin>>r;
    bank b1=bank(p,y,r);
    b1.show();

    cout<<"\n enter a principle amount:";
    cin>>p;
    cout<<"\n enter a year of time:";
    cin>>y;
    cout<<"\n enter a rate of intrest:";
    cin>>R;

    bank b2=bank(p,y,R);
    b2.show();
    return 0;
}
