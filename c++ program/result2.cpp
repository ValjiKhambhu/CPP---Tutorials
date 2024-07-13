#include <iostream>

using namespace std;

class student
{
    int id;
    char fname[40],lname[30],address[40];
    int cpp,sql,mfcs,adfs;
    int total,perc;

    public:

    void getdata()
    {
        cout<<"\n enter a student id:";
        cin>>id;
        cout<<"\n enter a student firstname:";
        cin>>fname;
        cout<<"\n enter a student lastname:";
        cin>>lname;
        cout<<"\n enter a student address:";
        cin>>address;
        cout<<"\n enter a cpp marks:";
        cin>>cpp;
        cout<<"\n enter a sql marks:";
        cin>>sql;
        cout<<"\n enter a mfcs marks:";
        cin>>mfcs;
        cout<<"\n enter a adfs marks:";
        cin>>adfs;
    }

    void totals()
    {
        total=cpp+sql+mfcs+adfs;
    }

    void percentage()
    {
        perc=(total*100)/400;
    }

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

    void display()
    {
        cout<<"\n id:"<<id;
        cout<<"\n firstname:"<<fname;
        cout<<"\n lastname:"<<lname;
        cout<<"\n address:"<<address;
        //cout<<"\n cpp marks:"<<cpp;
        //cout<<"\n sql marks:"<<sql;
        //cout<<"\n mfcs marks:"<<mfcs;
        //cout<<"\n adfs marks:"<<adfs;
        cout<<"\n totalmarks:"<<total;
        cout<<"\n percentage:"<<perc;
    }
};

int main()
{
    student s[10];

    for(int i=0;i<10;i++)
    {
        s[i].getdata();
        s[i].totals();
        s[i].percentage();
        s[i].display();
        s[i].grade();
    }
    return 0;
}