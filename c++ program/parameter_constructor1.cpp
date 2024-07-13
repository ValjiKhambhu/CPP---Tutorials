#include <iostream>

using namespace std;

/*class result
{
    public:

    result(int total,int &percentage)
    {
        cout<<"\n total:"<<total;
        percentage=(total*100)/300;
    }

    result(int percentage)
    {

        cout<<"\n percentage:"<<percentage<<"%";
        if(percentage>100)
        {
            cout<<"\n invalid";
        }
        else if(percentage>=80)
        {
            cout<<"\n grade:a";
        }
        else if(percentage>=70)
        {
            cout<<"\n grade:b";
        }
        else if(percentage>=60)
        {
            cout<<"\n grade:c";
        }
        else if(percentage>=50)
        {
            cout<<"\n grade:d";
        }
        else if(percentage>=35)
        {
            cout<<"\n grade:e";
        }
        else{
            cout<<"\n fail";
        }
    }
};

int main()
{
    char name[40];
    int cpp,sql,math,total,percentage;

    cout<<"\n enter your name:";
    cin>>name;
    cout<<"\n enter a cpp marks:";
    cin>>cpp;
    cout<<"\n enter a sql marks:";
    cin>>sql;
    cout<<"\n enter a math marks:";
    cin>>math;

    total=cpp+sql+math;
    result s1(total,percentage);
    result s2(percentage);
    return 0;
}*/

class result
{
    //int p;
    public:
    int p;
    result(int total)
    {
        cout<<"\n total:"<<total;
        p=total/3;
    }

    result(float percentage)
    {

        cout<<"\n percentage:"<<percentage<<"%";
        if(percentage>100)
        {
            cout<<"\n invalid";
        }
        else if(percentage>=80)
        {
            cout<<"\n grade:a";
        }
        else if(percentage>=70)
        {
            cout<<"\n grade:b";
        }
        else if(percentage>=60)
        {
            cout<<"\n grade:c";
        }
        else if(percentage>=50)
        {
            cout<<"\n grade:d";
        }
        else if(percentage>=35)
        {
            cout<<"\n grade:e";
        }
        else{
            cout<<"\n fail";
        }
    }
};

int main()
{
    char name[40];
    int cpp,sql,math,total,percentage;

    cout<<"\n enter your name:";
    cin>>name;
    cout<<"\n enter a cpp marks:";
    cin>>cpp;
    cout<<"\n enter a sql marks:";
    cin>>sql;
    cout<<"\n enter a math marks:";
    cin>>math;

    total=cpp+sql+math;
    result s1(total);
    result s2(s1.p);
    return 0;
}