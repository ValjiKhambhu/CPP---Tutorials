#include <iostream>

using namespace std;

class student
{
    int id,sem;
    char name[30],dept[30];
    int cp,math,sql;
    int ecom,mfcs;
    int total,ch;
    float perc;

    public:
    void getdata();
    void calculate();
    void print();
    void gracing();
};

void student::getdata()
{
    cout<<"\n enter a id:";
    cin>>id;
    cout<<"\n enter a sem:";
    cin>>sem;
    cout<<"\n enter a name:";
    cin>>name;
    cout<<"\n enter a dept:";
    cin>>dept;
    cout<<"\n enter a cpp marks:";
    cin>>cp;
    cout<<"\n enter a math marks:";
    cin>>math;
    cout<<"\n enter a sql marks:";
    cin>>sql;

    cout<<"\n1.ecom \n2.mfcs";
    cout<<"\n enter your choice:\n";
    cin>>ch;
    if(ch==1)
    {
        cout<<"\n enter a ecom marks:";
        cin>>ecom;
        mfcs=0;
    }
    else{
        cout<<"\n enter a mfcs marks:";
        cin>>mfcs;
        ecom=0;
    }

}

void student::calculate()
{
    total=cp+math+sql+ecom+mfcs;
    //cout<<"\n total:"<<total;
    perc=total/4;
    //cout<<"\n percentage:"<<perc;
}

void student::print()
{
    cout<<"  "<<id<<"   "<<sem<<"    "<< name<<"   "<< dept<<"    "<< cp<<"   "<< math<<"   "<< sql<<"   "<< ecom<<"   "<< mfcs<<"   "<< total<<"   "<< perc<<"   " ;
    // if(perc>100)
    // {
    //     cout<<"\n invalid";
    // }
    // else if(perc>=90)
    // {
    //     cout<<grade<<"a+";
    // }
    // else if(perc>=80)
    // {
    //     cout<<grade<<"a";
    // }
    // else if(perc>=70)
    // {
    //     cout<< grade<<"b";
    // }
    // else if(perc>=60)
    // {
    //     cout<<grade<<"c";
    // }
    // else if(perc>=50)
    // {
    //     cout<<grade<<"d";
    // }
    // else if(perc>=35)
    // {
    //     cout<<grade<<"e";
    // }
    // else{
    //     cout<<grade<<"fail";
    // }
    // cout<<"\n";

    if(perc>100)
    {
        cout<<"\n invalid";
    }
    else if(perc>=90)
    {
        cout<<"a+";
    }
    else if(perc>=80)
    {
        cout<<"a";
    }
    else if(perc>=70)
    {
        cout<<"b";
    }
    else if(perc>=60)
    {
        cout<<"c";
    }
    else if(perc>=50)
    {
        cout<<"d";
    }
    else if(perc>=35)
    {
        cout<<"e";
    }
    else{
        cout<<"fail";
    }
    cout<<"\n";


}

void student::gracing()
{
    if(cp<40)
    {
        cout<<"\n gracing marks is require in cp:"<<40-cp;
    }
     if(math<40)
    {
        cout<<"\n gracing marks is require in math:"<<40-math;
    }
     if( sql<40)
    {
        cout<<"\n gracing marks is require in sql:"<<40-sql;
    }
     if(ecom<40 && ecom!=0)
    {
        cout<<"\n gracing marks is require in ecom:"<<40-ecom;
    }
     if(mfcs<40 && mfcs!=0)
    {
        cout<<"\n gracing marks is require in mfcs:"<<40-mfcs;
    }
}

int main()
{
    int i;
    student s[10];
    for(i=0;i<2;i++)
    {
        s[i].getdata();
        s[i].calculate();
    }

    cout<<"\n id  sem  name    dept   cp  math sql  ecom mfcs total perc grade \n";
    cout<<"________________________________________________________________\n";
    for(i=0;i<2;i++)
    {
        s[i].print();
    }

    for(i=0;i<2;i++)
    {
        s[i].gracing();
    }
    return 0;
}