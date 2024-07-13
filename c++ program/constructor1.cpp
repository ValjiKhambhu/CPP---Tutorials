#include <iostream>

using namespace std;

class student 
{
    char name[40];
    int sub1,sub2,sub3,total,percentage;

    public:

    student()
    {
        static int count=0;
        count++;
        cout<<"\n\n detail of student-"<<count;
        cout<<"\n enter a name:";
        cin>>name;
        cout<<"\n enter a sub1 marks:";
        cin>>sub1;
        cout<<"\n enter a sub2 marks:";
        cin>>sub2;
        cout<<"\n enter a sub3 marks:";
        cin>>sub3;

        cout<<"\n name:"<<name;
        cout<<"\n sub1:"<<sub1;
        cout<<"\n sub2:"<<sub2;
        cout<<"\n sub3:"<<sub3;

        total=sub1+sub2+sub3;
        cout<<"\n total:"<<total;

        percentage=total/3;
        cout<<"\n percentage:"<<percentage;

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
    student s[4];
    return 0;
}