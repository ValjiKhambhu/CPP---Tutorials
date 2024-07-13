#include <iostream>

using namespace std;
int perc;
void grade()
{
    if(perc>100)
    {
        cout<<"\n invalid";
    }
    else if(perc>=80)
    {
        cout<<"\n grade:a";
    }
    else if(perc>=70)
    {
        cout<<"\n grade:b";
    }
    else if(perc>=60)
    {
        cout<<"\n grade:c";
    }
    else if(perc>=50)
    {
        cout<<"\n grade:d";
    }
    else if(perc>=35)
    {
        cout<<"\n grade:e";
    }
    else{
        cout<<"\n fail";
    }
}

void grace(double cpp,double database,double mfcs)
{
     if(cpp<40)
    {
        cout<<"\n gracing marks is require in cpp:"<<cpp<<"+"<<40-cpp;
    }
     if(database<40)
    {
        cout<<"\n gracing marks is require in database:"<<database<<"+"<<40-database;
    }
     if( mfcs<40)
    {
        cout<<"\n gracing marks is require in mfcs:"<<mfcs<<"+"<<40-mfcs;
    }
}

void result(double cpp,double database,double mfcs)
{
    int adfs,total;
    cout<<"\n enter a adfs marks:";
    cin>>adfs;

    total=cpp+database+mfcs+adfs;

    perc=(total*100)/400;
    cout<<"\n cpp:"<<cpp;
    cout<<"\n database:"<<database;
    cout<<"\n mfcs:"<<mfcs;
    cout<<"\n adfs:"<<adfs;
    cout<<"\n total:"<<total;
    cout<<"\n percentage:"<<perc;
    grade();
    grace(cpp,database,mfcs);

     if( adfs<40)
    {
        cout<<"\n gracing marks is require in adfs:"<<adfs<<"+"<<40-adfs;
    }
}
void result(double cpp,double database,double mfcs,double ecom)
{
    int total;
     total=cpp+database+mfcs+ecom;

    perc=(total*100)/400;
    cout<<"\n cpp:"<<cpp;
    cout<<"\n database:"<<database;
    cout<<"\n mfcs:"<<mfcs;
    cout<<"\n ecom:"<<ecom;
    cout<<"\n total:"<<total;
    cout<<"\n percentage:"<<perc;
    grade();
    grace(cpp,database,mfcs);
     if(ecom<40)
    {
        cout<<"\n gracing marks is require in :ecom"<<ecom<<"+"<<40-ecom;
    }
}

int main()
{
    int cpp,database,mfcs,ecom;
    cout<<"\n enter a c++ marks:";
    cin>>cpp;
    cout<<"\n enter a database marks:";
    cin>>database;
    cout<<"\n enter a mfcs marks:";
    cin>>mfcs;
    cout<<"\n enter a ecom marks:";
    cin>>ecom;

    result(cpp,database,mfcs);
    result(cpp,database,mfcs,ecom);
    return 0;
}