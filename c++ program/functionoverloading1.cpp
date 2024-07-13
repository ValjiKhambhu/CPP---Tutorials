#include <iostream>

using namespace std;


void result(int c=40,int web=40,int math=40,int js=40)
{
    cout<<"\n c:"<<c;
    cout<<"\n web:"<<web;
    cout<<"\n math:"<<math;
    cout<<"\n js:"<<js;
    int total=c+web+math+js;
    cout<<"\n total:"<<total;
    int perc=total/4;
    cout<<"\n percentage:"<<perc;
    if(perc>100)
    {
        cout<<"invalid";
    }
    else if(perc>=90)
    {
        cout<<"\na+ grade";
    }
     else if(perc>=80)
    {
        cout<<"\na grade";
    }
    else  if(perc>=70)
    {
        cout<<"\nb grade";
    }
    else  if(perc>=60)
    {
        cout<<"\nc grade";
    }
    else  if(perc>=50)
    {
        cout<<"\nd grade";
    }
    else  if(perc>=35)
    {
        cout<<"\n1e grade";
    }
    else
    {
        cout<<"\n fail";
    }
}

int result(float c=40,float web=40,float math=40,float java=40)
{
    cout<<"\n c:"<<c;
    cout<<"\n web:"<<web;
    cout<<"\n math:"<<math;
    cout<<"\n js:"<<java;
    int total=c+web+math+java;
    cout<<"\n total:"<<total;
    int perc=total/4;
    cout<<"\n percentage:"<<perc;
    if(perc>100)
    {
        cout<<"invalid";
    }
    else if(perc>=90)
    {
        cout<<"\na+ grade";
    }
     else if(perc>=80)
    {
        cout<<"\na grade";
    }
    else  if(perc>=70)
    {
        cout<<"\nb grade";
    }
    else  if(perc>=60)
    {
        cout<<"\nc grade";
    }
    else  if(perc>=50)
    {
        cout<<"\nd grade";
    }
    else  if(perc>=35)
    {
        cout<<"\n1e grade";
    }
    else
    {
        cout<<"\n fail";
    }
}

int main()
{
    int c,web,math,js,java,choice;
    cout<<"\n enter a c marks:";
    cin>>c;
    cout<<"\n enter a web marks:";
    cin>>web;
    cout<<"\n enter a math marks:";
    cin>>math;
    cout<<"\n enter a js marks:";
    cin>>js;
    cout<<"\n enter a java marks:";
    cin>>java;


    cout<<"\n choose subject :";
    cout<<"\n1.js \n2.java";
    cout<<"\n enter a your choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
        result(c,web);
        break;

        case 2:
        result(c,web,math);
        break;

    }
    return 0;
}