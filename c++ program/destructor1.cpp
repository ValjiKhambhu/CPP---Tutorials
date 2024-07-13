#include <iostream>

using namespace std;

int count=0;
class num
{
    public:
    num()
    {
        count++;
        cout<<"\n this is the time when constructor is called for objects number:"<<count<<endl;
    }

    ~num()
    {
        cout<<"\n this is the time whe destructor is called for objects number:"<<count<<endl;
        count--;
    }
};

int main()
{
    cout<<"\n we are inside our main function:"<<endl;
    cout<<"\n creating first object n1"<<endl;
    num n1;
    {
        cout<<"\n entering this block"<<endl;
        cout<<"\n creating two more objects"<<endl;
        num n2,n3;
        cout<<"\n exiting this block"<<endl;
    }

    cout<<"\n back to main"<<endl;

    return 0;
}