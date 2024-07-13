#include <iostream>

using namespace std;

class student
{
    char name[20];
    char cls[5];
    int marks[5],i;
    int  totalmarks;
    int percentage;
    int grade;

    public:

    void getdata();
    void calculatetotal();
    void calculatepercentage();
    void calculategrade();
    void display();
};

void student::getdata()
{
    cout<<"\n enter student name:";
    cin>>name;
    cout<<"\n enter a student class:";
    cin>>cls;

    for(i=0;i<5;i++)
    {
        cout<<"\n enter a subject "<<i+1<<" marks:";
        cin>>marks[i];
    }
    
}

void student::calculatetotal()
{
    totalmarks=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
}

void student::calculatepercentage()
{
    percentage= totalmarks*100/500;
}

void student::calculategrade()
{
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

void student::display()
{
    cout<<"\n name:"<<name;
    cout<<"\n class:"<<cls;
    cout<<"\n subject1 marks:"<<marks[0];
    cout<<"\n subject2 marks:"<<marks[1];
    cout<<"\n subject3 marks:"<<marks[2];
    cout<<"\n subject4 marks:"<<marks[3];
    cout<<"\n subject5 marks:"<<marks[4];
    cout<<"\n totalmarks:"<<totalmarks;
    cout<<"\n percentage:"<<percentage<<"%";
}
int main()
{
    student s;
    s.getdata();
    s.calculatetotal();
    s.calculatepercentage();
    s.display();
    s.calculategrade();
    return 0;
}