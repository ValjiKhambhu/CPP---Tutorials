#include <iostream>

using namespace std;

class marksheet
{
    public:
    int value;
    char g;

    marksheet total(marksheet o1,marksheet o2,marksheet o3)
    {
        marksheet total;
        total.value=o1.value+o2.value+o3.value;

        return total;
    }

    float percentage(marksheet o4)
    {
        float per;
        per=(o4.value*100)/300;
        return per;
    }

    marksheet grade(float per1)
    {
        marksheet gra;
         if(per1>=90)
        {
            gra.g='a';
        }
        else if(per1>=80)
        {
            gra.g='b';
        }
        else if(per1>=70)
        {
            gra.g='c';
        }
        else if(per1>=60)
        {
            gra.g='d';
        }
        else if(per1>=35)
        {
            gra.g='e';
        }
        else 
        {
            gra.g='f';
        }
        return gra;
    }
};

int main()
{
    
    marksheet o1,o2,o3,o4;
    int value;
    int per1;
    char g;
    o1.value=90;
    o2.value=98;
    o3.value=91;

    o4=o4.total(o1,o2,o3);
    cout<<"\n total marks:"<<o4.value;

    per1=o4.percentage(o4);
    cout<<"\n percentage:"<<per1;

    o4=o4.grade(per1);
    cout<<"\n grade:"<<o4.g;
    return 0;
}